
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_netconf.hpp"

namespace ydk {
namespace ietf_netconf {

GetConfigRpc::GetConfigRpc()
    :
    input(std::make_shared<GetConfigRpc::Input>())
	,output(std::make_shared<GetConfigRpc::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "get-config"; yang_parent_name = "ietf-netconf";
}

GetConfigRpc::~GetConfigRpc()
{
}

bool GetConfigRpc::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool GetConfigRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string GetConfigRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:get-config";

    return path_buffer.str();

}

const EntityPath GetConfigRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> GetConfigRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<GetConfigRpc::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<GetConfigRpc::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GetConfigRpc::get_children() const
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

void GetConfigRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> GetConfigRpc::clone_ptr() const
{
    return std::make_shared<GetConfigRpc>();
}

std::string GetConfigRpc::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string GetConfigRpc::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function GetConfigRpc::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

GetConfigRpc::Input::Input()
    :
    filter{YType::str, "filter"},
    with_defaults{YType::enumeration, "ietf-netconf-with-defaults:with-defaults"}
    	,
    source(std::make_shared<GetConfigRpc::Input::Source>())
{
    source->parent = this;

    yang_name = "input"; yang_parent_name = "get-config";
}

GetConfigRpc::Input::~Input()
{
}

bool GetConfigRpc::Input::has_data() const
{
    return filter.is_set
	|| with_defaults.is_set
	|| (source !=  nullptr && source->has_data());
}

bool GetConfigRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(filter.operation)
	|| is_set(with_defaults.operation)
	|| (source !=  nullptr && source->has_operation());
}

std::string GetConfigRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath GetConfigRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf:get-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter.is_set || is_set(filter.operation)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (with_defaults.is_set || is_set(with_defaults.operation)) leaf_name_data.push_back(with_defaults.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GetConfigRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<GetConfigRpc::Input::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GetConfigRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void GetConfigRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "filter")
    {
        filter = value;
    }
    if(value_path == "with-defaults")
    {
        with_defaults = value;
    }
}

GetConfigRpc::Input::Source::Source()
    :
    candidate{YType::empty, "candidate"},
    running{YType::empty, "running"},
    startup{YType::empty, "startup"}
{
    yang_name = "source"; yang_parent_name = "input";
}

GetConfigRpc::Input::Source::~Source()
{
}

bool GetConfigRpc::Input::Source::has_data() const
{
    return candidate.is_set
	|| running.is_set
	|| startup.is_set;
}

bool GetConfigRpc::Input::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(candidate.operation)
	|| is_set(running.operation)
	|| is_set(startup.operation);
}

std::string GetConfigRpc::Input::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath GetConfigRpc::Input::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf:get-config/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate.is_set || is_set(candidate.operation)) leaf_name_data.push_back(candidate.get_name_leafdata());
    if (running.is_set || is_set(running.operation)) leaf_name_data.push_back(running.get_name_leafdata());
    if (startup.is_set || is_set(startup.operation)) leaf_name_data.push_back(startup.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GetConfigRpc::Input::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GetConfigRpc::Input::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GetConfigRpc::Input::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "candidate")
    {
        candidate = value;
    }
    if(value_path == "running")
    {
        running = value;
    }
    if(value_path == "startup")
    {
        startup = value;
    }
}

GetConfigRpc::Output::Output()
    :
    data{YType::str, "data"}
{
    yang_name = "output"; yang_parent_name = "get-config";
}

GetConfigRpc::Output::~Output()
{
}

bool GetConfigRpc::Output::has_data() const
{
    return data.is_set;
}

bool GetConfigRpc::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation);
}

std::string GetConfigRpc::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath GetConfigRpc::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf:get-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GetConfigRpc::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GetConfigRpc::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GetConfigRpc::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
}

EditConfigRpc::EditConfigRpc()
    :
    input(std::make_shared<EditConfigRpc::Input>())
{
    input->parent = this;

    yang_name = "edit-config"; yang_parent_name = "ietf-netconf";
}

EditConfigRpc::~EditConfigRpc()
{
}

bool EditConfigRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool EditConfigRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string EditConfigRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:edit-config";

    return path_buffer.str();

}

const EntityPath EditConfigRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> EditConfigRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<EditConfigRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EditConfigRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void EditConfigRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> EditConfigRpc::clone_ptr() const
{
    return std::make_shared<EditConfigRpc>();
}

std::string EditConfigRpc::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string EditConfigRpc::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function EditConfigRpc::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

EditConfigRpc::Input::Input()
    :
    config{YType::str, "config"},
    default_operation{YType::enumeration, "default-operation"},
    error_option{YType::enumeration, "error-option"},
    test_option{YType::enumeration, "test-option"},
    url{YType::str, "url"}
    	,
    target(std::make_shared<EditConfigRpc::Input::Target>())
{
    target->parent = this;

    yang_name = "input"; yang_parent_name = "edit-config";
}

EditConfigRpc::Input::~Input()
{
}

bool EditConfigRpc::Input::has_data() const
{
    return config.is_set
	|| default_operation.is_set
	|| error_option.is_set
	|| test_option.is_set
	|| url.is_set
	|| (target !=  nullptr && target->has_data());
}

bool EditConfigRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(config.operation)
	|| is_set(default_operation.operation)
	|| is_set(error_option.operation)
	|| is_set(test_option.operation)
	|| is_set(url.operation)
	|| (target !=  nullptr && target->has_operation());
}

std::string EditConfigRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath EditConfigRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf:edit-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config.is_set || is_set(config.operation)) leaf_name_data.push_back(config.get_name_leafdata());
    if (default_operation.is_set || is_set(default_operation.operation)) leaf_name_data.push_back(default_operation.get_name_leafdata());
    if (error_option.is_set || is_set(error_option.operation)) leaf_name_data.push_back(error_option.get_name_leafdata());
    if (test_option.is_set || is_set(test_option.operation)) leaf_name_data.push_back(test_option.get_name_leafdata());
    if (url.is_set || is_set(url.operation)) leaf_name_data.push_back(url.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EditConfigRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target")
    {
        if(target == nullptr)
        {
            target = std::make_shared<EditConfigRpc::Input::Target>();
        }
        return target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EditConfigRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(target != nullptr)
    {
        children["target"] = target;
    }

    return children;
}

void EditConfigRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "config")
    {
        config = value;
    }
    if(value_path == "default-operation")
    {
        default_operation = value;
    }
    if(value_path == "error-option")
    {
        error_option = value;
    }
    if(value_path == "test-option")
    {
        test_option = value;
    }
    if(value_path == "url")
    {
        url = value;
    }
}

EditConfigRpc::Input::Target::Target()
    :
    candidate{YType::empty, "candidate"},
    running{YType::empty, "running"}
{
    yang_name = "target"; yang_parent_name = "input";
}

EditConfigRpc::Input::Target::~Target()
{
}

bool EditConfigRpc::Input::Target::has_data() const
{
    return candidate.is_set
	|| running.is_set;
}

bool EditConfigRpc::Input::Target::has_operation() const
{
    return is_set(operation)
	|| is_set(candidate.operation)
	|| is_set(running.operation);
}

std::string EditConfigRpc::Input::Target::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target";

    return path_buffer.str();

}

const EntityPath EditConfigRpc::Input::Target::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf:edit-config/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate.is_set || is_set(candidate.operation)) leaf_name_data.push_back(candidate.get_name_leafdata());
    if (running.is_set || is_set(running.operation)) leaf_name_data.push_back(running.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EditConfigRpc::Input::Target::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EditConfigRpc::Input::Target::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EditConfigRpc::Input::Target::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "candidate")
    {
        candidate = value;
    }
    if(value_path == "running")
    {
        running = value;
    }
}

CopyConfigRpc::CopyConfigRpc()
    :
    input(std::make_shared<CopyConfigRpc::Input>())
{
    input->parent = this;

    yang_name = "copy-config"; yang_parent_name = "ietf-netconf";
}

CopyConfigRpc::~CopyConfigRpc()
{
}

bool CopyConfigRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool CopyConfigRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string CopyConfigRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:copy-config";

    return path_buffer.str();

}

const EntityPath CopyConfigRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CopyConfigRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CopyConfigRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CopyConfigRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void CopyConfigRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CopyConfigRpc::clone_ptr() const
{
    return std::make_shared<CopyConfigRpc>();
}

std::string CopyConfigRpc::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string CopyConfigRpc::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function CopyConfigRpc::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

CopyConfigRpc::Input::Input()
    :
    with_defaults{YType::enumeration, "ietf-netconf-with-defaults:with-defaults"}
    	,
    source(std::make_shared<CopyConfigRpc::Input::Source>())
	,target(std::make_shared<CopyConfigRpc::Input::Target>())
{
    source->parent = this;

    target->parent = this;

    yang_name = "input"; yang_parent_name = "copy-config";
}

CopyConfigRpc::Input::~Input()
{
}

bool CopyConfigRpc::Input::has_data() const
{
    return with_defaults.is_set
	|| (source !=  nullptr && source->has_data())
	|| (target !=  nullptr && target->has_data());
}

bool CopyConfigRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(with_defaults.operation)
	|| (source !=  nullptr && source->has_operation())
	|| (target !=  nullptr && target->has_operation());
}

std::string CopyConfigRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath CopyConfigRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf:copy-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (with_defaults.is_set || is_set(with_defaults.operation)) leaf_name_data.push_back(with_defaults.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CopyConfigRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<CopyConfigRpc::Input::Source>();
        }
        return source;
    }

    if(child_yang_name == "target")
    {
        if(target == nullptr)
        {
            target = std::make_shared<CopyConfigRpc::Input::Target>();
        }
        return target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CopyConfigRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(target != nullptr)
    {
        children["target"] = target;
    }

    return children;
}

void CopyConfigRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "with-defaults")
    {
        with_defaults = value;
    }
}

CopyConfigRpc::Input::Target::Target()
    :
    candidate{YType::empty, "candidate"},
    running{YType::empty, "running"},
    startup{YType::empty, "startup"},
    url{YType::str, "url"}
{
    yang_name = "target"; yang_parent_name = "input";
}

CopyConfigRpc::Input::Target::~Target()
{
}

bool CopyConfigRpc::Input::Target::has_data() const
{
    return candidate.is_set
	|| running.is_set
	|| startup.is_set
	|| url.is_set;
}

bool CopyConfigRpc::Input::Target::has_operation() const
{
    return is_set(operation)
	|| is_set(candidate.operation)
	|| is_set(running.operation)
	|| is_set(startup.operation)
	|| is_set(url.operation);
}

std::string CopyConfigRpc::Input::Target::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target";

    return path_buffer.str();

}

const EntityPath CopyConfigRpc::Input::Target::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf:copy-config/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate.is_set || is_set(candidate.operation)) leaf_name_data.push_back(candidate.get_name_leafdata());
    if (running.is_set || is_set(running.operation)) leaf_name_data.push_back(running.get_name_leafdata());
    if (startup.is_set || is_set(startup.operation)) leaf_name_data.push_back(startup.get_name_leafdata());
    if (url.is_set || is_set(url.operation)) leaf_name_data.push_back(url.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CopyConfigRpc::Input::Target::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CopyConfigRpc::Input::Target::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CopyConfigRpc::Input::Target::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "candidate")
    {
        candidate = value;
    }
    if(value_path == "running")
    {
        running = value;
    }
    if(value_path == "startup")
    {
        startup = value;
    }
    if(value_path == "url")
    {
        url = value;
    }
}

CopyConfigRpc::Input::Source::Source()
    :
    candidate{YType::empty, "candidate"},
    config{YType::str, "config"},
    running{YType::empty, "running"},
    startup{YType::empty, "startup"},
    url{YType::str, "url"}
{
    yang_name = "source"; yang_parent_name = "input";
}

CopyConfigRpc::Input::Source::~Source()
{
}

bool CopyConfigRpc::Input::Source::has_data() const
{
    return candidate.is_set
	|| config.is_set
	|| running.is_set
	|| startup.is_set
	|| url.is_set;
}

bool CopyConfigRpc::Input::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(candidate.operation)
	|| is_set(config.operation)
	|| is_set(running.operation)
	|| is_set(startup.operation)
	|| is_set(url.operation);
}

std::string CopyConfigRpc::Input::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath CopyConfigRpc::Input::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf:copy-config/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate.is_set || is_set(candidate.operation)) leaf_name_data.push_back(candidate.get_name_leafdata());
    if (config.is_set || is_set(config.operation)) leaf_name_data.push_back(config.get_name_leafdata());
    if (running.is_set || is_set(running.operation)) leaf_name_data.push_back(running.get_name_leafdata());
    if (startup.is_set || is_set(startup.operation)) leaf_name_data.push_back(startup.get_name_leafdata());
    if (url.is_set || is_set(url.operation)) leaf_name_data.push_back(url.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CopyConfigRpc::Input::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CopyConfigRpc::Input::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CopyConfigRpc::Input::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "candidate")
    {
        candidate = value;
    }
    if(value_path == "config")
    {
        config = value;
    }
    if(value_path == "running")
    {
        running = value;
    }
    if(value_path == "startup")
    {
        startup = value;
    }
    if(value_path == "url")
    {
        url = value;
    }
}

DeleteConfigRpc::DeleteConfigRpc()
    :
    input(std::make_shared<DeleteConfigRpc::Input>())
{
    input->parent = this;

    yang_name = "delete-config"; yang_parent_name = "ietf-netconf";
}

DeleteConfigRpc::~DeleteConfigRpc()
{
}

bool DeleteConfigRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool DeleteConfigRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string DeleteConfigRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:delete-config";

    return path_buffer.str();

}

const EntityPath DeleteConfigRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> DeleteConfigRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<DeleteConfigRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DeleteConfigRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void DeleteConfigRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> DeleteConfigRpc::clone_ptr() const
{
    return std::make_shared<DeleteConfigRpc>();
}

std::string DeleteConfigRpc::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string DeleteConfigRpc::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function DeleteConfigRpc::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

DeleteConfigRpc::Input::Input()
    :
    target(std::make_shared<DeleteConfigRpc::Input::Target>())
{
    target->parent = this;

    yang_name = "input"; yang_parent_name = "delete-config";
}

DeleteConfigRpc::Input::~Input()
{
}

bool DeleteConfigRpc::Input::has_data() const
{
    return (target !=  nullptr && target->has_data());
}

bool DeleteConfigRpc::Input::has_operation() const
{
    return is_set(operation)
	|| (target !=  nullptr && target->has_operation());
}

std::string DeleteConfigRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath DeleteConfigRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf:delete-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DeleteConfigRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target")
    {
        if(target == nullptr)
        {
            target = std::make_shared<DeleteConfigRpc::Input::Target>();
        }
        return target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DeleteConfigRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(target != nullptr)
    {
        children["target"] = target;
    }

    return children;
}

void DeleteConfigRpc::Input::set_value(const std::string & value_path, std::string value)
{
}

DeleteConfigRpc::Input::Target::Target()
    :
    startup{YType::empty, "startup"},
    url{YType::str, "url"}
{
    yang_name = "target"; yang_parent_name = "input";
}

DeleteConfigRpc::Input::Target::~Target()
{
}

bool DeleteConfigRpc::Input::Target::has_data() const
{
    return startup.is_set
	|| url.is_set;
}

bool DeleteConfigRpc::Input::Target::has_operation() const
{
    return is_set(operation)
	|| is_set(startup.operation)
	|| is_set(url.operation);
}

std::string DeleteConfigRpc::Input::Target::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target";

    return path_buffer.str();

}

const EntityPath DeleteConfigRpc::Input::Target::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf:delete-config/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (startup.is_set || is_set(startup.operation)) leaf_name_data.push_back(startup.get_name_leafdata());
    if (url.is_set || is_set(url.operation)) leaf_name_data.push_back(url.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DeleteConfigRpc::Input::Target::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DeleteConfigRpc::Input::Target::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DeleteConfigRpc::Input::Target::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "startup")
    {
        startup = value;
    }
    if(value_path == "url")
    {
        url = value;
    }
}

LockRpc::LockRpc()
    :
    input(std::make_shared<LockRpc::Input>())
{
    input->parent = this;

    yang_name = "lock"; yang_parent_name = "ietf-netconf";
}

LockRpc::~LockRpc()
{
}

bool LockRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool LockRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string LockRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:lock";

    return path_buffer.str();

}

const EntityPath LockRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> LockRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<LockRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LockRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void LockRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> LockRpc::clone_ptr() const
{
    return std::make_shared<LockRpc>();
}

std::string LockRpc::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string LockRpc::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function LockRpc::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

LockRpc::Input::Input()
    :
    target(std::make_shared<LockRpc::Input::Target>())
{
    target->parent = this;

    yang_name = "input"; yang_parent_name = "lock";
}

LockRpc::Input::~Input()
{
}

bool LockRpc::Input::has_data() const
{
    return (target !=  nullptr && target->has_data());
}

bool LockRpc::Input::has_operation() const
{
    return is_set(operation)
	|| (target !=  nullptr && target->has_operation());
}

std::string LockRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath LockRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf:lock/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LockRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target")
    {
        if(target == nullptr)
        {
            target = std::make_shared<LockRpc::Input::Target>();
        }
        return target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LockRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(target != nullptr)
    {
        children["target"] = target;
    }

    return children;
}

void LockRpc::Input::set_value(const std::string & value_path, std::string value)
{
}

LockRpc::Input::Target::Target()
    :
    candidate{YType::empty, "candidate"},
    running{YType::empty, "running"},
    startup{YType::empty, "startup"}
{
    yang_name = "target"; yang_parent_name = "input";
}

LockRpc::Input::Target::~Target()
{
}

bool LockRpc::Input::Target::has_data() const
{
    return candidate.is_set
	|| running.is_set
	|| startup.is_set;
}

bool LockRpc::Input::Target::has_operation() const
{
    return is_set(operation)
	|| is_set(candidate.operation)
	|| is_set(running.operation)
	|| is_set(startup.operation);
}

std::string LockRpc::Input::Target::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target";

    return path_buffer.str();

}

const EntityPath LockRpc::Input::Target::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf:lock/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate.is_set || is_set(candidate.operation)) leaf_name_data.push_back(candidate.get_name_leafdata());
    if (running.is_set || is_set(running.operation)) leaf_name_data.push_back(running.get_name_leafdata());
    if (startup.is_set || is_set(startup.operation)) leaf_name_data.push_back(startup.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LockRpc::Input::Target::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LockRpc::Input::Target::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LockRpc::Input::Target::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "candidate")
    {
        candidate = value;
    }
    if(value_path == "running")
    {
        running = value;
    }
    if(value_path == "startup")
    {
        startup = value;
    }
}

UnlockRpc::UnlockRpc()
    :
    input(std::make_shared<UnlockRpc::Input>())
{
    input->parent = this;

    yang_name = "unlock"; yang_parent_name = "ietf-netconf";
}

UnlockRpc::~UnlockRpc()
{
}

bool UnlockRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool UnlockRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string UnlockRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:unlock";

    return path_buffer.str();

}

const EntityPath UnlockRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> UnlockRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<UnlockRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UnlockRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void UnlockRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> UnlockRpc::clone_ptr() const
{
    return std::make_shared<UnlockRpc>();
}

std::string UnlockRpc::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string UnlockRpc::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function UnlockRpc::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

UnlockRpc::Input::Input()
    :
    target(std::make_shared<UnlockRpc::Input::Target>())
{
    target->parent = this;

    yang_name = "input"; yang_parent_name = "unlock";
}

UnlockRpc::Input::~Input()
{
}

bool UnlockRpc::Input::has_data() const
{
    return (target !=  nullptr && target->has_data());
}

bool UnlockRpc::Input::has_operation() const
{
    return is_set(operation)
	|| (target !=  nullptr && target->has_operation());
}

std::string UnlockRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath UnlockRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf:unlock/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UnlockRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target")
    {
        if(target == nullptr)
        {
            target = std::make_shared<UnlockRpc::Input::Target>();
        }
        return target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UnlockRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(target != nullptr)
    {
        children["target"] = target;
    }

    return children;
}

void UnlockRpc::Input::set_value(const std::string & value_path, std::string value)
{
}

UnlockRpc::Input::Target::Target()
    :
    candidate{YType::empty, "candidate"},
    running{YType::empty, "running"},
    startup{YType::empty, "startup"}
{
    yang_name = "target"; yang_parent_name = "input";
}

UnlockRpc::Input::Target::~Target()
{
}

bool UnlockRpc::Input::Target::has_data() const
{
    return candidate.is_set
	|| running.is_set
	|| startup.is_set;
}

bool UnlockRpc::Input::Target::has_operation() const
{
    return is_set(operation)
	|| is_set(candidate.operation)
	|| is_set(running.operation)
	|| is_set(startup.operation);
}

std::string UnlockRpc::Input::Target::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target";

    return path_buffer.str();

}

const EntityPath UnlockRpc::Input::Target::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf:unlock/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate.is_set || is_set(candidate.operation)) leaf_name_data.push_back(candidate.get_name_leafdata());
    if (running.is_set || is_set(running.operation)) leaf_name_data.push_back(running.get_name_leafdata());
    if (startup.is_set || is_set(startup.operation)) leaf_name_data.push_back(startup.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UnlockRpc::Input::Target::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UnlockRpc::Input::Target::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void UnlockRpc::Input::Target::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "candidate")
    {
        candidate = value;
    }
    if(value_path == "running")
    {
        running = value;
    }
    if(value_path == "startup")
    {
        startup = value;
    }
}

GetRpc::GetRpc()
    :
    input(std::make_shared<GetRpc::Input>())
	,output(std::make_shared<GetRpc::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "get"; yang_parent_name = "ietf-netconf";
}

GetRpc::~GetRpc()
{
}

bool GetRpc::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool GetRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string GetRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:get";

    return path_buffer.str();

}

const EntityPath GetRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> GetRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<GetRpc::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<GetRpc::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GetRpc::get_children() const
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

void GetRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> GetRpc::clone_ptr() const
{
    return std::make_shared<GetRpc>();
}

std::string GetRpc::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string GetRpc::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function GetRpc::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

GetRpc::Input::Input()
    :
    filter{YType::str, "filter"},
    with_defaults{YType::enumeration, "ietf-netconf-with-defaults:with-defaults"}
{
    yang_name = "input"; yang_parent_name = "get";
}

GetRpc::Input::~Input()
{
}

bool GetRpc::Input::has_data() const
{
    return filter.is_set
	|| with_defaults.is_set;
}

bool GetRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(filter.operation)
	|| is_set(with_defaults.operation);
}

std::string GetRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath GetRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf:get/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter.is_set || is_set(filter.operation)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (with_defaults.is_set || is_set(with_defaults.operation)) leaf_name_data.push_back(with_defaults.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GetRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GetRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GetRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "filter")
    {
        filter = value;
    }
    if(value_path == "with-defaults")
    {
        with_defaults = value;
    }
}

GetRpc::Output::Output()
    :
    data{YType::str, "data"}
{
    yang_name = "output"; yang_parent_name = "get";
}

GetRpc::Output::~Output()
{
}

bool GetRpc::Output::has_data() const
{
    return data.is_set;
}

bool GetRpc::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation);
}

std::string GetRpc::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath GetRpc::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf:get/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GetRpc::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GetRpc::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GetRpc::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
}

CloseSessionRpc::CloseSessionRpc()
{
    yang_name = "close-session"; yang_parent_name = "ietf-netconf";
}

CloseSessionRpc::~CloseSessionRpc()
{
}

bool CloseSessionRpc::has_data() const
{
    return false;
}

bool CloseSessionRpc::has_operation() const
{
    return is_set(operation);
}

std::string CloseSessionRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:close-session";

    return path_buffer.str();

}

const EntityPath CloseSessionRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CloseSessionRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CloseSessionRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CloseSessionRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CloseSessionRpc::clone_ptr() const
{
    return std::make_shared<CloseSessionRpc>();
}

std::string CloseSessionRpc::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string CloseSessionRpc::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function CloseSessionRpc::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

KillSessionRpc::KillSessionRpc()
    :
    input(std::make_shared<KillSessionRpc::Input>())
{
    input->parent = this;

    yang_name = "kill-session"; yang_parent_name = "ietf-netconf";
}

KillSessionRpc::~KillSessionRpc()
{
}

bool KillSessionRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool KillSessionRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string KillSessionRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:kill-session";

    return path_buffer.str();

}

const EntityPath KillSessionRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> KillSessionRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<KillSessionRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KillSessionRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void KillSessionRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> KillSessionRpc::clone_ptr() const
{
    return std::make_shared<KillSessionRpc>();
}

std::string KillSessionRpc::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string KillSessionRpc::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function KillSessionRpc::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

KillSessionRpc::Input::Input()
    :
    session_id{YType::uint32, "session-id"}
{
    yang_name = "input"; yang_parent_name = "kill-session";
}

KillSessionRpc::Input::~Input()
{
}

bool KillSessionRpc::Input::has_data() const
{
    return session_id.is_set;
}

bool KillSessionRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(session_id.operation);
}

std::string KillSessionRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath KillSessionRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf:kill-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> KillSessionRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KillSessionRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void KillSessionRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

CommitRpc::CommitRpc()
    :
    input(std::make_shared<CommitRpc::Input>())
{
    input->parent = this;

    yang_name = "commit"; yang_parent_name = "ietf-netconf";
}

CommitRpc::~CommitRpc()
{
}

bool CommitRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool CommitRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string CommitRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:commit";

    return path_buffer.str();

}

const EntityPath CommitRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CommitRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CommitRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CommitRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void CommitRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CommitRpc::clone_ptr() const
{
    return std::make_shared<CommitRpc>();
}

std::string CommitRpc::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string CommitRpc::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function CommitRpc::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

CommitRpc::Input::Input()
    :
    confirm_timeout{YType::uint32, "confirm-timeout"},
    confirmed{YType::empty, "confirmed"},
    persist{YType::str, "persist"},
    persist_id{YType::str, "persist-id"}
{
    yang_name = "input"; yang_parent_name = "commit";
}

CommitRpc::Input::~Input()
{
}

bool CommitRpc::Input::has_data() const
{
    return confirm_timeout.is_set
	|| confirmed.is_set
	|| persist.is_set
	|| persist_id.is_set;
}

bool CommitRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(confirm_timeout.operation)
	|| is_set(confirmed.operation)
	|| is_set(persist.operation)
	|| is_set(persist_id.operation);
}

std::string CommitRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath CommitRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf:commit/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (confirm_timeout.is_set || is_set(confirm_timeout.operation)) leaf_name_data.push_back(confirm_timeout.get_name_leafdata());
    if (confirmed.is_set || is_set(confirmed.operation)) leaf_name_data.push_back(confirmed.get_name_leafdata());
    if (persist.is_set || is_set(persist.operation)) leaf_name_data.push_back(persist.get_name_leafdata());
    if (persist_id.is_set || is_set(persist_id.operation)) leaf_name_data.push_back(persist_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CommitRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CommitRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CommitRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "confirm-timeout")
    {
        confirm_timeout = value;
    }
    if(value_path == "confirmed")
    {
        confirmed = value;
    }
    if(value_path == "persist")
    {
        persist = value;
    }
    if(value_path == "persist-id")
    {
        persist_id = value;
    }
}

DiscardChangesRpc::DiscardChangesRpc()
{
    yang_name = "discard-changes"; yang_parent_name = "ietf-netconf";
}

DiscardChangesRpc::~DiscardChangesRpc()
{
}

bool DiscardChangesRpc::has_data() const
{
    return false;
}

bool DiscardChangesRpc::has_operation() const
{
    return is_set(operation);
}

std::string DiscardChangesRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:discard-changes";

    return path_buffer.str();

}

const EntityPath DiscardChangesRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> DiscardChangesRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DiscardChangesRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DiscardChangesRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> DiscardChangesRpc::clone_ptr() const
{
    return std::make_shared<DiscardChangesRpc>();
}

std::string DiscardChangesRpc::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string DiscardChangesRpc::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function DiscardChangesRpc::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

CancelCommitRpc::CancelCommitRpc()
    :
    input(std::make_shared<CancelCommitRpc::Input>())
{
    input->parent = this;

    yang_name = "cancel-commit"; yang_parent_name = "ietf-netconf";
}

CancelCommitRpc::~CancelCommitRpc()
{
}

bool CancelCommitRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool CancelCommitRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string CancelCommitRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:cancel-commit";

    return path_buffer.str();

}

const EntityPath CancelCommitRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CancelCommitRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CancelCommitRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CancelCommitRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void CancelCommitRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CancelCommitRpc::clone_ptr() const
{
    return std::make_shared<CancelCommitRpc>();
}

std::string CancelCommitRpc::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string CancelCommitRpc::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function CancelCommitRpc::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

CancelCommitRpc::Input::Input()
    :
    persist_id{YType::str, "persist-id"}
{
    yang_name = "input"; yang_parent_name = "cancel-commit";
}

CancelCommitRpc::Input::~Input()
{
}

bool CancelCommitRpc::Input::has_data() const
{
    return persist_id.is_set;
}

bool CancelCommitRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(persist_id.operation);
}

std::string CancelCommitRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath CancelCommitRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf:cancel-commit/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (persist_id.is_set || is_set(persist_id.operation)) leaf_name_data.push_back(persist_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CancelCommitRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CancelCommitRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CancelCommitRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "persist-id")
    {
        persist_id = value;
    }
}

ValidateRpc::ValidateRpc()
    :
    input(std::make_shared<ValidateRpc::Input>())
{
    input->parent = this;

    yang_name = "validate"; yang_parent_name = "ietf-netconf";
}

ValidateRpc::~ValidateRpc()
{
}

bool ValidateRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ValidateRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ValidateRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf:validate";

    return path_buffer.str();

}

const EntityPath ValidateRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ValidateRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ValidateRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ValidateRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ValidateRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ValidateRpc::clone_ptr() const
{
    return std::make_shared<ValidateRpc>();
}

std::string ValidateRpc::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string ValidateRpc::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function ValidateRpc::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

ValidateRpc::Input::Input()
    :
    source(std::make_shared<ValidateRpc::Input::Source>())
{
    source->parent = this;

    yang_name = "input"; yang_parent_name = "validate";
}

ValidateRpc::Input::~Input()
{
}

bool ValidateRpc::Input::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool ValidateRpc::Input::has_operation() const
{
    return is_set(operation)
	|| (source !=  nullptr && source->has_operation());
}

std::string ValidateRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ValidateRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf:validate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ValidateRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<ValidateRpc::Input::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ValidateRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void ValidateRpc::Input::set_value(const std::string & value_path, std::string value)
{
}

ValidateRpc::Input::Source::Source()
    :
    candidate{YType::empty, "candidate"},
    config{YType::str, "config"},
    running{YType::empty, "running"},
    startup{YType::empty, "startup"},
    url{YType::str, "url"}
{
    yang_name = "source"; yang_parent_name = "input";
}

ValidateRpc::Input::Source::~Source()
{
}

bool ValidateRpc::Input::Source::has_data() const
{
    return candidate.is_set
	|| config.is_set
	|| running.is_set
	|| startup.is_set
	|| url.is_set;
}

bool ValidateRpc::Input::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(candidate.operation)
	|| is_set(config.operation)
	|| is_set(running.operation)
	|| is_set(startup.operation)
	|| is_set(url.operation);
}

std::string ValidateRpc::Input::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath ValidateRpc::Input::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf:validate/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate.is_set || is_set(candidate.operation)) leaf_name_data.push_back(candidate.get_name_leafdata());
    if (config.is_set || is_set(config.operation)) leaf_name_data.push_back(config.get_name_leafdata());
    if (running.is_set || is_set(running.operation)) leaf_name_data.push_back(running.get_name_leafdata());
    if (startup.is_set || is_set(startup.operation)) leaf_name_data.push_back(startup.get_name_leafdata());
    if (url.is_set || is_set(url.operation)) leaf_name_data.push_back(url.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ValidateRpc::Input::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ValidateRpc::Input::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ValidateRpc::Input::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "candidate")
    {
        candidate = value;
    }
    if(value_path == "config")
    {
        config = value;
    }
    if(value_path == "running")
    {
        running = value;
    }
    if(value_path == "startup")
    {
        startup = value;
    }
    if(value_path == "url")
    {
        url = value;
    }
}

const Enum::YLeaf ErrorSeverityTypeEnum::error {0, "error"};
const Enum::YLeaf ErrorSeverityTypeEnum::warning {1, "warning"};

const Enum::YLeaf ErrorTagTypeEnum::in_use {0, "in-use"};
const Enum::YLeaf ErrorTagTypeEnum::invalid_value {1, "invalid-value"};
const Enum::YLeaf ErrorTagTypeEnum::too_big {2, "too-big"};
const Enum::YLeaf ErrorTagTypeEnum::missing_attribute {3, "missing-attribute"};
const Enum::YLeaf ErrorTagTypeEnum::bad_attribute {4, "bad-attribute"};
const Enum::YLeaf ErrorTagTypeEnum::unknown_attribute {5, "unknown-attribute"};
const Enum::YLeaf ErrorTagTypeEnum::missing_element {6, "missing-element"};
const Enum::YLeaf ErrorTagTypeEnum::bad_element {7, "bad-element"};
const Enum::YLeaf ErrorTagTypeEnum::unknown_element {8, "unknown-element"};
const Enum::YLeaf ErrorTagTypeEnum::unknown_namespace {9, "unknown-namespace"};
const Enum::YLeaf ErrorTagTypeEnum::access_denied {10, "access-denied"};
const Enum::YLeaf ErrorTagTypeEnum::lock_denied {11, "lock-denied"};
const Enum::YLeaf ErrorTagTypeEnum::resource_denied {12, "resource-denied"};
const Enum::YLeaf ErrorTagTypeEnum::rollback_failed {13, "rollback-failed"};
const Enum::YLeaf ErrorTagTypeEnum::data_exists {14, "data-exists"};
const Enum::YLeaf ErrorTagTypeEnum::data_missing {15, "data-missing"};
const Enum::YLeaf ErrorTagTypeEnum::operation_not_supported {16, "operation-not-supported"};
const Enum::YLeaf ErrorTagTypeEnum::operation_failed {17, "operation-failed"};
const Enum::YLeaf ErrorTagTypeEnum::partial_operation {18, "partial-operation"};
const Enum::YLeaf ErrorTagTypeEnum::malformed_message {19, "malformed-message"};

const Enum::YLeaf EditOperationTypeEnum::merge {0, "merge"};
const Enum::YLeaf EditOperationTypeEnum::replace {1, "replace"};
const Enum::YLeaf EditOperationTypeEnum::create {2, "create"};
const Enum::YLeaf EditOperationTypeEnum::delete_ {3, "delete"};
const Enum::YLeaf EditOperationTypeEnum::remove {4, "remove"};

const Enum::YLeaf EditConfigRpc::Input::DefaultOperationEnum::merge {0, "merge"};
const Enum::YLeaf EditConfigRpc::Input::DefaultOperationEnum::replace {1, "replace"};
const Enum::YLeaf EditConfigRpc::Input::DefaultOperationEnum::none {2, "none"};

const Enum::YLeaf EditConfigRpc::Input::TestOptionEnum::test_then_set {0, "test-then-set"};
const Enum::YLeaf EditConfigRpc::Input::TestOptionEnum::set {1, "set"};
const Enum::YLeaf EditConfigRpc::Input::TestOptionEnum::test_only {2, "test-only"};

const Enum::YLeaf EditConfigRpc::Input::ErrorOptionEnum::stop_on_error {0, "stop-on-error"};
const Enum::YLeaf EditConfigRpc::Input::ErrorOptionEnum::continue_on_error {1, "continue-on-error"};
const Enum::YLeaf EditConfigRpc::Input::ErrorOptionEnum::rollback_on_error {2, "rollback-on-error"};


}
}

