
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_installmgr_admin_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_installmgr_admin_oper {

Install::ConfigurationRegisters::ConfigurationRegister::ConfigurationRegister()
    :
    	node_name{YType::str, "node-name"},
	 config_register{YType::str, "config-register"}
{
    yang_name = "configuration-register"; yang_parent_name = "configuration-registers";
}

Install::ConfigurationRegisters::ConfigurationRegister::~ConfigurationRegister()
{
}

bool Install::ConfigurationRegisters::ConfigurationRegister::has_data() const
{
    return node_name.is_set
	|| config_register.is_set;
}

bool Install::ConfigurationRegisters::ConfigurationRegister::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| is_set(config_register.operation);
}

std::string Install::ConfigurationRegisters::ConfigurationRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration-register" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Install::ConfigurationRegisters::ConfigurationRegister::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/configuration-registers/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (config_register.is_set || is_set(config_register.operation)) leaf_name_data.push_back(config_register.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::ConfigurationRegisters::ConfigurationRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::ConfigurationRegisters::ConfigurationRegister::get_children()
{
    return children;
}

void Install::ConfigurationRegisters::ConfigurationRegister::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "config-register")
    {
        config_register = value;
    }
}

Install::ConfigurationRegisters::ConfigurationRegisters()
{
    yang_name = "configuration-registers"; yang_parent_name = "install";
}

Install::ConfigurationRegisters::~ConfigurationRegisters()
{
}

bool Install::ConfigurationRegisters::has_data() const
{
    for (std::size_t index=0; index<configuration_register.size(); index++)
    {
        if(configuration_register[index]->has_data())
            return true;
    }
    return false;
}

bool Install::ConfigurationRegisters::has_operation() const
{
    for (std::size_t index=0; index<configuration_register.size(); index++)
    {
        if(configuration_register[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Install::ConfigurationRegisters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration-registers";

    return path_buffer.str();

}

EntityPath Install::ConfigurationRegisters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::ConfigurationRegisters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "configuration-register")
    {
        for(auto const & c : configuration_register)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::ConfigurationRegisters::ConfigurationRegister>();
        c->parent = this;
        configuration_register.push_back(std::move(c));
        children[segment_path] = configuration_register.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::ConfigurationRegisters::get_children()
{
    for (auto const & c : configuration_register)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::ConfigurationRegisters::set_value(const std::string & value_path, std::string value)
{
}

Install::RequestStatuses::RequestStatus::RequestInformation::RequestInformation()
    :
    	operation_detail{YType::str, "operation-detail"},
	 operation_type{YType::enumeration, "operation-type"},
	 request_id{YType::uint32, "request-id"},
	 request_option{YType::int32, "request-option"},
	 trigger_type{YType::enumeration, "trigger-type"},
	 user_id{YType::str, "user-id"}
{
    yang_name = "request-information"; yang_parent_name = "request-status";
}

Install::RequestStatuses::RequestStatus::RequestInformation::~RequestInformation()
{
}

bool Install::RequestStatuses::RequestStatus::RequestInformation::has_data() const
{
    return operation_detail.is_set
	|| operation_type.is_set
	|| request_id.is_set
	|| request_option.is_set
	|| trigger_type.is_set
	|| user_id.is_set;
}

bool Install::RequestStatuses::RequestStatus::RequestInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(operation_detail.operation)
	|| is_set(operation_type.operation)
	|| is_set(request_id.operation)
	|| is_set(request_option.operation)
	|| is_set(trigger_type.operation)
	|| is_set(user_id.operation);
}

std::string Install::RequestStatuses::RequestStatus::RequestInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-information";

    return path_buffer.str();

}

EntityPath Install::RequestStatuses::RequestStatus::RequestInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_detail.is_set || is_set(operation_detail.operation)) leaf_name_data.push_back(operation_detail.get_name_leafdata());
    if (operation_type.is_set || is_set(operation_type.operation)) leaf_name_data.push_back(operation_type.get_name_leafdata());
    if (request_id.is_set || is_set(request_id.operation)) leaf_name_data.push_back(request_id.get_name_leafdata());
    if (request_option.is_set || is_set(request_option.operation)) leaf_name_data.push_back(request_option.get_name_leafdata());
    if (trigger_type.is_set || is_set(trigger_type.operation)) leaf_name_data.push_back(trigger_type.get_name_leafdata());
    if (user_id.is_set || is_set(user_id.operation)) leaf_name_data.push_back(user_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::RequestStatuses::RequestStatus::RequestInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::RequestStatuses::RequestStatus::RequestInformation::get_children()
{
    return children;
}

void Install::RequestStatuses::RequestStatus::RequestInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "operation-detail")
    {
        operation_detail = value;
    }
    if(value_path == "operation-type")
    {
        operation_type = value;
    }
    if(value_path == "request-id")
    {
        request_id = value;
    }
    if(value_path == "request-option")
    {
        request_option = value;
    }
    if(value_path == "trigger-type")
    {
        trigger_type = value;
    }
    if(value_path == "user-id")
    {
        user_id = value;
    }
}

Install::RequestStatuses::RequestStatus::AbortStatus::AbortStatus()
    :
    	abort_impact{YType::enumeration, "abort-impact"},
	 abort_method{YType::enumeration, "abort-method"}
{
    yang_name = "abort-status"; yang_parent_name = "request-status";
}

Install::RequestStatuses::RequestStatus::AbortStatus::~AbortStatus()
{
}

bool Install::RequestStatuses::RequestStatus::AbortStatus::has_data() const
{
    return abort_impact.is_set
	|| abort_method.is_set;
}

bool Install::RequestStatuses::RequestStatus::AbortStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(abort_impact.operation)
	|| is_set(abort_method.operation);
}

std::string Install::RequestStatuses::RequestStatus::AbortStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "abort-status";

    return path_buffer.str();

}

EntityPath Install::RequestStatuses::RequestStatus::AbortStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abort_impact.is_set || is_set(abort_impact.operation)) leaf_name_data.push_back(abort_impact.get_name_leafdata());
    if (abort_method.is_set || is_set(abort_method.operation)) leaf_name_data.push_back(abort_method.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::RequestStatuses::RequestStatus::AbortStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::RequestStatuses::RequestStatus::AbortStatus::get_children()
{
    return children;
}

void Install::RequestStatuses::RequestStatus::AbortStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "abort-impact")
    {
        abort_impact = value;
    }
    if(value_path == "abort-method")
    {
        abort_method = value;
    }
}

Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes::Nodes()
    :
    	node_name{YType::str, "node-name"},
	 state{YType::enumeration, "state"}
{
    yang_name = "nodes"; yang_parent_name = "incremental-install-information";
}

Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes::~Nodes()
{
}

bool Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes::has_data() const
{
    return node_name.is_set
	|| state.is_set;
}

bool Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| is_set(state.operation);
}

std::string Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes::get_children()
{
    return children;
}

void Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::IncrementalInstallInformation()
    :
    	direction{YType::enumeration, "direction"},
	 ii_error{YType::str, "ii-error"}
{
    yang_name = "incremental-install-information"; yang_parent_name = "request-status";
}

Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::~IncrementalInstallInformation()
{
}

bool Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::has_data() const
{
    for (std::size_t index=0; index<nodes.size(); index++)
    {
        if(nodes[index]->has_data())
            return true;
    }
    return direction.is_set
	|| ii_error.is_set;
}

bool Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::has_operation() const
{
    for (std::size_t index=0; index<nodes.size(); index++)
    {
        if(nodes[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(ii_error.operation);
}

std::string Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incremental-install-information";

    return path_buffer.str();

}

EntityPath Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (ii_error.is_set || is_set(ii_error.operation)) leaf_name_data.push_back(ii_error.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        for(auto const & c : nodes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes>();
        c->parent = this;
        nodes.push_back(std::move(c));
        children[segment_path] = nodes.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::get_children()
{
    for (auto const & c : nodes)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "ii-error")
    {
        ii_error = value;
    }
}

Install::RequestStatuses::RequestStatus::IssuMessage::Scope::Scope()
    :
    	admin_read{YType::boolean, "admin-read"},
	 affected_sd_rs{YType::uint32, "affected-sd-rs"}
{
    yang_name = "scope"; yang_parent_name = "issu-message";
}

Install::RequestStatuses::RequestStatus::IssuMessage::Scope::~Scope()
{
}

bool Install::RequestStatuses::RequestStatus::IssuMessage::Scope::has_data() const
{
    return admin_read.is_set
	|| affected_sd_rs.is_set;
}

bool Install::RequestStatuses::RequestStatus::IssuMessage::Scope::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_read.operation)
	|| is_set(affected_sd_rs.operation);
}

std::string Install::RequestStatuses::RequestStatus::IssuMessage::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";

    return path_buffer.str();

}

EntityPath Install::RequestStatuses::RequestStatus::IssuMessage::Scope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_read.is_set || is_set(admin_read.operation)) leaf_name_data.push_back(admin_read.get_name_leafdata());
    if (affected_sd_rs.is_set || is_set(affected_sd_rs.operation)) leaf_name_data.push_back(affected_sd_rs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::RequestStatuses::RequestStatus::IssuMessage::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::RequestStatuses::RequestStatus::IssuMessage::Scope::get_children()
{
    return children;
}

void Install::RequestStatuses::RequestStatus::IssuMessage::Scope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-read")
    {
        admin_read = value;
    }
    if(value_path == "affected-sd-rs")
    {
        affected_sd_rs = value;
    }
}

Install::RequestStatuses::RequestStatus::IssuMessage::IssuMessage()
    :
    	category{YType::enumeration, "category"},
	 message{YType::str, "message"}
    	,
    scope(std::make_unique<Install::RequestStatuses::RequestStatus::IssuMessage::Scope>())
{
    scope->parent = this;
    children["scope"] = scope.get();

    yang_name = "issu-message"; yang_parent_name = "request-status";
}

Install::RequestStatuses::RequestStatus::IssuMessage::~IssuMessage()
{
}

bool Install::RequestStatuses::RequestStatus::IssuMessage::has_data() const
{
    return category.is_set
	|| message.is_set
	|| (scope !=  nullptr && scope->has_data());
}

bool Install::RequestStatuses::RequestStatus::IssuMessage::has_operation() const
{
    return is_set(operation)
	|| is_set(category.operation)
	|| is_set(message.operation)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Install::RequestStatuses::RequestStatus::IssuMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-message";

    return path_buffer.str();

}

EntityPath Install::RequestStatuses::RequestStatus::IssuMessage::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.operation)) leaf_name_data.push_back(category.get_name_leafdata());
    if (message.is_set || is_set(message.operation)) leaf_name_data.push_back(message.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::RequestStatuses::RequestStatus::IssuMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "scope")
    {
        if(scope != nullptr)
        {
            children["scope"] = scope.get();
        }
        else
        {
            scope = std::make_unique<Install::RequestStatuses::RequestStatus::IssuMessage::Scope>();
            scope->parent = this;
            children["scope"] = scope.get();
        }
        return children.at("scope");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::RequestStatuses::RequestStatus::IssuMessage::get_children()
{
    if(children.find("scope") == children.end())
    {
        if(scope != nullptr)
        {
            children["scope"] = scope.get();
        }
    }

    return children;
}

void Install::RequestStatuses::RequestStatus::IssuMessage::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "category")
    {
        category = value;
    }
    if(value_path == "message")
    {
        message = value;
    }
}

Install::RequestStatuses::RequestStatus::Message::Scope::Scope()
    :
    	admin_read{YType::boolean, "admin-read"},
	 affected_sd_rs{YType::uint32, "affected-sd-rs"}
{
    yang_name = "scope"; yang_parent_name = "message";
}

Install::RequestStatuses::RequestStatus::Message::Scope::~Scope()
{
}

bool Install::RequestStatuses::RequestStatus::Message::Scope::has_data() const
{
    return admin_read.is_set
	|| affected_sd_rs.is_set;
}

bool Install::RequestStatuses::RequestStatus::Message::Scope::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_read.operation)
	|| is_set(affected_sd_rs.operation);
}

std::string Install::RequestStatuses::RequestStatus::Message::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";

    return path_buffer.str();

}

EntityPath Install::RequestStatuses::RequestStatus::Message::Scope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_read.is_set || is_set(admin_read.operation)) leaf_name_data.push_back(admin_read.get_name_leafdata());
    if (affected_sd_rs.is_set || is_set(affected_sd_rs.operation)) leaf_name_data.push_back(affected_sd_rs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::RequestStatuses::RequestStatus::Message::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::RequestStatuses::RequestStatus::Message::Scope::get_children()
{
    return children;
}

void Install::RequestStatuses::RequestStatus::Message::Scope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-read")
    {
        admin_read = value;
    }
    if(value_path == "affected-sd-rs")
    {
        affected_sd_rs = value;
    }
}

Install::RequestStatuses::RequestStatus::Message::Message()
    :
    	category{YType::enumeration, "category"},
	 message{YType::str, "message"}
    	,
    scope(std::make_unique<Install::RequestStatuses::RequestStatus::Message::Scope>())
{
    scope->parent = this;
    children["scope"] = scope.get();

    yang_name = "message"; yang_parent_name = "request-status";
}

Install::RequestStatuses::RequestStatus::Message::~Message()
{
}

bool Install::RequestStatuses::RequestStatus::Message::has_data() const
{
    return category.is_set
	|| message.is_set
	|| (scope !=  nullptr && scope->has_data());
}

bool Install::RequestStatuses::RequestStatus::Message::has_operation() const
{
    return is_set(operation)
	|| is_set(category.operation)
	|| is_set(message.operation)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Install::RequestStatuses::RequestStatus::Message::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message";

    return path_buffer.str();

}

EntityPath Install::RequestStatuses::RequestStatus::Message::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.operation)) leaf_name_data.push_back(category.get_name_leafdata());
    if (message.is_set || is_set(message.operation)) leaf_name_data.push_back(message.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::RequestStatuses::RequestStatus::Message::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "scope")
    {
        if(scope != nullptr)
        {
            children["scope"] = scope.get();
        }
        else
        {
            scope = std::make_unique<Install::RequestStatuses::RequestStatus::Message::Scope>();
            scope->parent = this;
            children["scope"] = scope.get();
        }
        return children.at("scope");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::RequestStatuses::RequestStatus::Message::get_children()
{
    if(children.find("scope") == children.end())
    {
        if(scope != nullptr)
        {
            children["scope"] = scope.get();
        }
    }

    return children;
}

void Install::RequestStatuses::RequestStatus::Message::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "category")
    {
        category = value;
    }
    if(value_path == "message")
    {
        message = value;
    }
}

Install::RequestStatuses::RequestStatus::RequestStatus()
    :
    	request_id{YType::int32, "request-id"},
	 abort_state{YType::enumeration, "abort-state"},
	 downloaded_bytes{YType::uint32, "downloaded-bytes"},
	 operation_phase{YType::enumeration, "operation-phase"},
	 percentage{YType::uint8, "percentage"},
	 unanswered_query{YType::boolean, "unanswered-query"}
    	,
    abort_status(std::make_unique<Install::RequestStatuses::RequestStatus::AbortStatus>())
	,incremental_install_information(std::make_unique<Install::RequestStatuses::RequestStatus::IncrementalInstallInformation>())
	,request_information(std::make_unique<Install::RequestStatuses::RequestStatus::RequestInformation>())
{
    abort_status->parent = this;
    children["abort-status"] = abort_status.get();

    incremental_install_information->parent = this;
    children["incremental-install-information"] = incremental_install_information.get();

    request_information->parent = this;
    children["request-information"] = request_information.get();

    yang_name = "request-status"; yang_parent_name = "request-statuses";
}

Install::RequestStatuses::RequestStatus::~RequestStatus()
{
}

bool Install::RequestStatuses::RequestStatus::has_data() const
{
    for (std::size_t index=0; index<issu_message.size(); index++)
    {
        if(issu_message[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<message.size(); index++)
    {
        if(message[index]->has_data())
            return true;
    }
    return request_id.is_set
	|| abort_state.is_set
	|| downloaded_bytes.is_set
	|| operation_phase.is_set
	|| percentage.is_set
	|| unanswered_query.is_set
	|| (abort_status !=  nullptr && abort_status->has_data())
	|| (incremental_install_information !=  nullptr && incremental_install_information->has_data())
	|| (request_information !=  nullptr && request_information->has_data());
}

bool Install::RequestStatuses::RequestStatus::has_operation() const
{
    for (std::size_t index=0; index<issu_message.size(); index++)
    {
        if(issu_message[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<message.size(); index++)
    {
        if(message[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(request_id.operation)
	|| is_set(abort_state.operation)
	|| is_set(downloaded_bytes.operation)
	|| is_set(operation_phase.operation)
	|| is_set(percentage.operation)
	|| is_set(unanswered_query.operation)
	|| (abort_status !=  nullptr && abort_status->has_operation())
	|| (incremental_install_information !=  nullptr && incremental_install_information->has_operation())
	|| (request_information !=  nullptr && request_information->has_operation());
}

std::string Install::RequestStatuses::RequestStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-status" <<"[request-id='" <<request_id.get() <<"']";

    return path_buffer.str();

}

EntityPath Install::RequestStatuses::RequestStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/request-statuses/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_id.is_set || is_set(request_id.operation)) leaf_name_data.push_back(request_id.get_name_leafdata());
    if (abort_state.is_set || is_set(abort_state.operation)) leaf_name_data.push_back(abort_state.get_name_leafdata());
    if (downloaded_bytes.is_set || is_set(downloaded_bytes.operation)) leaf_name_data.push_back(downloaded_bytes.get_name_leafdata());
    if (operation_phase.is_set || is_set(operation_phase.operation)) leaf_name_data.push_back(operation_phase.get_name_leafdata());
    if (percentage.is_set || is_set(percentage.operation)) leaf_name_data.push_back(percentage.get_name_leafdata());
    if (unanswered_query.is_set || is_set(unanswered_query.operation)) leaf_name_data.push_back(unanswered_query.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::RequestStatuses::RequestStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "abort-status")
    {
        if(abort_status != nullptr)
        {
            children["abort-status"] = abort_status.get();
        }
        else
        {
            abort_status = std::make_unique<Install::RequestStatuses::RequestStatus::AbortStatus>();
            abort_status->parent = this;
            children["abort-status"] = abort_status.get();
        }
        return children.at("abort-status");
    }

    if(child_yang_name == "incremental-install-information")
    {
        if(incremental_install_information != nullptr)
        {
            children["incremental-install-information"] = incremental_install_information.get();
        }
        else
        {
            incremental_install_information = std::make_unique<Install::RequestStatuses::RequestStatus::IncrementalInstallInformation>();
            incremental_install_information->parent = this;
            children["incremental-install-information"] = incremental_install_information.get();
        }
        return children.at("incremental-install-information");
    }

    if(child_yang_name == "issu-message")
    {
        for(auto const & c : issu_message)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::RequestStatuses::RequestStatus::IssuMessage>();
        c->parent = this;
        issu_message.push_back(std::move(c));
        children[segment_path] = issu_message.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "message")
    {
        for(auto const & c : message)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::RequestStatuses::RequestStatus::Message>();
        c->parent = this;
        message.push_back(std::move(c));
        children[segment_path] = message.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "request-information")
    {
        if(request_information != nullptr)
        {
            children["request-information"] = request_information.get();
        }
        else
        {
            request_information = std::make_unique<Install::RequestStatuses::RequestStatus::RequestInformation>();
            request_information->parent = this;
            children["request-information"] = request_information.get();
        }
        return children.at("request-information");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::RequestStatuses::RequestStatus::get_children()
{
    if(children.find("abort-status") == children.end())
    {
        if(abort_status != nullptr)
        {
            children["abort-status"] = abort_status.get();
        }
    }

    if(children.find("incremental-install-information") == children.end())
    {
        if(incremental_install_information != nullptr)
        {
            children["incremental-install-information"] = incremental_install_information.get();
        }
    }

    for (auto const & c : issu_message)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : message)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("request-information") == children.end())
    {
        if(request_information != nullptr)
        {
            children["request-information"] = request_information.get();
        }
    }

    return children;
}

void Install::RequestStatuses::RequestStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "request-id")
    {
        request_id = value;
    }
    if(value_path == "abort-state")
    {
        abort_state = value;
    }
    if(value_path == "downloaded-bytes")
    {
        downloaded_bytes = value;
    }
    if(value_path == "operation-phase")
    {
        operation_phase = value;
    }
    if(value_path == "percentage")
    {
        percentage = value;
    }
    if(value_path == "unanswered-query")
    {
        unanswered_query = value;
    }
}

Install::RequestStatuses::RequestStatuses()
{
    yang_name = "request-statuses"; yang_parent_name = "install";
}

Install::RequestStatuses::~RequestStatuses()
{
}

bool Install::RequestStatuses::has_data() const
{
    for (std::size_t index=0; index<request_status.size(); index++)
    {
        if(request_status[index]->has_data())
            return true;
    }
    return false;
}

bool Install::RequestStatuses::has_operation() const
{
    for (std::size_t index=0; index<request_status.size(); index++)
    {
        if(request_status[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Install::RequestStatuses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-statuses";

    return path_buffer.str();

}

EntityPath Install::RequestStatuses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::RequestStatuses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "request-status")
    {
        for(auto const & c : request_status)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::RequestStatuses::RequestStatus>();
        c->parent = this;
        request_status.push_back(std::move(c));
        children[segment_path] = request_status.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::RequestStatuses::get_children()
{
    for (auto const & c : request_status)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::RequestStatuses::set_value(const std::string & value_path, std::string value)
{
}

Install::BootVariables::BootVariable::BootVariable()
    :
    	node_name{YType::str, "node-name"},
	 boot_variable{YType::str, "boot-variable"}
{
    yang_name = "boot-variable"; yang_parent_name = "boot-variables";
}

Install::BootVariables::BootVariable::~BootVariable()
{
}

bool Install::BootVariables::BootVariable::has_data() const
{
    return node_name.is_set
	|| boot_variable.is_set;
}

bool Install::BootVariables::BootVariable::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| is_set(boot_variable.operation);
}

std::string Install::BootVariables::BootVariable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot-variable" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Install::BootVariables::BootVariable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/boot-variables/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (boot_variable.is_set || is_set(boot_variable.operation)) leaf_name_data.push_back(boot_variable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::BootVariables::BootVariable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::BootVariables::BootVariable::get_children()
{
    return children;
}

void Install::BootVariables::BootVariable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "boot-variable")
    {
        boot_variable = value;
    }
}

Install::BootVariables::BootVariables()
{
    yang_name = "boot-variables"; yang_parent_name = "install";
}

Install::BootVariables::~BootVariables()
{
}

bool Install::BootVariables::has_data() const
{
    for (std::size_t index=0; index<boot_variable.size(); index++)
    {
        if(boot_variable[index]->has_data())
            return true;
    }
    return false;
}

bool Install::BootVariables::has_operation() const
{
    for (std::size_t index=0; index<boot_variable.size(); index++)
    {
        if(boot_variable[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Install::BootVariables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot-variables";

    return path_buffer.str();

}

EntityPath Install::BootVariables::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::BootVariables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "boot-variable")
    {
        for(auto const & c : boot_variable)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::BootVariables::BootVariable>();
        c->parent = this;
        boot_variable.push_back(std::move(c));
        children[segment_path] = boot_variable.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::BootVariables::get_children()
{
    for (auto const & c : boot_variable)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::BootVariables::set_value(const std::string & value_path, std::string value)
{
}

Install::Software::AliasDevices::AliasDevice::Aliases::Alias::Alias()
    :
    	package_name{YType::str, "package-name"},
	 alias_names{YType::str, "alias-names"}
{
    yang_name = "alias"; yang_parent_name = "aliases";
}

Install::Software::AliasDevices::AliasDevice::Aliases::Alias::~Alias()
{
}

bool Install::Software::AliasDevices::AliasDevice::Aliases::Alias::has_data() const
{
    return package_name.is_set
	|| alias_names.is_set;
}

bool Install::Software::AliasDevices::AliasDevice::Aliases::Alias::has_operation() const
{
    return is_set(operation)
	|| is_set(package_name.operation)
	|| is_set(alias_names.operation);
}

std::string Install::Software::AliasDevices::AliasDevice::Aliases::Alias::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alias" <<"[package-name='" <<package_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Install::Software::AliasDevices::AliasDevice::Aliases::Alias::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (package_name.is_set || is_set(package_name.operation)) leaf_name_data.push_back(package_name.get_name_leafdata());
    if (alias_names.is_set || is_set(alias_names.operation)) leaf_name_data.push_back(alias_names.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Software::AliasDevices::AliasDevice::Aliases::Alias::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Software::AliasDevices::AliasDevice::Aliases::Alias::get_children()
{
    return children;
}

void Install::Software::AliasDevices::AliasDevice::Aliases::Alias::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "package-name")
    {
        package_name = value;
    }
    if(value_path == "alias-names")
    {
        alias_names = value;
    }
}

Install::Software::AliasDevices::AliasDevice::Aliases::Aliases()
{
    yang_name = "aliases"; yang_parent_name = "alias-device";
}

Install::Software::AliasDevices::AliasDevice::Aliases::~Aliases()
{
}

bool Install::Software::AliasDevices::AliasDevice::Aliases::has_data() const
{
    for (std::size_t index=0; index<alias.size(); index++)
    {
        if(alias[index]->has_data())
            return true;
    }
    return false;
}

bool Install::Software::AliasDevices::AliasDevice::Aliases::has_operation() const
{
    for (std::size_t index=0; index<alias.size(); index++)
    {
        if(alias[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Install::Software::AliasDevices::AliasDevice::Aliases::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aliases";

    return path_buffer.str();

}

EntityPath Install::Software::AliasDevices::AliasDevice::Aliases::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Software::AliasDevices::AliasDevice::Aliases::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "alias")
    {
        for(auto const & c : alias)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::Software::AliasDevices::AliasDevice::Aliases::Alias>();
        c->parent = this;
        alias.push_back(std::move(c));
        children[segment_path] = alias.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Software::AliasDevices::AliasDevice::Aliases::get_children()
{
    for (auto const & c : alias)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::Software::AliasDevices::AliasDevice::Aliases::set_value(const std::string & value_path, std::string value)
{
}

Install::Software::AliasDevices::AliasDevice::AliasDevice()
    :
    	device_name{YType::str, "device-name"}
    	,
    aliases(std::make_unique<Install::Software::AliasDevices::AliasDevice::Aliases>())
{
    aliases->parent = this;
    children["aliases"] = aliases.get();

    yang_name = "alias-device"; yang_parent_name = "alias-devices";
}

Install::Software::AliasDevices::AliasDevice::~AliasDevice()
{
}

bool Install::Software::AliasDevices::AliasDevice::has_data() const
{
    return device_name.is_set
	|| (aliases !=  nullptr && aliases->has_data());
}

bool Install::Software::AliasDevices::AliasDevice::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| (aliases !=  nullptr && aliases->has_operation());
}

std::string Install::Software::AliasDevices::AliasDevice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alias-device" <<"[device-name='" <<device_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Install::Software::AliasDevices::AliasDevice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software/alias-devices/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Software::AliasDevices::AliasDevice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "aliases")
    {
        if(aliases != nullptr)
        {
            children["aliases"] = aliases.get();
        }
        else
        {
            aliases = std::make_unique<Install::Software::AliasDevices::AliasDevice::Aliases>();
            aliases->parent = this;
            children["aliases"] = aliases.get();
        }
        return children.at("aliases");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Software::AliasDevices::AliasDevice::get_children()
{
    if(children.find("aliases") == children.end())
    {
        if(aliases != nullptr)
        {
            children["aliases"] = aliases.get();
        }
    }

    return children;
}

void Install::Software::AliasDevices::AliasDevice::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
}

Install::Software::AliasDevices::AliasDevices()
{
    yang_name = "alias-devices"; yang_parent_name = "software";
}

Install::Software::AliasDevices::~AliasDevices()
{
}

bool Install::Software::AliasDevices::has_data() const
{
    for (std::size_t index=0; index<alias_device.size(); index++)
    {
        if(alias_device[index]->has_data())
            return true;
    }
    return false;
}

bool Install::Software::AliasDevices::has_operation() const
{
    for (std::size_t index=0; index<alias_device.size(); index++)
    {
        if(alias_device[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Install::Software::AliasDevices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alias-devices";

    return path_buffer.str();

}

EntityPath Install::Software::AliasDevices::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Software::AliasDevices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "alias-device")
    {
        for(auto const & c : alias_device)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::Software::AliasDevices::AliasDevice>();
        c->parent = this;
        alias_device.push_back(std::move(c));
        children[segment_path] = alias_device.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Software::AliasDevices::get_children()
{
    for (auto const & c : alias_device)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::Software::AliasDevices::set_value(const std::string & value_path, std::string value)
{
}

Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg::SubPkg()
    :
    	name{YType::str, "name"},
	 node_types{YType::uint64, "node-types"}
{
    yang_name = "sub-pkg"; yang_parent_name = "package";
}

Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg::~SubPkg()
{
}

bool Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg::has_data() const
{
    return name.is_set
	|| node_types.is_set;
}

bool Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(node_types.operation);
}

std::string Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-pkg";

    return path_buffer.str();

}

EntityPath Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_types.is_set || is_set(node_types.operation)) leaf_name_data.push_back(node_types.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg::get_children()
{
    return children;
}

void Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "node-types")
    {
        node_types = value;
    }
}

Install::Software::PackageDevices::PackageDevice::Packages::Package::Package()
    :
    	package_name{YType::str, "package-name"},
	 base{YType::str, "base"},
	 bootable{YType::boolean, "bootable"},
	 cards{YType::str, "cards"},
	 composite{YType::boolean, "composite"},
	 compressed_size{YType::uint32, "compressed-size"},
	 date{YType::str, "date"},
	 depth{YType::uint32, "depth"},
	 description{YType::str, "description"},
	 group_type{YType::enumeration, "group-type"},
	 name{YType::str, "name"},
	 package_type{YType::enumeration, "package-type"},
	 release{YType::str, "release"},
	 restart_info{YType::str, "restart-info"},
	 source{YType::str, "source"},
	 uncompressed_size{YType::uint32, "uncompressed-size"},
	 vendor{YType::str, "vendor"},
	 version{YType::str, "version"}
{
    yang_name = "package"; yang_parent_name = "packages";
}

Install::Software::PackageDevices::PackageDevice::Packages::Package::~Package()
{
}

bool Install::Software::PackageDevices::PackageDevice::Packages::Package::has_data() const
{
    for (std::size_t index=0; index<sub_pkg.size(); index++)
    {
        if(sub_pkg[index]->has_data())
            return true;
    }
    for (auto const & leaf : cards.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return package_name.is_set
	|| base.is_set
	|| bootable.is_set
	|| composite.is_set
	|| compressed_size.is_set
	|| date.is_set
	|| depth.is_set
	|| description.is_set
	|| group_type.is_set
	|| name.is_set
	|| package_type.is_set
	|| release.is_set
	|| restart_info.is_set
	|| source.is_set
	|| uncompressed_size.is_set
	|| vendor.is_set
	|| version.is_set;
}

bool Install::Software::PackageDevices::PackageDevice::Packages::Package::has_operation() const
{
    for (std::size_t index=0; index<sub_pkg.size(); index++)
    {
        if(sub_pkg[index]->has_operation())
            return true;
    }
    for (auto const & leaf : cards.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(package_name.operation)
	|| is_set(base.operation)
	|| is_set(bootable.operation)
	|| is_set(cards.operation)
	|| is_set(composite.operation)
	|| is_set(compressed_size.operation)
	|| is_set(date.operation)
	|| is_set(depth.operation)
	|| is_set(description.operation)
	|| is_set(group_type.operation)
	|| is_set(name.operation)
	|| is_set(package_type.operation)
	|| is_set(release.operation)
	|| is_set(restart_info.operation)
	|| is_set(source.operation)
	|| is_set(uncompressed_size.operation)
	|| is_set(vendor.operation)
	|| is_set(version.operation);
}

std::string Install::Software::PackageDevices::PackageDevice::Packages::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package" <<"[package-name='" <<package_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Install::Software::PackageDevices::PackageDevice::Packages::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (package_name.is_set || is_set(package_name.operation)) leaf_name_data.push_back(package_name.get_name_leafdata());
    if (base.is_set || is_set(base.operation)) leaf_name_data.push_back(base.get_name_leafdata());
    if (bootable.is_set || is_set(bootable.operation)) leaf_name_data.push_back(bootable.get_name_leafdata());
    if (composite.is_set || is_set(composite.operation)) leaf_name_data.push_back(composite.get_name_leafdata());
    if (compressed_size.is_set || is_set(compressed_size.operation)) leaf_name_data.push_back(compressed_size.get_name_leafdata());
    if (date.is_set || is_set(date.operation)) leaf_name_data.push_back(date.get_name_leafdata());
    if (depth.is_set || is_set(depth.operation)) leaf_name_data.push_back(depth.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (group_type.is_set || is_set(group_type.operation)) leaf_name_data.push_back(group_type.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (package_type.is_set || is_set(package_type.operation)) leaf_name_data.push_back(package_type.get_name_leafdata());
    if (release.is_set || is_set(release.operation)) leaf_name_data.push_back(release.get_name_leafdata());
    if (restart_info.is_set || is_set(restart_info.operation)) leaf_name_data.push_back(restart_info.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (uncompressed_size.is_set || is_set(uncompressed_size.operation)) leaf_name_data.push_back(uncompressed_size.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.operation)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());

    auto cards_name_datas = cards.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cards_name_datas.begin(), cards_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Software::PackageDevices::PackageDevice::Packages::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sub-pkg")
    {
        for(auto const & c : sub_pkg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg>();
        c->parent = this;
        sub_pkg.push_back(std::move(c));
        children[segment_path] = sub_pkg.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Software::PackageDevices::PackageDevice::Packages::Package::get_children()
{
    for (auto const & c : sub_pkg)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::Software::PackageDevices::PackageDevice::Packages::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "package-name")
    {
        package_name = value;
    }
    if(value_path == "base")
    {
        base = value;
    }
    if(value_path == "bootable")
    {
        bootable = value;
    }
    if(value_path == "cards")
    {
        cards.append(value);
    }
    if(value_path == "composite")
    {
        composite = value;
    }
    if(value_path == "compressed-size")
    {
        compressed_size = value;
    }
    if(value_path == "date")
    {
        date = value;
    }
    if(value_path == "depth")
    {
        depth = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "group-type")
    {
        group_type = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "package-type")
    {
        package_type = value;
    }
    if(value_path == "release")
    {
        release = value;
    }
    if(value_path == "restart-info")
    {
        restart_info = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "uncompressed-size")
    {
        uncompressed_size = value;
    }
    if(value_path == "vendor")
    {
        vendor = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::Software::PackageDevices::PackageDevice::Packages::Packages()
{
    yang_name = "packages"; yang_parent_name = "package-device";
}

Install::Software::PackageDevices::PackageDevice::Packages::~Packages()
{
}

bool Install::Software::PackageDevices::PackageDevice::Packages::has_data() const
{
    for (std::size_t index=0; index<package.size(); index++)
    {
        if(package[index]->has_data())
            return true;
    }
    return false;
}

bool Install::Software::PackageDevices::PackageDevice::Packages::has_operation() const
{
    for (std::size_t index=0; index<package.size(); index++)
    {
        if(package[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Install::Software::PackageDevices::PackageDevice::Packages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packages";

    return path_buffer.str();

}

EntityPath Install::Software::PackageDevices::PackageDevice::Packages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Software::PackageDevices::PackageDevice::Packages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        for(auto const & c : package)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::Software::PackageDevices::PackageDevice::Packages::Package>();
        c->parent = this;
        package.push_back(std::move(c));
        children[segment_path] = package.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Software::PackageDevices::PackageDevice::Packages::get_children()
{
    for (auto const & c : package)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::Software::PackageDevices::PackageDevice::Packages::set_value(const std::string & value_path, std::string value)
{
}

Install::Software::PackageDevices::PackageDevice::PackageDevice()
    :
    	device_name{YType::str, "device-name"}
    	,
    packages(std::make_unique<Install::Software::PackageDevices::PackageDevice::Packages>())
{
    packages->parent = this;
    children["packages"] = packages.get();

    yang_name = "package-device"; yang_parent_name = "package-devices";
}

Install::Software::PackageDevices::PackageDevice::~PackageDevice()
{
}

bool Install::Software::PackageDevices::PackageDevice::has_data() const
{
    return device_name.is_set
	|| (packages !=  nullptr && packages->has_data());
}

bool Install::Software::PackageDevices::PackageDevice::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| (packages !=  nullptr && packages->has_operation());
}

std::string Install::Software::PackageDevices::PackageDevice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package-device" <<"[device-name='" <<device_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Install::Software::PackageDevices::PackageDevice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software/package-devices/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Software::PackageDevices::PackageDevice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "packages")
    {
        if(packages != nullptr)
        {
            children["packages"] = packages.get();
        }
        else
        {
            packages = std::make_unique<Install::Software::PackageDevices::PackageDevice::Packages>();
            packages->parent = this;
            children["packages"] = packages.get();
        }
        return children.at("packages");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Software::PackageDevices::PackageDevice::get_children()
{
    if(children.find("packages") == children.end())
    {
        if(packages != nullptr)
        {
            children["packages"] = packages.get();
        }
    }

    return children;
}

void Install::Software::PackageDevices::PackageDevice::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
}

Install::Software::PackageDevices::PackageDevices()
{
    yang_name = "package-devices"; yang_parent_name = "software";
}

Install::Software::PackageDevices::~PackageDevices()
{
}

bool Install::Software::PackageDevices::has_data() const
{
    for (std::size_t index=0; index<package_device.size(); index++)
    {
        if(package_device[index]->has_data())
            return true;
    }
    return false;
}

bool Install::Software::PackageDevices::has_operation() const
{
    for (std::size_t index=0; index<package_device.size(); index++)
    {
        if(package_device[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Install::Software::PackageDevices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package-devices";

    return path_buffer.str();

}

EntityPath Install::Software::PackageDevices::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Software::PackageDevices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package-device")
    {
        for(auto const & c : package_device)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::Software::PackageDevices::PackageDevice>();
        c->parent = this;
        package_device.push_back(std::move(c));
        children[segment_path] = package_device.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Software::PackageDevices::get_children()
{
    for (auto const & c : package_device)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::Software::PackageDevices::set_value(const std::string & value_path, std::string value)
{
}

Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component::Component()
    :
    	component_name{YType::str, "component-name"},
	 description{YType::str, "description"},
	 files{YType::str, "files"},
	 name{YType::str, "name"},
	 release{YType::str, "release"},
	 version{YType::str, "version"}
{
    yang_name = "component"; yang_parent_name = "component-package";
}

Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component::~Component()
{
}

bool Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component::has_data() const
{
    for (auto const & leaf : files.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return component_name.is_set
	|| description.is_set
	|| name.is_set
	|| release.is_set
	|| version.is_set;
}

bool Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component::has_operation() const
{
    for (auto const & leaf : files.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(component_name.operation)
	|| is_set(description.operation)
	|| is_set(files.operation)
	|| is_set(name.operation)
	|| is_set(release.operation)
	|| is_set(version.operation);
}

std::string Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "component" <<"[component-name='" <<component_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (component_name.is_set || is_set(component_name.operation)) leaf_name_data.push_back(component_name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (release.is_set || is_set(release.operation)) leaf_name_data.push_back(release.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());

    auto files_name_datas = files.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), files_name_datas.begin(), files_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component::get_children()
{
    return children;
}

void Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "component-name")
    {
        component_name = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "files")
    {
        files.append(value);
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "release")
    {
        release = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::ComponentPackage()
    :
    	package_name{YType::str, "package-name"}
{
    yang_name = "component-package"; yang_parent_name = "component-packages";
}

Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::~ComponentPackage()
{
}

bool Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::has_data() const
{
    for (std::size_t index=0; index<component.size(); index++)
    {
        if(component[index]->has_data())
            return true;
    }
    return package_name.is_set;
}

bool Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::has_operation() const
{
    for (std::size_t index=0; index<component.size(); index++)
    {
        if(component[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(package_name.operation);
}

std::string Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "component-package" <<"[package-name='" <<package_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (package_name.is_set || is_set(package_name.operation)) leaf_name_data.push_back(package_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "component")
    {
        for(auto const & c : component)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component>();
        c->parent = this;
        component.push_back(std::move(c));
        children[segment_path] = component.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::get_children()
{
    for (auto const & c : component)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "package-name")
    {
        package_name = value;
    }
}

Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackages()
{
    yang_name = "component-packages"; yang_parent_name = "component-device";
}

Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::~ComponentPackages()
{
}

bool Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::has_data() const
{
    for (std::size_t index=0; index<component_package.size(); index++)
    {
        if(component_package[index]->has_data())
            return true;
    }
    return false;
}

bool Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::has_operation() const
{
    for (std::size_t index=0; index<component_package.size(); index++)
    {
        if(component_package[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "component-packages";

    return path_buffer.str();

}

EntityPath Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "component-package")
    {
        for(auto const & c : component_package)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage>();
        c->parent = this;
        component_package.push_back(std::move(c));
        children[segment_path] = component_package.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::get_children()
{
    for (auto const & c : component_package)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::set_value(const std::string & value_path, std::string value)
{
}

Install::Software::ComponentDevices::ComponentDevice::ComponentDevice()
    :
    	device_name{YType::str, "device-name"}
    	,
    component_packages(std::make_unique<Install::Software::ComponentDevices::ComponentDevice::ComponentPackages>())
{
    component_packages->parent = this;
    children["component-packages"] = component_packages.get();

    yang_name = "component-device"; yang_parent_name = "component-devices";
}

Install::Software::ComponentDevices::ComponentDevice::~ComponentDevice()
{
}

bool Install::Software::ComponentDevices::ComponentDevice::has_data() const
{
    return device_name.is_set
	|| (component_packages !=  nullptr && component_packages->has_data());
}

bool Install::Software::ComponentDevices::ComponentDevice::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| (component_packages !=  nullptr && component_packages->has_operation());
}

std::string Install::Software::ComponentDevices::ComponentDevice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "component-device" <<"[device-name='" <<device_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Install::Software::ComponentDevices::ComponentDevice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software/component-devices/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Software::ComponentDevices::ComponentDevice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "component-packages")
    {
        if(component_packages != nullptr)
        {
            children["component-packages"] = component_packages.get();
        }
        else
        {
            component_packages = std::make_unique<Install::Software::ComponentDevices::ComponentDevice::ComponentPackages>();
            component_packages->parent = this;
            children["component-packages"] = component_packages.get();
        }
        return children.at("component-packages");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Software::ComponentDevices::ComponentDevice::get_children()
{
    if(children.find("component-packages") == children.end())
    {
        if(component_packages != nullptr)
        {
            children["component-packages"] = component_packages.get();
        }
    }

    return children;
}

void Install::Software::ComponentDevices::ComponentDevice::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
}

Install::Software::ComponentDevices::ComponentDevices()
{
    yang_name = "component-devices"; yang_parent_name = "software";
}

Install::Software::ComponentDevices::~ComponentDevices()
{
}

bool Install::Software::ComponentDevices::has_data() const
{
    for (std::size_t index=0; index<component_device.size(); index++)
    {
        if(component_device[index]->has_data())
            return true;
    }
    return false;
}

bool Install::Software::ComponentDevices::has_operation() const
{
    for (std::size_t index=0; index<component_device.size(); index++)
    {
        if(component_device[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Install::Software::ComponentDevices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "component-devices";

    return path_buffer.str();

}

EntityPath Install::Software::ComponentDevices::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Software::ComponentDevices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "component-device")
    {
        for(auto const & c : component_device)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::Software::ComponentDevices::ComponentDevice>();
        c->parent = this;
        component_device.push_back(std::move(c));
        children[segment_path] = component_device.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Software::ComponentDevices::get_children()
{
    for (auto const & c : component_device)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::Software::ComponentDevices::set_value(const std::string & value_path, std::string value)
{
}

Install::Software::Software()
    :
    alias_devices(std::make_unique<Install::Software::AliasDevices>())
	,component_devices(std::make_unique<Install::Software::ComponentDevices>())
	,package_devices(std::make_unique<Install::Software::PackageDevices>())
{
    alias_devices->parent = this;
    children["alias-devices"] = alias_devices.get();

    component_devices->parent = this;
    children["component-devices"] = component_devices.get();

    package_devices->parent = this;
    children["package-devices"] = package_devices.get();

    yang_name = "software"; yang_parent_name = "install";
}

Install::Software::~Software()
{
}

bool Install::Software::has_data() const
{
    return (alias_devices !=  nullptr && alias_devices->has_data())
	|| (component_devices !=  nullptr && component_devices->has_data())
	|| (package_devices !=  nullptr && package_devices->has_data());
}

bool Install::Software::has_operation() const
{
    return is_set(operation)
	|| (alias_devices !=  nullptr && alias_devices->has_operation())
	|| (component_devices !=  nullptr && component_devices->has_operation())
	|| (package_devices !=  nullptr && package_devices->has_operation());
}

std::string Install::Software::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "software";

    return path_buffer.str();

}

EntityPath Install::Software::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Software::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "alias-devices")
    {
        if(alias_devices != nullptr)
        {
            children["alias-devices"] = alias_devices.get();
        }
        else
        {
            alias_devices = std::make_unique<Install::Software::AliasDevices>();
            alias_devices->parent = this;
            children["alias-devices"] = alias_devices.get();
        }
        return children.at("alias-devices");
    }

    if(child_yang_name == "component-devices")
    {
        if(component_devices != nullptr)
        {
            children["component-devices"] = component_devices.get();
        }
        else
        {
            component_devices = std::make_unique<Install::Software::ComponentDevices>();
            component_devices->parent = this;
            children["component-devices"] = component_devices.get();
        }
        return children.at("component-devices");
    }

    if(child_yang_name == "package-devices")
    {
        if(package_devices != nullptr)
        {
            children["package-devices"] = package_devices.get();
        }
        else
        {
            package_devices = std::make_unique<Install::Software::PackageDevices>();
            package_devices->parent = this;
            children["package-devices"] = package_devices.get();
        }
        return children.at("package-devices");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Software::get_children()
{
    if(children.find("alias-devices") == children.end())
    {
        if(alias_devices != nullptr)
        {
            children["alias-devices"] = alias_devices.get();
        }
    }

    if(children.find("component-devices") == children.end())
    {
        if(component_devices != nullptr)
        {
            children["component-devices"] = component_devices.get();
        }
    }

    if(children.find("package-devices") == children.end())
    {
        if(package_devices != nullptr)
        {
            children["package-devices"] = package_devices.get();
        }
    }

    return children;
}

void Install::Software::set_value(const std::string & value_path, std::string value)
{
}

Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "load-path";
}

Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/default-load-path/load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::LoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "load-path"; yang_parent_name = "default-load-path";
}

Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/default-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "standby-load-path";
}

Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/default-load-path/standby-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::StandbyLoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "standby-load-path"; yang_parent_name = "default-load-path";
}

Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::~StandbyLoadPath()
{
}

bool Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/default-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::DefaultLoadPath()
    :
    	admin_match{YType::boolean, "admin-match"},
	 request_id{YType::uint32, "request-id"},
	 secure_domain_router_name{YType::str, "secure-domain-router-name"}
{
    yang_name = "default-load-path"; yang_parent_name = "summary";
}

Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::~DefaultLoadPath()
{
}

bool Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::has_data() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.size(); index++)
    {
        if(standby_load_path[index]->has_data())
            return true;
    }
    for (auto const & leaf : secure_domain_router_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return admin_match.is_set
	|| request_id.is_set;
}

bool Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::has_operation() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.size(); index++)
    {
        if(standby_load_path[index]->has_operation())
            return true;
    }
    for (auto const & leaf : secure_domain_router_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(admin_match.operation)
	|| is_set(request_id.operation)
	|| is_set(secure_domain_router_name.operation);
}

std::string Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_match.is_set || is_set(admin_match.operation)) leaf_name_data.push_back(admin_match.get_name_leafdata());
    if (request_id.is_set || is_set(request_id.operation)) leaf_name_data.push_back(request_id.get_name_leafdata());

    auto secure_domain_router_name_name_datas = secure_domain_router_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), secure_domain_router_name_name_datas.begin(), secure_domain_router_name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "load-path")
    {
        for(auto const & c : load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath>();
        c->parent = this;
        load_path.push_back(std::move(c));
        children[segment_path] = load_path.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "standby-load-path")
    {
        for(auto const & c : standby_load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath>();
        c->parent = this;
        standby_load_path.push_back(std::move(c));
        children[segment_path] = standby_load_path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::get_children()
{
    for (auto const & c : load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : standby_load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-match")
    {
        admin_match = value;
    }
    if(value_path == "request-id")
    {
        request_id = value;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name.append(value);
    }
}

Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "load-path";
}

Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/admin-load-path/load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::LoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "load-path"; yang_parent_name = "admin-load-path";
}

Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/admin-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "standby-load-path";
}

Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/admin-load-path/standby-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::StandbyLoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "standby-load-path"; yang_parent_name = "admin-load-path";
}

Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::~StandbyLoadPath()
{
}

bool Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/admin-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Committed::Summary::AdminLoadPath::AdminLoadPath()
    :
    	request_id{YType::uint32, "request-id"}
{
    yang_name = "admin-load-path"; yang_parent_name = "summary";
}

Install::SoftwareInventory::Committed::Summary::AdminLoadPath::~AdminLoadPath()
{
}

bool Install::SoftwareInventory::Committed::Summary::AdminLoadPath::has_data() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.size(); index++)
    {
        if(standby_load_path[index]->has_data())
            return true;
    }
    return request_id.is_set;
}

bool Install::SoftwareInventory::Committed::Summary::AdminLoadPath::has_operation() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.size(); index++)
    {
        if(standby_load_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(request_id.operation);
}

std::string Install::SoftwareInventory::Committed::Summary::AdminLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Committed::Summary::AdminLoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_id.is_set || is_set(request_id.operation)) leaf_name_data.push_back(request_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Committed::Summary::AdminLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "load-path")
    {
        for(auto const & c : load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath>();
        c->parent = this;
        load_path.push_back(std::move(c));
        children[segment_path] = load_path.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "standby-load-path")
    {
        for(auto const & c : standby_load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath>();
        c->parent = this;
        standby_load_path.push_back(std::move(c));
        children[segment_path] = standby_load_path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Committed::Summary::AdminLoadPath::get_children()
{
    for (auto const & c : load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : standby_load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Committed::Summary::AdminLoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "request-id")
    {
        request_id = value;
    }
}

Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "load-path";
}

Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/sdr-load-path/load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::LoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "load-path"; yang_parent_name = "sdr-load-path";
}

Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/sdr-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "standby-load-path";
}

Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/sdr-load-path/standby-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::StandbyLoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "standby-load-path"; yang_parent_name = "sdr-load-path";
}

Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::~StandbyLoadPath()
{
}

bool Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/sdr-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Committed::Summary::SdrLoadPath::SdrLoadPath()
    :
    	request_id{YType::uint32, "request-id"},
	 secure_domain_router_name{YType::str, "secure-domain-router-name"}
{
    yang_name = "sdr-load-path"; yang_parent_name = "summary";
}

Install::SoftwareInventory::Committed::Summary::SdrLoadPath::~SdrLoadPath()
{
}

bool Install::SoftwareInventory::Committed::Summary::SdrLoadPath::has_data() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.size(); index++)
    {
        if(standby_load_path[index]->has_data())
            return true;
    }
    return request_id.is_set
	|| secure_domain_router_name.is_set;
}

bool Install::SoftwareInventory::Committed::Summary::SdrLoadPath::has_operation() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.size(); index++)
    {
        if(standby_load_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(request_id.operation)
	|| is_set(secure_domain_router_name.operation);
}

std::string Install::SoftwareInventory::Committed::Summary::SdrLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Committed::Summary::SdrLoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_id.is_set || is_set(request_id.operation)) leaf_name_data.push_back(request_id.get_name_leafdata());
    if (secure_domain_router_name.is_set || is_set(secure_domain_router_name.operation)) leaf_name_data.push_back(secure_domain_router_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Committed::Summary::SdrLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "load-path")
    {
        for(auto const & c : load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath>();
        c->parent = this;
        load_path.push_back(std::move(c));
        children[segment_path] = load_path.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "standby-load-path")
    {
        for(auto const & c : standby_load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath>();
        c->parent = this;
        standby_load_path.push_back(std::move(c));
        children[segment_path] = standby_load_path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Committed::Summary::SdrLoadPath::get_children()
{
    for (auto const & c : load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : standby_load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Committed::Summary::SdrLoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "request-id")
    {
        request_id = value;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name = value;
    }
}

Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "load-path";
}

Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/location-load-path/load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::LoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "load-path"; yang_parent_name = "location-load-path";
}

Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/location-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "standby-load-path";
}

Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/location-load-path/standby-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::StandbyLoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "standby-load-path"; yang_parent_name = "location-load-path";
}

Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::~StandbyLoadPath()
{
}

bool Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/location-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LocationLoadPath()
    :
    	node_name{YType::str, "node-name"},
	 request_id{YType::uint32, "request-id"},
	 secure_domain_router_name{YType::str, "secure-domain-router-name"}
{
    yang_name = "location-load-path"; yang_parent_name = "summary";
}

Install::SoftwareInventory::Committed::Summary::LocationLoadPath::~LocationLoadPath()
{
}

bool Install::SoftwareInventory::Committed::Summary::LocationLoadPath::has_data() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.size(); index++)
    {
        if(standby_load_path[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| request_id.is_set
	|| secure_domain_router_name.is_set;
}

bool Install::SoftwareInventory::Committed::Summary::LocationLoadPath::has_operation() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.size(); index++)
    {
        if(standby_load_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(node_name.operation)
	|| is_set(request_id.operation)
	|| is_set(secure_domain_router_name.operation);
}

std::string Install::SoftwareInventory::Committed::Summary::LocationLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location-load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Committed::Summary::LocationLoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (request_id.is_set || is_set(request_id.operation)) leaf_name_data.push_back(request_id.get_name_leafdata());
    if (secure_domain_router_name.is_set || is_set(secure_domain_router_name.operation)) leaf_name_data.push_back(secure_domain_router_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Committed::Summary::LocationLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "load-path")
    {
        for(auto const & c : load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath>();
        c->parent = this;
        load_path.push_back(std::move(c));
        children[segment_path] = load_path.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "standby-load-path")
    {
        for(auto const & c : standby_load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath>();
        c->parent = this;
        standby_load_path.push_back(std::move(c));
        children[segment_path] = standby_load_path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Committed::Summary::LocationLoadPath::get_children()
{
    for (auto const & c : load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : standby_load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Committed::Summary::LocationLoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "request-id")
    {
        request_id = value;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name = value;
    }
}

Install::SoftwareInventory::Committed::Summary::Summary()
    :
    admin_load_path(std::make_unique<Install::SoftwareInventory::Committed::Summary::AdminLoadPath>())
	,default_load_path(std::make_unique<Install::SoftwareInventory::Committed::Summary::DefaultLoadPath>())
{
    admin_load_path->parent = this;
    children["admin-load-path"] = admin_load_path.get();

    default_load_path->parent = this;
    children["default-load-path"] = default_load_path.get();

    yang_name = "summary"; yang_parent_name = "committed";
}

Install::SoftwareInventory::Committed::Summary::~Summary()
{
}

bool Install::SoftwareInventory::Committed::Summary::has_data() const
{
    for (std::size_t index=0; index<location_load_path.size(); index++)
    {
        if(location_load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sdr_load_path.size(); index++)
    {
        if(sdr_load_path[index]->has_data())
            return true;
    }
    return (admin_load_path !=  nullptr && admin_load_path->has_data())
	|| (default_load_path !=  nullptr && default_load_path->has_data());
}

bool Install::SoftwareInventory::Committed::Summary::has_operation() const
{
    for (std::size_t index=0; index<location_load_path.size(); index++)
    {
        if(location_load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sdr_load_path.size(); index++)
    {
        if(sdr_load_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (admin_load_path !=  nullptr && admin_load_path->has_operation())
	|| (default_load_path !=  nullptr && default_load_path->has_operation());
}

std::string Install::SoftwareInventory::Committed::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Committed::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Committed::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "admin-load-path")
    {
        if(admin_load_path != nullptr)
        {
            children["admin-load-path"] = admin_load_path.get();
        }
        else
        {
            admin_load_path = std::make_unique<Install::SoftwareInventory::Committed::Summary::AdminLoadPath>();
            admin_load_path->parent = this;
            children["admin-load-path"] = admin_load_path.get();
        }
        return children.at("admin-load-path");
    }

    if(child_yang_name == "default-load-path")
    {
        if(default_load_path != nullptr)
        {
            children["default-load-path"] = default_load_path.get();
        }
        else
        {
            default_load_path = std::make_unique<Install::SoftwareInventory::Committed::Summary::DefaultLoadPath>();
            default_load_path->parent = this;
            children["default-load-path"] = default_load_path.get();
        }
        return children.at("default-load-path");
    }

    if(child_yang_name == "location-load-path")
    {
        for(auto const & c : location_load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Committed::Summary::LocationLoadPath>();
        c->parent = this;
        location_load_path.push_back(std::move(c));
        children[segment_path] = location_load_path.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "sdr-load-path")
    {
        for(auto const & c : sdr_load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Committed::Summary::SdrLoadPath>();
        c->parent = this;
        sdr_load_path.push_back(std::move(c));
        children[segment_path] = sdr_load_path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Committed::Summary::get_children()
{
    if(children.find("admin-load-path") == children.end())
    {
        if(admin_load_path != nullptr)
        {
            children["admin-load-path"] = admin_load_path.get();
        }
    }

    if(children.find("default-load-path") == children.end())
    {
        if(default_load_path != nullptr)
        {
            children["default-load-path"] = default_load_path.get();
        }
    }

    for (auto const & c : location_load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : sdr_load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Committed::Summary::set_value(const std::string & value_path, std::string value)
{
}

Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "load-path";
}

Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::LoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "load-path"; yang_parent_name = "inventory";
}

Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Committed::Inventories::Inventory::Inventory()
    :
    	node_name{YType::str, "node-name"},
	 boot_image_name{YType::str, "boot-image-name"},
	 major{YType::uint32, "major"},
	 minor{YType::uint32, "minor"},
	 node_type{YType::uint64, "node-type"},
	 secure_domain_router_name{YType::str, "secure-domain-router-name"}
{
    yang_name = "inventory"; yang_parent_name = "inventories";
}

Install::SoftwareInventory::Committed::Inventories::Inventory::~Inventory()
{
}

bool Install::SoftwareInventory::Committed::Inventories::Inventory::has_data() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| boot_image_name.is_set
	|| major.is_set
	|| minor.is_set
	|| node_type.is_set
	|| secure_domain_router_name.is_set;
}

bool Install::SoftwareInventory::Committed::Inventories::Inventory::has_operation() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(node_name.operation)
	|| is_set(boot_image_name.operation)
	|| is_set(major.operation)
	|| is_set(minor.operation)
	|| is_set(node_type.operation)
	|| is_set(secure_domain_router_name.operation);
}

std::string Install::SoftwareInventory::Committed::Inventories::Inventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventory" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Committed::Inventories::Inventory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/inventories/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (boot_image_name.is_set || is_set(boot_image_name.operation)) leaf_name_data.push_back(boot_image_name.get_name_leafdata());
    if (major.is_set || is_set(major.operation)) leaf_name_data.push_back(major.get_name_leafdata());
    if (minor.is_set || is_set(minor.operation)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (node_type.is_set || is_set(node_type.operation)) leaf_name_data.push_back(node_type.get_name_leafdata());
    if (secure_domain_router_name.is_set || is_set(secure_domain_router_name.operation)) leaf_name_data.push_back(secure_domain_router_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Committed::Inventories::Inventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "load-path")
    {
        for(auto const & c : load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath>();
        c->parent = this;
        load_path.push_back(std::move(c));
        children[segment_path] = load_path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Committed::Inventories::Inventory::get_children()
{
    for (auto const & c : load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Committed::Inventories::Inventory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "boot-image-name")
    {
        boot_image_name = value;
    }
    if(value_path == "major")
    {
        major = value;
    }
    if(value_path == "minor")
    {
        minor = value;
    }
    if(value_path == "node-type")
    {
        node_type = value;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name = value;
    }
}

Install::SoftwareInventory::Committed::Inventories::Inventories()
{
    yang_name = "inventories"; yang_parent_name = "committed";
}

Install::SoftwareInventory::Committed::Inventories::~Inventories()
{
}

bool Install::SoftwareInventory::Committed::Inventories::has_data() const
{
    for (std::size_t index=0; index<inventory.size(); index++)
    {
        if(inventory[index]->has_data())
            return true;
    }
    return false;
}

bool Install::SoftwareInventory::Committed::Inventories::has_operation() const
{
    for (std::size_t index=0; index<inventory.size(); index++)
    {
        if(inventory[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Install::SoftwareInventory::Committed::Inventories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventories";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Committed::Inventories::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Committed::Inventories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inventory")
    {
        for(auto const & c : inventory)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Committed::Inventories::Inventory>();
        c->parent = this;
        inventory.push_back(std::move(c));
        children[segment_path] = inventory.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Committed::Inventories::get_children()
{
    for (auto const & c : inventory)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Committed::Inventories::set_value(const std::string & value_path, std::string value)
{
}

Install::SoftwareInventory::Committed::Committed()
    :
    inventories(std::make_unique<Install::SoftwareInventory::Committed::Inventories>())
	,summary(std::make_unique<Install::SoftwareInventory::Committed::Summary>())
{
    inventories->parent = this;
    children["inventories"] = inventories.get();

    summary->parent = this;
    children["summary"] = summary.get();

    yang_name = "committed"; yang_parent_name = "software-inventory";
}

Install::SoftwareInventory::Committed::~Committed()
{
}

bool Install::SoftwareInventory::Committed::has_data() const
{
    return (inventories !=  nullptr && inventories->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Install::SoftwareInventory::Committed::has_operation() const
{
    return is_set(operation)
	|| (inventories !=  nullptr && inventories->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Install::SoftwareInventory::Committed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "committed";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Committed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Committed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inventories")
    {
        if(inventories != nullptr)
        {
            children["inventories"] = inventories.get();
        }
        else
        {
            inventories = std::make_unique<Install::SoftwareInventory::Committed::Inventories>();
            inventories->parent = this;
            children["inventories"] = inventories.get();
        }
        return children.at("inventories");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
        else
        {
            summary = std::make_unique<Install::SoftwareInventory::Committed::Summary>();
            summary->parent = this;
            children["summary"] = summary.get();
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Committed::get_children()
{
    if(children.find("inventories") == children.end())
    {
        if(inventories != nullptr)
        {
            children["inventories"] = inventories.get();
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Committed::set_value(const std::string & value_path, std::string value)
{
}

Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "load-path";
}

Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/default-load-path/load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::LoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "load-path"; yang_parent_name = "default-load-path";
}

Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/default-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "standby-load-path";
}

Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/default-load-path/standby-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::StandbyLoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "standby-load-path"; yang_parent_name = "default-load-path";
}

Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::~StandbyLoadPath()
{
}

bool Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/default-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::DefaultLoadPath()
    :
    	admin_match{YType::boolean, "admin-match"},
	 request_id{YType::uint32, "request-id"},
	 secure_domain_router_name{YType::str, "secure-domain-router-name"}
{
    yang_name = "default-load-path"; yang_parent_name = "summary";
}

Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::~DefaultLoadPath()
{
}

bool Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::has_data() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.size(); index++)
    {
        if(standby_load_path[index]->has_data())
            return true;
    }
    for (auto const & leaf : secure_domain_router_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return admin_match.is_set
	|| request_id.is_set;
}

bool Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::has_operation() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.size(); index++)
    {
        if(standby_load_path[index]->has_operation())
            return true;
    }
    for (auto const & leaf : secure_domain_router_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(admin_match.operation)
	|| is_set(request_id.operation)
	|| is_set(secure_domain_router_name.operation);
}

std::string Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_match.is_set || is_set(admin_match.operation)) leaf_name_data.push_back(admin_match.get_name_leafdata());
    if (request_id.is_set || is_set(request_id.operation)) leaf_name_data.push_back(request_id.get_name_leafdata());

    auto secure_domain_router_name_name_datas = secure_domain_router_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), secure_domain_router_name_name_datas.begin(), secure_domain_router_name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "load-path")
    {
        for(auto const & c : load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath>();
        c->parent = this;
        load_path.push_back(std::move(c));
        children[segment_path] = load_path.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "standby-load-path")
    {
        for(auto const & c : standby_load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath>();
        c->parent = this;
        standby_load_path.push_back(std::move(c));
        children[segment_path] = standby_load_path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::get_children()
{
    for (auto const & c : load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : standby_load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-match")
    {
        admin_match = value;
    }
    if(value_path == "request-id")
    {
        request_id = value;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name.append(value);
    }
}

Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "load-path";
}

Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/admin-load-path/load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::LoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "load-path"; yang_parent_name = "admin-load-path";
}

Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/admin-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "standby-load-path";
}

Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/admin-load-path/standby-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::StandbyLoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "standby-load-path"; yang_parent_name = "admin-load-path";
}

Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::~StandbyLoadPath()
{
}

bool Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/admin-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::AdminLoadPath()
    :
    	request_id{YType::uint32, "request-id"}
{
    yang_name = "admin-load-path"; yang_parent_name = "summary";
}

Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::~AdminLoadPath()
{
}

bool Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::has_data() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.size(); index++)
    {
        if(standby_load_path[index]->has_data())
            return true;
    }
    return request_id.is_set;
}

bool Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::has_operation() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.size(); index++)
    {
        if(standby_load_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(request_id.operation);
}

std::string Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_id.is_set || is_set(request_id.operation)) leaf_name_data.push_back(request_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "load-path")
    {
        for(auto const & c : load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath>();
        c->parent = this;
        load_path.push_back(std::move(c));
        children[segment_path] = load_path.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "standby-load-path")
    {
        for(auto const & c : standby_load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath>();
        c->parent = this;
        standby_load_path.push_back(std::move(c));
        children[segment_path] = standby_load_path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::get_children()
{
    for (auto const & c : load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : standby_load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "request-id")
    {
        request_id = value;
    }
}

Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "load-path";
}

Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/sdr-load-path/load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::LoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "load-path"; yang_parent_name = "sdr-load-path";
}

Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/sdr-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "standby-load-path";
}

Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/sdr-load-path/standby-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::StandbyLoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "standby-load-path"; yang_parent_name = "sdr-load-path";
}

Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::~StandbyLoadPath()
{
}

bool Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/sdr-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::SdrLoadPath()
    :
    	request_id{YType::uint32, "request-id"},
	 secure_domain_router_name{YType::str, "secure-domain-router-name"}
{
    yang_name = "sdr-load-path"; yang_parent_name = "summary";
}

Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::~SdrLoadPath()
{
}

bool Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::has_data() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.size(); index++)
    {
        if(standby_load_path[index]->has_data())
            return true;
    }
    return request_id.is_set
	|| secure_domain_router_name.is_set;
}

bool Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::has_operation() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.size(); index++)
    {
        if(standby_load_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(request_id.operation)
	|| is_set(secure_domain_router_name.operation);
}

std::string Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_id.is_set || is_set(request_id.operation)) leaf_name_data.push_back(request_id.get_name_leafdata());
    if (secure_domain_router_name.is_set || is_set(secure_domain_router_name.operation)) leaf_name_data.push_back(secure_domain_router_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "load-path")
    {
        for(auto const & c : load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath>();
        c->parent = this;
        load_path.push_back(std::move(c));
        children[segment_path] = load_path.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "standby-load-path")
    {
        for(auto const & c : standby_load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath>();
        c->parent = this;
        standby_load_path.push_back(std::move(c));
        children[segment_path] = standby_load_path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::get_children()
{
    for (auto const & c : load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : standby_load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "request-id")
    {
        request_id = value;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name = value;
    }
}

Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "load-path";
}

Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/location-load-path/load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::LoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "load-path"; yang_parent_name = "location-load-path";
}

Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/location-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "standby-load-path";
}

Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/location-load-path/standby-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::StandbyLoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "standby-load-path"; yang_parent_name = "location-load-path";
}

Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::~StandbyLoadPath()
{
}

bool Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/location-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LocationLoadPath()
    :
    	node_name{YType::str, "node-name"},
	 request_id{YType::uint32, "request-id"},
	 secure_domain_router_name{YType::str, "secure-domain-router-name"}
{
    yang_name = "location-load-path"; yang_parent_name = "summary";
}

Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::~LocationLoadPath()
{
}

bool Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::has_data() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.size(); index++)
    {
        if(standby_load_path[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| request_id.is_set
	|| secure_domain_router_name.is_set;
}

bool Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::has_operation() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.size(); index++)
    {
        if(standby_load_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(node_name.operation)
	|| is_set(request_id.operation)
	|| is_set(secure_domain_router_name.operation);
}

std::string Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location-load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (request_id.is_set || is_set(request_id.operation)) leaf_name_data.push_back(request_id.get_name_leafdata());
    if (secure_domain_router_name.is_set || is_set(secure_domain_router_name.operation)) leaf_name_data.push_back(secure_domain_router_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "load-path")
    {
        for(auto const & c : load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath>();
        c->parent = this;
        load_path.push_back(std::move(c));
        children[segment_path] = load_path.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "standby-load-path")
    {
        for(auto const & c : standby_load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath>();
        c->parent = this;
        standby_load_path.push_back(std::move(c));
        children[segment_path] = standby_load_path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::get_children()
{
    for (auto const & c : load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : standby_load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "request-id")
    {
        request_id = value;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name = value;
    }
}

Install::SoftwareInventory::Inactive::Summary::Summary()
    :
    admin_load_path(std::make_unique<Install::SoftwareInventory::Inactive::Summary::AdminLoadPath>())
	,default_load_path(std::make_unique<Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath>())
{
    admin_load_path->parent = this;
    children["admin-load-path"] = admin_load_path.get();

    default_load_path->parent = this;
    children["default-load-path"] = default_load_path.get();

    yang_name = "summary"; yang_parent_name = "inactive";
}

Install::SoftwareInventory::Inactive::Summary::~Summary()
{
}

bool Install::SoftwareInventory::Inactive::Summary::has_data() const
{
    for (std::size_t index=0; index<location_load_path.size(); index++)
    {
        if(location_load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sdr_load_path.size(); index++)
    {
        if(sdr_load_path[index]->has_data())
            return true;
    }
    return (admin_load_path !=  nullptr && admin_load_path->has_data())
	|| (default_load_path !=  nullptr && default_load_path->has_data());
}

bool Install::SoftwareInventory::Inactive::Summary::has_operation() const
{
    for (std::size_t index=0; index<location_load_path.size(); index++)
    {
        if(location_load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sdr_load_path.size(); index++)
    {
        if(sdr_load_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (admin_load_path !=  nullptr && admin_load_path->has_operation())
	|| (default_load_path !=  nullptr && default_load_path->has_operation());
}

std::string Install::SoftwareInventory::Inactive::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Inactive::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Inactive::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "admin-load-path")
    {
        if(admin_load_path != nullptr)
        {
            children["admin-load-path"] = admin_load_path.get();
        }
        else
        {
            admin_load_path = std::make_unique<Install::SoftwareInventory::Inactive::Summary::AdminLoadPath>();
            admin_load_path->parent = this;
            children["admin-load-path"] = admin_load_path.get();
        }
        return children.at("admin-load-path");
    }

    if(child_yang_name == "default-load-path")
    {
        if(default_load_path != nullptr)
        {
            children["default-load-path"] = default_load_path.get();
        }
        else
        {
            default_load_path = std::make_unique<Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath>();
            default_load_path->parent = this;
            children["default-load-path"] = default_load_path.get();
        }
        return children.at("default-load-path");
    }

    if(child_yang_name == "location-load-path")
    {
        for(auto const & c : location_load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Inactive::Summary::LocationLoadPath>();
        c->parent = this;
        location_load_path.push_back(std::move(c));
        children[segment_path] = location_load_path.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "sdr-load-path")
    {
        for(auto const & c : sdr_load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Inactive::Summary::SdrLoadPath>();
        c->parent = this;
        sdr_load_path.push_back(std::move(c));
        children[segment_path] = sdr_load_path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Inactive::Summary::get_children()
{
    if(children.find("admin-load-path") == children.end())
    {
        if(admin_load_path != nullptr)
        {
            children["admin-load-path"] = admin_load_path.get();
        }
    }

    if(children.find("default-load-path") == children.end())
    {
        if(default_load_path != nullptr)
        {
            children["default-load-path"] = default_load_path.get();
        }
    }

    for (auto const & c : location_load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : sdr_load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Inactive::Summary::set_value(const std::string & value_path, std::string value)
{
}

Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "load-path";
}

Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::LoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "load-path"; yang_parent_name = "inventory";
}

Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Inactive::Inventories::Inventory::Inventory()
    :
    	node_name{YType::str, "node-name"},
	 boot_image_name{YType::str, "boot-image-name"},
	 major{YType::uint32, "major"},
	 minor{YType::uint32, "minor"},
	 node_type{YType::uint64, "node-type"},
	 secure_domain_router_name{YType::str, "secure-domain-router-name"}
{
    yang_name = "inventory"; yang_parent_name = "inventories";
}

Install::SoftwareInventory::Inactive::Inventories::Inventory::~Inventory()
{
}

bool Install::SoftwareInventory::Inactive::Inventories::Inventory::has_data() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| boot_image_name.is_set
	|| major.is_set
	|| minor.is_set
	|| node_type.is_set
	|| secure_domain_router_name.is_set;
}

bool Install::SoftwareInventory::Inactive::Inventories::Inventory::has_operation() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(node_name.operation)
	|| is_set(boot_image_name.operation)
	|| is_set(major.operation)
	|| is_set(minor.operation)
	|| is_set(node_type.operation)
	|| is_set(secure_domain_router_name.operation);
}

std::string Install::SoftwareInventory::Inactive::Inventories::Inventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventory" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Inactive::Inventories::Inventory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/inventories/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (boot_image_name.is_set || is_set(boot_image_name.operation)) leaf_name_data.push_back(boot_image_name.get_name_leafdata());
    if (major.is_set || is_set(major.operation)) leaf_name_data.push_back(major.get_name_leafdata());
    if (minor.is_set || is_set(minor.operation)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (node_type.is_set || is_set(node_type.operation)) leaf_name_data.push_back(node_type.get_name_leafdata());
    if (secure_domain_router_name.is_set || is_set(secure_domain_router_name.operation)) leaf_name_data.push_back(secure_domain_router_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Inactive::Inventories::Inventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "load-path")
    {
        for(auto const & c : load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath>();
        c->parent = this;
        load_path.push_back(std::move(c));
        children[segment_path] = load_path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Inactive::Inventories::Inventory::get_children()
{
    for (auto const & c : load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Inactive::Inventories::Inventory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "boot-image-name")
    {
        boot_image_name = value;
    }
    if(value_path == "major")
    {
        major = value;
    }
    if(value_path == "minor")
    {
        minor = value;
    }
    if(value_path == "node-type")
    {
        node_type = value;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name = value;
    }
}

Install::SoftwareInventory::Inactive::Inventories::Inventories()
{
    yang_name = "inventories"; yang_parent_name = "inactive";
}

Install::SoftwareInventory::Inactive::Inventories::~Inventories()
{
}

bool Install::SoftwareInventory::Inactive::Inventories::has_data() const
{
    for (std::size_t index=0; index<inventory.size(); index++)
    {
        if(inventory[index]->has_data())
            return true;
    }
    return false;
}

bool Install::SoftwareInventory::Inactive::Inventories::has_operation() const
{
    for (std::size_t index=0; index<inventory.size(); index++)
    {
        if(inventory[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Install::SoftwareInventory::Inactive::Inventories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventories";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Inactive::Inventories::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Inactive::Inventories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inventory")
    {
        for(auto const & c : inventory)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Inactive::Inventories::Inventory>();
        c->parent = this;
        inventory.push_back(std::move(c));
        children[segment_path] = inventory.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Inactive::Inventories::get_children()
{
    for (auto const & c : inventory)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Inactive::Inventories::set_value(const std::string & value_path, std::string value)
{
}

Install::SoftwareInventory::Inactive::Inactive()
    :
    inventories(std::make_unique<Install::SoftwareInventory::Inactive::Inventories>())
	,summary(std::make_unique<Install::SoftwareInventory::Inactive::Summary>())
{
    inventories->parent = this;
    children["inventories"] = inventories.get();

    summary->parent = this;
    children["summary"] = summary.get();

    yang_name = "inactive"; yang_parent_name = "software-inventory";
}

Install::SoftwareInventory::Inactive::~Inactive()
{
}

bool Install::SoftwareInventory::Inactive::has_data() const
{
    return (inventories !=  nullptr && inventories->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Install::SoftwareInventory::Inactive::has_operation() const
{
    return is_set(operation)
	|| (inventories !=  nullptr && inventories->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Install::SoftwareInventory::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Inactive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inventories")
    {
        if(inventories != nullptr)
        {
            children["inventories"] = inventories.get();
        }
        else
        {
            inventories = std::make_unique<Install::SoftwareInventory::Inactive::Inventories>();
            inventories->parent = this;
            children["inventories"] = inventories.get();
        }
        return children.at("inventories");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
        else
        {
            summary = std::make_unique<Install::SoftwareInventory::Inactive::Summary>();
            summary->parent = this;
            children["summary"] = summary.get();
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Inactive::get_children()
{
    if(children.find("inventories") == children.end())
    {
        if(inventories != nullptr)
        {
            children["inventories"] = inventories.get();
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Inactive::set_value(const std::string & value_path, std::string value)
{
}

Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "load-path";
}

Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::LoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "load-path"; yang_parent_name = "inventory";
}

Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::Inventory()
    :
    	node_name{YType::str, "node-name"},
	 boot_image_name{YType::str, "boot-image-name"},
	 major{YType::uint32, "major"},
	 minor{YType::uint32, "minor"},
	 node_type{YType::uint64, "node-type"},
	 secure_domain_router_name{YType::str, "secure-domain-router-name"}
{
    yang_name = "inventory"; yang_parent_name = "inventories";
}

Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::~Inventory()
{
}

bool Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::has_data() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| boot_image_name.is_set
	|| major.is_set
	|| minor.is_set
	|| node_type.is_set
	|| secure_domain_router_name.is_set;
}

bool Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::has_operation() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(node_name.operation)
	|| is_set(boot_image_name.operation)
	|| is_set(major.operation)
	|| is_set(minor.operation)
	|| is_set(node_type.operation)
	|| is_set(secure_domain_router_name.operation);
}

std::string Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventory" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (boot_image_name.is_set || is_set(boot_image_name.operation)) leaf_name_data.push_back(boot_image_name.get_name_leafdata());
    if (major.is_set || is_set(major.operation)) leaf_name_data.push_back(major.get_name_leafdata());
    if (minor.is_set || is_set(minor.operation)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (node_type.is_set || is_set(node_type.operation)) leaf_name_data.push_back(node_type.get_name_leafdata());
    if (secure_domain_router_name.is_set || is_set(secure_domain_router_name.operation)) leaf_name_data.push_back(secure_domain_router_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "load-path")
    {
        for(auto const & c : load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath>();
        c->parent = this;
        load_path.push_back(std::move(c));
        children[segment_path] = load_path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::get_children()
{
    for (auto const & c : load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "boot-image-name")
    {
        boot_image_name = value;
    }
    if(value_path == "major")
    {
        major = value;
    }
    if(value_path == "minor")
    {
        minor = value;
    }
    if(value_path == "node-type")
    {
        node_type = value;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name = value;
    }
}

Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventories()
{
    yang_name = "inventories"; yang_parent_name = "request";
}

Install::SoftwareInventory::Requests::Requests_::Request::Inventories::~Inventories()
{
}

bool Install::SoftwareInventory::Requests::Requests_::Request::Inventories::has_data() const
{
    for (std::size_t index=0; index<inventory.size(); index++)
    {
        if(inventory[index]->has_data())
            return true;
    }
    return false;
}

bool Install::SoftwareInventory::Requests::Requests_::Request::Inventories::has_operation() const
{
    for (std::size_t index=0; index<inventory.size(); index++)
    {
        if(inventory[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Install::SoftwareInventory::Requests::Requests_::Request::Inventories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventories";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Requests::Requests_::Request::Inventories::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Requests::Requests_::Request::Inventories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inventory")
    {
        for(auto const & c : inventory)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory>();
        c->parent = this;
        inventory.push_back(std::move(c));
        children[segment_path] = inventory.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Requests::Requests_::Request::Inventories::get_children()
{
    for (auto const & c : inventory)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Requests::Requests_::Request::Inventories::set_value(const std::string & value_path, std::string value)
{
}

Install::SoftwareInventory::Requests::Requests_::Request::Request()
    :
    	request_id{YType::int32, "request-id"}
    	,
    inventories(std::make_unique<Install::SoftwareInventory::Requests::Requests_::Request::Inventories>())
{
    inventories->parent = this;
    children["inventories"] = inventories.get();

    yang_name = "request"; yang_parent_name = "requests";
}

Install::SoftwareInventory::Requests::Requests_::Request::~Request()
{
}

bool Install::SoftwareInventory::Requests::Requests_::Request::has_data() const
{
    return request_id.is_set
	|| (inventories !=  nullptr && inventories->has_data());
}

bool Install::SoftwareInventory::Requests::Requests_::Request::has_operation() const
{
    return is_set(operation)
	|| is_set(request_id.operation)
	|| (inventories !=  nullptr && inventories->has_operation());
}

std::string Install::SoftwareInventory::Requests::Requests_::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request" <<"[request-id='" <<request_id.get() <<"']";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Requests::Requests_::Request::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/requests/requests/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_id.is_set || is_set(request_id.operation)) leaf_name_data.push_back(request_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Requests::Requests_::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inventories")
    {
        if(inventories != nullptr)
        {
            children["inventories"] = inventories.get();
        }
        else
        {
            inventories = std::make_unique<Install::SoftwareInventory::Requests::Requests_::Request::Inventories>();
            inventories->parent = this;
            children["inventories"] = inventories.get();
        }
        return children.at("inventories");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Requests::Requests_::Request::get_children()
{
    if(children.find("inventories") == children.end())
    {
        if(inventories != nullptr)
        {
            children["inventories"] = inventories.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Requests::Requests_::Request::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "request-id")
    {
        request_id = value;
    }
}

Install::SoftwareInventory::Requests::Requests_::Requests_()
{
    yang_name = "requests"; yang_parent_name = "requests";
}

Install::SoftwareInventory::Requests::Requests_::~Requests_()
{
}

bool Install::SoftwareInventory::Requests::Requests_::has_data() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_data())
            return true;
    }
    return false;
}

bool Install::SoftwareInventory::Requests::Requests_::has_operation() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Install::SoftwareInventory::Requests::Requests_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "requests";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Requests::Requests_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/requests/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Requests::Requests_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "request")
    {
        for(auto const & c : request)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Requests::Requests_::Request>();
        c->parent = this;
        request.push_back(std::move(c));
        children[segment_path] = request.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Requests::Requests_::get_children()
{
    for (auto const & c : request)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Requests::Requests_::set_value(const std::string & value_path, std::string value)
{
}

Install::SoftwareInventory::Requests::Requests()
    :
    requests(std::make_unique<Install::SoftwareInventory::Requests::Requests_>())
{
    requests->parent = this;
    children["requests"] = requests.get();

    yang_name = "requests"; yang_parent_name = "software-inventory";
}

Install::SoftwareInventory::Requests::~Requests()
{
}

bool Install::SoftwareInventory::Requests::has_data() const
{
    return (requests !=  nullptr && requests->has_data());
}

bool Install::SoftwareInventory::Requests::has_operation() const
{
    return is_set(operation)
	|| (requests !=  nullptr && requests->has_operation());
}

std::string Install::SoftwareInventory::Requests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "requests";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Requests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Requests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "requests")
    {
        if(requests != nullptr)
        {
            children["requests"] = requests.get();
        }
        else
        {
            requests = std::make_unique<Install::SoftwareInventory::Requests::Requests_>();
            requests->parent = this;
            children["requests"] = requests.get();
        }
        return children.at("requests");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Requests::get_children()
{
    if(children.find("requests") == children.end())
    {
        if(requests != nullptr)
        {
            children["requests"] = requests.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Requests::set_value(const std::string & value_path, std::string value)
{
}

Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "load-path";
}

Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/default-load-path/load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::LoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "load-path"; yang_parent_name = "default-load-path";
}

Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/default-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "standby-load-path";
}

Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/default-load-path/standby-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::StandbyLoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "standby-load-path"; yang_parent_name = "default-load-path";
}

Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::~StandbyLoadPath()
{
}

bool Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/default-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Active::Summary::DefaultLoadPath::DefaultLoadPath()
    :
    	admin_match{YType::boolean, "admin-match"},
	 request_id{YType::uint32, "request-id"},
	 secure_domain_router_name{YType::str, "secure-domain-router-name"}
{
    yang_name = "default-load-path"; yang_parent_name = "summary";
}

Install::SoftwareInventory::Active::Summary::DefaultLoadPath::~DefaultLoadPath()
{
}

bool Install::SoftwareInventory::Active::Summary::DefaultLoadPath::has_data() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.size(); index++)
    {
        if(standby_load_path[index]->has_data())
            return true;
    }
    for (auto const & leaf : secure_domain_router_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return admin_match.is_set
	|| request_id.is_set;
}

bool Install::SoftwareInventory::Active::Summary::DefaultLoadPath::has_operation() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.size(); index++)
    {
        if(standby_load_path[index]->has_operation())
            return true;
    }
    for (auto const & leaf : secure_domain_router_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(admin_match.operation)
	|| is_set(request_id.operation)
	|| is_set(secure_domain_router_name.operation);
}

std::string Install::SoftwareInventory::Active::Summary::DefaultLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Active::Summary::DefaultLoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_match.is_set || is_set(admin_match.operation)) leaf_name_data.push_back(admin_match.get_name_leafdata());
    if (request_id.is_set || is_set(request_id.operation)) leaf_name_data.push_back(request_id.get_name_leafdata());

    auto secure_domain_router_name_name_datas = secure_domain_router_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), secure_domain_router_name_name_datas.begin(), secure_domain_router_name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Active::Summary::DefaultLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "load-path")
    {
        for(auto const & c : load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath>();
        c->parent = this;
        load_path.push_back(std::move(c));
        children[segment_path] = load_path.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "standby-load-path")
    {
        for(auto const & c : standby_load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath>();
        c->parent = this;
        standby_load_path.push_back(std::move(c));
        children[segment_path] = standby_load_path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Active::Summary::DefaultLoadPath::get_children()
{
    for (auto const & c : load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : standby_load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Active::Summary::DefaultLoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-match")
    {
        admin_match = value;
    }
    if(value_path == "request-id")
    {
        request_id = value;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name.append(value);
    }
}

Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "load-path";
}

Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/admin-load-path/load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::LoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "load-path"; yang_parent_name = "admin-load-path";
}

Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/admin-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "standby-load-path";
}

Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/admin-load-path/standby-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::StandbyLoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "standby-load-path"; yang_parent_name = "admin-load-path";
}

Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::~StandbyLoadPath()
{
}

bool Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/admin-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Active::Summary::AdminLoadPath::AdminLoadPath()
    :
    	request_id{YType::uint32, "request-id"}
{
    yang_name = "admin-load-path"; yang_parent_name = "summary";
}

Install::SoftwareInventory::Active::Summary::AdminLoadPath::~AdminLoadPath()
{
}

bool Install::SoftwareInventory::Active::Summary::AdminLoadPath::has_data() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.size(); index++)
    {
        if(standby_load_path[index]->has_data())
            return true;
    }
    return request_id.is_set;
}

bool Install::SoftwareInventory::Active::Summary::AdminLoadPath::has_operation() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.size(); index++)
    {
        if(standby_load_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(request_id.operation);
}

std::string Install::SoftwareInventory::Active::Summary::AdminLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Active::Summary::AdminLoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_id.is_set || is_set(request_id.operation)) leaf_name_data.push_back(request_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Active::Summary::AdminLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "load-path")
    {
        for(auto const & c : load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath>();
        c->parent = this;
        load_path.push_back(std::move(c));
        children[segment_path] = load_path.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "standby-load-path")
    {
        for(auto const & c : standby_load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath>();
        c->parent = this;
        standby_load_path.push_back(std::move(c));
        children[segment_path] = standby_load_path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Active::Summary::AdminLoadPath::get_children()
{
    for (auto const & c : load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : standby_load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Active::Summary::AdminLoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "request-id")
    {
        request_id = value;
    }
}

Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "load-path";
}

Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/sdr-load-path/load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::LoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "load-path"; yang_parent_name = "sdr-load-path";
}

Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/sdr-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "standby-load-path";
}

Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/sdr-load-path/standby-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::StandbyLoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "standby-load-path"; yang_parent_name = "sdr-load-path";
}

Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::~StandbyLoadPath()
{
}

bool Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/sdr-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Active::Summary::SdrLoadPath::SdrLoadPath()
    :
    	request_id{YType::uint32, "request-id"},
	 secure_domain_router_name{YType::str, "secure-domain-router-name"}
{
    yang_name = "sdr-load-path"; yang_parent_name = "summary";
}

Install::SoftwareInventory::Active::Summary::SdrLoadPath::~SdrLoadPath()
{
}

bool Install::SoftwareInventory::Active::Summary::SdrLoadPath::has_data() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.size(); index++)
    {
        if(standby_load_path[index]->has_data())
            return true;
    }
    return request_id.is_set
	|| secure_domain_router_name.is_set;
}

bool Install::SoftwareInventory::Active::Summary::SdrLoadPath::has_operation() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.size(); index++)
    {
        if(standby_load_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(request_id.operation)
	|| is_set(secure_domain_router_name.operation);
}

std::string Install::SoftwareInventory::Active::Summary::SdrLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Active::Summary::SdrLoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_id.is_set || is_set(request_id.operation)) leaf_name_data.push_back(request_id.get_name_leafdata());
    if (secure_domain_router_name.is_set || is_set(secure_domain_router_name.operation)) leaf_name_data.push_back(secure_domain_router_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Active::Summary::SdrLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "load-path")
    {
        for(auto const & c : load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath>();
        c->parent = this;
        load_path.push_back(std::move(c));
        children[segment_path] = load_path.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "standby-load-path")
    {
        for(auto const & c : standby_load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath>();
        c->parent = this;
        standby_load_path.push_back(std::move(c));
        children[segment_path] = standby_load_path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Active::Summary::SdrLoadPath::get_children()
{
    for (auto const & c : load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : standby_load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Active::Summary::SdrLoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "request-id")
    {
        request_id = value;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name = value;
    }
}

Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "load-path";
}

Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/location-load-path/load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::LoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "load-path"; yang_parent_name = "location-load-path";
}

Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/location-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "standby-load-path";
}

Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/location-load-path/standby-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::StandbyLoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "standby-load-path"; yang_parent_name = "location-load-path";
}

Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::~StandbyLoadPath()
{
}

bool Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/location-load-path/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Active::Summary::LocationLoadPath::LocationLoadPath()
    :
    	node_name{YType::str, "node-name"},
	 request_id{YType::uint32, "request-id"},
	 secure_domain_router_name{YType::str, "secure-domain-router-name"}
{
    yang_name = "location-load-path"; yang_parent_name = "summary";
}

Install::SoftwareInventory::Active::Summary::LocationLoadPath::~LocationLoadPath()
{
}

bool Install::SoftwareInventory::Active::Summary::LocationLoadPath::has_data() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.size(); index++)
    {
        if(standby_load_path[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| request_id.is_set
	|| secure_domain_router_name.is_set;
}

bool Install::SoftwareInventory::Active::Summary::LocationLoadPath::has_operation() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.size(); index++)
    {
        if(standby_load_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(node_name.operation)
	|| is_set(request_id.operation)
	|| is_set(secure_domain_router_name.operation);
}

std::string Install::SoftwareInventory::Active::Summary::LocationLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location-load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Active::Summary::LocationLoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (request_id.is_set || is_set(request_id.operation)) leaf_name_data.push_back(request_id.get_name_leafdata());
    if (secure_domain_router_name.is_set || is_set(secure_domain_router_name.operation)) leaf_name_data.push_back(secure_domain_router_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Active::Summary::LocationLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "load-path")
    {
        for(auto const & c : load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath>();
        c->parent = this;
        load_path.push_back(std::move(c));
        children[segment_path] = load_path.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "standby-load-path")
    {
        for(auto const & c : standby_load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath>();
        c->parent = this;
        standby_load_path.push_back(std::move(c));
        children[segment_path] = standby_load_path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Active::Summary::LocationLoadPath::get_children()
{
    for (auto const & c : load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : standby_load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Active::Summary::LocationLoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "request-id")
    {
        request_id = value;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name = value;
    }
}

Install::SoftwareInventory::Active::Summary::Summary()
    :
    admin_load_path(std::make_unique<Install::SoftwareInventory::Active::Summary::AdminLoadPath>())
	,default_load_path(std::make_unique<Install::SoftwareInventory::Active::Summary::DefaultLoadPath>())
{
    admin_load_path->parent = this;
    children["admin-load-path"] = admin_load_path.get();

    default_load_path->parent = this;
    children["default-load-path"] = default_load_path.get();

    yang_name = "summary"; yang_parent_name = "active";
}

Install::SoftwareInventory::Active::Summary::~Summary()
{
}

bool Install::SoftwareInventory::Active::Summary::has_data() const
{
    for (std::size_t index=0; index<location_load_path.size(); index++)
    {
        if(location_load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sdr_load_path.size(); index++)
    {
        if(sdr_load_path[index]->has_data())
            return true;
    }
    return (admin_load_path !=  nullptr && admin_load_path->has_data())
	|| (default_load_path !=  nullptr && default_load_path->has_data());
}

bool Install::SoftwareInventory::Active::Summary::has_operation() const
{
    for (std::size_t index=0; index<location_load_path.size(); index++)
    {
        if(location_load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sdr_load_path.size(); index++)
    {
        if(sdr_load_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (admin_load_path !=  nullptr && admin_load_path->has_operation())
	|| (default_load_path !=  nullptr && default_load_path->has_operation());
}

std::string Install::SoftwareInventory::Active::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Active::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Active::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "admin-load-path")
    {
        if(admin_load_path != nullptr)
        {
            children["admin-load-path"] = admin_load_path.get();
        }
        else
        {
            admin_load_path = std::make_unique<Install::SoftwareInventory::Active::Summary::AdminLoadPath>();
            admin_load_path->parent = this;
            children["admin-load-path"] = admin_load_path.get();
        }
        return children.at("admin-load-path");
    }

    if(child_yang_name == "default-load-path")
    {
        if(default_load_path != nullptr)
        {
            children["default-load-path"] = default_load_path.get();
        }
        else
        {
            default_load_path = std::make_unique<Install::SoftwareInventory::Active::Summary::DefaultLoadPath>();
            default_load_path->parent = this;
            children["default-load-path"] = default_load_path.get();
        }
        return children.at("default-load-path");
    }

    if(child_yang_name == "location-load-path")
    {
        for(auto const & c : location_load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Active::Summary::LocationLoadPath>();
        c->parent = this;
        location_load_path.push_back(std::move(c));
        children[segment_path] = location_load_path.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "sdr-load-path")
    {
        for(auto const & c : sdr_load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Active::Summary::SdrLoadPath>();
        c->parent = this;
        sdr_load_path.push_back(std::move(c));
        children[segment_path] = sdr_load_path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Active::Summary::get_children()
{
    if(children.find("admin-load-path") == children.end())
    {
        if(admin_load_path != nullptr)
        {
            children["admin-load-path"] = admin_load_path.get();
        }
    }

    if(children.find("default-load-path") == children.end())
    {
        if(default_load_path != nullptr)
        {
            children["default-load-path"] = default_load_path.get();
        }
    }

    for (auto const & c : location_load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : sdr_load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Active::Summary::set_value(const std::string & value_path, std::string value)
{
}

Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package::Package()
    :
    	device_name{YType::str, "device-name"},
	 name{YType::str, "name"}
{
    yang_name = "package"; yang_parent_name = "load-path";
}

Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| is_set(name.operation);
}

std::string Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package::get_children()
{
    return children;
}

void Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::LoadPath()
    :
    	build_information{YType::str, "build-information"},
	 version{YType::str, "version"}
    	,
    package(std::make_unique<Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package>())
{
    package->parent = this;
    children["package"] = package.get();

    yang_name = "load-path"; yang_parent_name = "inventory";
}

Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::has_operation() const
{
    return is_set(operation)
	|| is_set(build_information.operation)
	|| is_set(version.operation)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.operation)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
        else
        {
            package = std::make_unique<Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package>();
            package->parent = this;
            children["package"] = package.get();
        }
        return children.at("package");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::get_children()
{
    if(children.find("package") == children.end())
    {
        if(package != nullptr)
        {
            children["package"] = package.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "build-information")
    {
        build_information = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Install::SoftwareInventory::Active::Inventories::Inventory::Inventory()
    :
    	node_name{YType::str, "node-name"},
	 boot_image_name{YType::str, "boot-image-name"},
	 major{YType::uint32, "major"},
	 minor{YType::uint32, "minor"},
	 node_type{YType::uint64, "node-type"},
	 secure_domain_router_name{YType::str, "secure-domain-router-name"}
{
    yang_name = "inventory"; yang_parent_name = "inventories";
}

Install::SoftwareInventory::Active::Inventories::Inventory::~Inventory()
{
}

bool Install::SoftwareInventory::Active::Inventories::Inventory::has_data() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| boot_image_name.is_set
	|| major.is_set
	|| minor.is_set
	|| node_type.is_set
	|| secure_domain_router_name.is_set;
}

bool Install::SoftwareInventory::Active::Inventories::Inventory::has_operation() const
{
    for (std::size_t index=0; index<load_path.size(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(node_name.operation)
	|| is_set(boot_image_name.operation)
	|| is_set(major.operation)
	|| is_set(minor.operation)
	|| is_set(node_type.operation)
	|| is_set(secure_domain_router_name.operation);
}

std::string Install::SoftwareInventory::Active::Inventories::Inventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventory" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Active::Inventories::Inventory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/inventories/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (boot_image_name.is_set || is_set(boot_image_name.operation)) leaf_name_data.push_back(boot_image_name.get_name_leafdata());
    if (major.is_set || is_set(major.operation)) leaf_name_data.push_back(major.get_name_leafdata());
    if (minor.is_set || is_set(minor.operation)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (node_type.is_set || is_set(node_type.operation)) leaf_name_data.push_back(node_type.get_name_leafdata());
    if (secure_domain_router_name.is_set || is_set(secure_domain_router_name.operation)) leaf_name_data.push_back(secure_domain_router_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Active::Inventories::Inventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "load-path")
    {
        for(auto const & c : load_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath>();
        c->parent = this;
        load_path.push_back(std::move(c));
        children[segment_path] = load_path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Active::Inventories::Inventory::get_children()
{
    for (auto const & c : load_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Active::Inventories::Inventory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "boot-image-name")
    {
        boot_image_name = value;
    }
    if(value_path == "major")
    {
        major = value;
    }
    if(value_path == "minor")
    {
        minor = value;
    }
    if(value_path == "node-type")
    {
        node_type = value;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name = value;
    }
}

Install::SoftwareInventory::Active::Inventories::Inventories()
{
    yang_name = "inventories"; yang_parent_name = "active";
}

Install::SoftwareInventory::Active::Inventories::~Inventories()
{
}

bool Install::SoftwareInventory::Active::Inventories::has_data() const
{
    for (std::size_t index=0; index<inventory.size(); index++)
    {
        if(inventory[index]->has_data())
            return true;
    }
    return false;
}

bool Install::SoftwareInventory::Active::Inventories::has_operation() const
{
    for (std::size_t index=0; index<inventory.size(); index++)
    {
        if(inventory[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Install::SoftwareInventory::Active::Inventories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventories";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Active::Inventories::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Active::Inventories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inventory")
    {
        for(auto const & c : inventory)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::SoftwareInventory::Active::Inventories::Inventory>();
        c->parent = this;
        inventory.push_back(std::move(c));
        children[segment_path] = inventory.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Active::Inventories::get_children()
{
    for (auto const & c : inventory)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Active::Inventories::set_value(const std::string & value_path, std::string value)
{
}

Install::SoftwareInventory::Active::Active()
    :
    inventories(std::make_unique<Install::SoftwareInventory::Active::Inventories>())
	,summary(std::make_unique<Install::SoftwareInventory::Active::Summary>())
{
    inventories->parent = this;
    children["inventories"] = inventories.get();

    summary->parent = this;
    children["summary"] = summary.get();

    yang_name = "active"; yang_parent_name = "software-inventory";
}

Install::SoftwareInventory::Active::~Active()
{
}

bool Install::SoftwareInventory::Active::has_data() const
{
    return (inventories !=  nullptr && inventories->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Install::SoftwareInventory::Active::has_operation() const
{
    return is_set(operation)
	|| (inventories !=  nullptr && inventories->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Install::SoftwareInventory::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inventories")
    {
        if(inventories != nullptr)
        {
            children["inventories"] = inventories.get();
        }
        else
        {
            inventories = std::make_unique<Install::SoftwareInventory::Active::Inventories>();
            inventories->parent = this;
            children["inventories"] = inventories.get();
        }
        return children.at("inventories");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
        else
        {
            summary = std::make_unique<Install::SoftwareInventory::Active::Summary>();
            summary->parent = this;
            children["summary"] = summary.get();
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::Active::get_children()
{
    if(children.find("inventories") == children.end())
    {
        if(inventories != nullptr)
        {
            children["inventories"] = inventories.get();
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::Active::set_value(const std::string & value_path, std::string value)
{
}

Install::SoftwareInventory::SoftwareInventory()
    :
    active(std::make_unique<Install::SoftwareInventory::Active>())
	,committed(std::make_unique<Install::SoftwareInventory::Committed>())
	,inactive(std::make_unique<Install::SoftwareInventory::Inactive>())
	,requests(std::make_unique<Install::SoftwareInventory::Requests>())
{
    active->parent = this;
    children["active"] = active.get();

    committed->parent = this;
    children["committed"] = committed.get();

    inactive->parent = this;
    children["inactive"] = inactive.get();

    requests->parent = this;
    children["requests"] = requests.get();

    yang_name = "software-inventory"; yang_parent_name = "install";
}

Install::SoftwareInventory::~SoftwareInventory()
{
}

bool Install::SoftwareInventory::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (committed !=  nullptr && committed->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (requests !=  nullptr && requests->has_data());
}

bool Install::SoftwareInventory::has_operation() const
{
    return is_set(operation)
	|| (active !=  nullptr && active->has_operation())
	|| (committed !=  nullptr && committed->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (requests !=  nullptr && requests->has_operation());
}

std::string Install::SoftwareInventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "software-inventory";

    return path_buffer.str();

}

EntityPath Install::SoftwareInventory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::SoftwareInventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "active")
    {
        if(active != nullptr)
        {
            children["active"] = active.get();
        }
        else
        {
            active = std::make_unique<Install::SoftwareInventory::Active>();
            active->parent = this;
            children["active"] = active.get();
        }
        return children.at("active");
    }

    if(child_yang_name == "committed")
    {
        if(committed != nullptr)
        {
            children["committed"] = committed.get();
        }
        else
        {
            committed = std::make_unique<Install::SoftwareInventory::Committed>();
            committed->parent = this;
            children["committed"] = committed.get();
        }
        return children.at("committed");
    }

    if(child_yang_name == "inactive")
    {
        if(inactive != nullptr)
        {
            children["inactive"] = inactive.get();
        }
        else
        {
            inactive = std::make_unique<Install::SoftwareInventory::Inactive>();
            inactive->parent = this;
            children["inactive"] = inactive.get();
        }
        return children.at("inactive");
    }

    if(child_yang_name == "requests")
    {
        if(requests != nullptr)
        {
            children["requests"] = requests.get();
        }
        else
        {
            requests = std::make_unique<Install::SoftwareInventory::Requests>();
            requests->parent = this;
            children["requests"] = requests.get();
        }
        return children.at("requests");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::SoftwareInventory::get_children()
{
    if(children.find("active") == children.end())
    {
        if(active != nullptr)
        {
            children["active"] = active.get();
        }
    }

    if(children.find("committed") == children.end())
    {
        if(committed != nullptr)
        {
            children["committed"] = committed.get();
        }
    }

    if(children.find("inactive") == children.end())
    {
        if(inactive != nullptr)
        {
            children["inactive"] = inactive.get();
        }
    }

    if(children.find("requests") == children.end())
    {
        if(requests != nullptr)
        {
            children["requests"] = requests.get();
        }
    }

    return children;
}

void Install::SoftwareInventory::set_value(const std::string & value_path, std::string value)
{
}

Install::Issu::CardInventories::CardInventory::Summary::Summary()
    :
    	attempts{YType::uint32, "attempts"},
	 is_conforming_node{YType::enumeration, "is-conforming-node"},
	 is_node_upgraded{YType::boolean, "is-node-upgraded"},
	 node_current_state{YType::enumeration, "node-current-state"},
	 node_expected_state{YType::enumeration, "node-expected-state"},
	 node_failure_reason{YType::str, "node-failure-reason"},
	 node_name{YType::str, "node-name"},
	 node_role{YType::enumeration, "node-role"},
	 node_state{YType::enumeration, "node-state"},
	 node_type_issu{YType::str, "node-type-issu"},
	 node_type_pi{YType::enumeration, "node-type-pi"},
	 partner_node_name{YType::str, "partner-node-name"}
{
    yang_name = "summary"; yang_parent_name = "card-inventory";
}

Install::Issu::CardInventories::CardInventory::Summary::~Summary()
{
}

bool Install::Issu::CardInventories::CardInventory::Summary::has_data() const
{
    return attempts.is_set
	|| is_conforming_node.is_set
	|| is_node_upgraded.is_set
	|| node_current_state.is_set
	|| node_expected_state.is_set
	|| node_failure_reason.is_set
	|| node_name.is_set
	|| node_role.is_set
	|| node_state.is_set
	|| node_type_issu.is_set
	|| node_type_pi.is_set
	|| partner_node_name.is_set;
}

bool Install::Issu::CardInventories::CardInventory::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(attempts.operation)
	|| is_set(is_conforming_node.operation)
	|| is_set(is_node_upgraded.operation)
	|| is_set(node_current_state.operation)
	|| is_set(node_expected_state.operation)
	|| is_set(node_failure_reason.operation)
	|| is_set(node_name.operation)
	|| is_set(node_role.operation)
	|| is_set(node_state.operation)
	|| is_set(node_type_issu.operation)
	|| is_set(node_type_pi.operation)
	|| is_set(partner_node_name.operation);
}

std::string Install::Issu::CardInventories::CardInventory::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath Install::Issu::CardInventories::CardInventory::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attempts.is_set || is_set(attempts.operation)) leaf_name_data.push_back(attempts.get_name_leafdata());
    if (is_conforming_node.is_set || is_set(is_conforming_node.operation)) leaf_name_data.push_back(is_conforming_node.get_name_leafdata());
    if (is_node_upgraded.is_set || is_set(is_node_upgraded.operation)) leaf_name_data.push_back(is_node_upgraded.get_name_leafdata());
    if (node_current_state.is_set || is_set(node_current_state.operation)) leaf_name_data.push_back(node_current_state.get_name_leafdata());
    if (node_expected_state.is_set || is_set(node_expected_state.operation)) leaf_name_data.push_back(node_expected_state.get_name_leafdata());
    if (node_failure_reason.is_set || is_set(node_failure_reason.operation)) leaf_name_data.push_back(node_failure_reason.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (node_role.is_set || is_set(node_role.operation)) leaf_name_data.push_back(node_role.get_name_leafdata());
    if (node_state.is_set || is_set(node_state.operation)) leaf_name_data.push_back(node_state.get_name_leafdata());
    if (node_type_issu.is_set || is_set(node_type_issu.operation)) leaf_name_data.push_back(node_type_issu.get_name_leafdata());
    if (node_type_pi.is_set || is_set(node_type_pi.operation)) leaf_name_data.push_back(node_type_pi.get_name_leafdata());
    if (partner_node_name.is_set || is_set(partner_node_name.operation)) leaf_name_data.push_back(partner_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Issu::CardInventories::CardInventory::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Issu::CardInventories::CardInventory::Summary::get_children()
{
    return children;
}

void Install::Issu::CardInventories::CardInventory::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attempts")
    {
        attempts = value;
    }
    if(value_path == "is-conforming-node")
    {
        is_conforming_node = value;
    }
    if(value_path == "is-node-upgraded")
    {
        is_node_upgraded = value;
    }
    if(value_path == "node-current-state")
    {
        node_current_state = value;
    }
    if(value_path == "node-expected-state")
    {
        node_expected_state = value;
    }
    if(value_path == "node-failure-reason")
    {
        node_failure_reason = value;
    }
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "node-role")
    {
        node_role = value;
    }
    if(value_path == "node-state")
    {
        node_state = value;
    }
    if(value_path == "node-type-issu")
    {
        node_type_issu = value;
    }
    if(value_path == "node-type-pi")
    {
        node_type_pi = value;
    }
    if(value_path == "partner-node-name")
    {
        partner_node_name = value;
    }
}

Install::Issu::CardInventories::CardInventory::CardInventory()
    :
    	card_type_id{YType::enumeration, "card-type-id"}
{
    yang_name = "card-inventory"; yang_parent_name = "card-inventories";
}

Install::Issu::CardInventories::CardInventory::~CardInventory()
{
}

bool Install::Issu::CardInventories::CardInventory::has_data() const
{
    for (std::size_t index=0; index<summary.size(); index++)
    {
        if(summary[index]->has_data())
            return true;
    }
    return card_type_id.is_set;
}

bool Install::Issu::CardInventories::CardInventory::has_operation() const
{
    for (std::size_t index=0; index<summary.size(); index++)
    {
        if(summary[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(card_type_id.operation);
}

std::string Install::Issu::CardInventories::CardInventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-inventory" <<"[card-type-id='" <<card_type_id.get() <<"']";

    return path_buffer.str();

}

EntityPath Install::Issu::CardInventories::CardInventory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/issu/card-inventories/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_type_id.is_set || is_set(card_type_id.operation)) leaf_name_data.push_back(card_type_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Issu::CardInventories::CardInventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "summary")
    {
        for(auto const & c : summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::Issu::CardInventories::CardInventory::Summary>();
        c->parent = this;
        summary.push_back(std::move(c));
        children[segment_path] = summary.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Issu::CardInventories::CardInventory::get_children()
{
    for (auto const & c : summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::Issu::CardInventories::CardInventory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-type-id")
    {
        card_type_id = value;
    }
}

Install::Issu::CardInventories::CardInventories()
{
    yang_name = "card-inventories"; yang_parent_name = "issu";
}

Install::Issu::CardInventories::~CardInventories()
{
}

bool Install::Issu::CardInventories::has_data() const
{
    for (std::size_t index=0; index<card_inventory.size(); index++)
    {
        if(card_inventory[index]->has_data())
            return true;
    }
    return false;
}

bool Install::Issu::CardInventories::has_operation() const
{
    for (std::size_t index=0; index<card_inventory.size(); index++)
    {
        if(card_inventory[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Install::Issu::CardInventories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-inventories";

    return path_buffer.str();

}

EntityPath Install::Issu::CardInventories::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/issu/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Issu::CardInventories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "card-inventory")
    {
        for(auto const & c : card_inventory)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::Issu::CardInventories::CardInventory>();
        c->parent = this;
        card_inventory.push_back(std::move(c));
        children[segment_path] = card_inventory.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Issu::CardInventories::get_children()
{
    for (auto const & c : card_inventory)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::Issu::CardInventories::set_value(const std::string & value_path, std::string value)
{
}

Install::Issu::Stage::NodeInProgress::NodeInProgress()
    :
    	node{YType::str, "node"}
{
    yang_name = "node-in-progress"; yang_parent_name = "stage";
}

Install::Issu::Stage::NodeInProgress::~NodeInProgress()
{
}

bool Install::Issu::Stage::NodeInProgress::has_data() const
{
    for (auto const & leaf : node.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Install::Issu::Stage::NodeInProgress::has_operation() const
{
    for (auto const & leaf : node.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(node.operation);
}

std::string Install::Issu::Stage::NodeInProgress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-in-progress";

    return path_buffer.str();

}

EntityPath Install::Issu::Stage::NodeInProgress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/issu/stage/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto node_name_datas = node.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), node_name_datas.begin(), node_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Issu::Stage::NodeInProgress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Issu::Stage::NodeInProgress::get_children()
{
    return children;
}

void Install::Issu::Stage::NodeInProgress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node")
    {
        node.append(value);
    }
}

Install::Issu::Stage::NodesInLoad::NodesInLoad()
    :
    	node{YType::str, "node"}
{
    yang_name = "nodes-in-load"; yang_parent_name = "stage";
}

Install::Issu::Stage::NodesInLoad::~NodesInLoad()
{
}

bool Install::Issu::Stage::NodesInLoad::has_data() const
{
    for (auto const & leaf : node.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Install::Issu::Stage::NodesInLoad::has_operation() const
{
    for (auto const & leaf : node.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(node.operation);
}

std::string Install::Issu::Stage::NodesInLoad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes-in-load";

    return path_buffer.str();

}

EntityPath Install::Issu::Stage::NodesInLoad::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/issu/stage/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto node_name_datas = node.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), node_name_datas.begin(), node_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Issu::Stage::NodesInLoad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Issu::Stage::NodesInLoad::get_children()
{
    return children;
}

void Install::Issu::Stage::NodesInLoad::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node")
    {
        node.append(value);
    }
}

Install::Issu::Stage::NodesInRun::NodesInRun()
    :
    	node{YType::str, "node"}
{
    yang_name = "nodes-in-run"; yang_parent_name = "stage";
}

Install::Issu::Stage::NodesInRun::~NodesInRun()
{
}

bool Install::Issu::Stage::NodesInRun::has_data() const
{
    for (auto const & leaf : node.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Install::Issu::Stage::NodesInRun::has_operation() const
{
    for (auto const & leaf : node.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(node.operation);
}

std::string Install::Issu::Stage::NodesInRun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes-in-run";

    return path_buffer.str();

}

EntityPath Install::Issu::Stage::NodesInRun::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/issu/stage/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto node_name_datas = node.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), node_name_datas.begin(), node_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Issu::Stage::NodesInRun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Issu::Stage::NodesInRun::get_children()
{
    return children;
}

void Install::Issu::Stage::NodesInRun::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node")
    {
        node.append(value);
    }
}

Install::Issu::Stage::NcNodes::NcNodes()
    :
    	node{YType::str, "node"}
{
    yang_name = "nc-nodes"; yang_parent_name = "stage";
}

Install::Issu::Stage::NcNodes::~NcNodes()
{
}

bool Install::Issu::Stage::NcNodes::has_data() const
{
    for (auto const & leaf : node.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Install::Issu::Stage::NcNodes::has_operation() const
{
    for (auto const & leaf : node.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(node.operation);
}

std::string Install::Issu::Stage::NcNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nc-nodes";

    return path_buffer.str();

}

EntityPath Install::Issu::Stage::NcNodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/issu/stage/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto node_name_datas = node.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), node_name_datas.begin(), node_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Issu::Stage::NcNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Issu::Stage::NcNodes::get_children()
{
    return children;
}

void Install::Issu::Stage::NcNodes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node")
    {
        node.append(value);
    }
}

Install::Issu::Stage::Stage()
    :
    	is_issu_aborted{YType::boolean, "is-issu-aborted"},
	 is_issu_aborted_by_ism{YType::boolean, "is-issu-aborted-by-ism"},
	 issu_manager_fsm_state{YType::enumeration, "issu-manager-fsm-state"},
	 issu_op_id{YType::uint32, "issu-op-id"},
	 issu_state{YType::str, "issu-state"},
	 num_nodes_in_progress{YType::uint32, "num-nodes-in-progress"},
	 num_of_nodes_in_load{YType::uint32, "num-of-nodes-in-load"},
	 num_of_nodes_in_run{YType::uint32, "num-of-nodes-in-run"},
	 numof_nc_nodes{YType::uint32, "numof-nc-nodes"},
	 participating_node_all{YType::uint32, "participating-node-all"},
	 percentage{YType::uint32, "percentage"}
    	,
    nc_nodes(std::make_unique<Install::Issu::Stage::NcNodes>())
	,node_in_progress(std::make_unique<Install::Issu::Stage::NodeInProgress>())
	,nodes_in_load(std::make_unique<Install::Issu::Stage::NodesInLoad>())
	,nodes_in_run(std::make_unique<Install::Issu::Stage::NodesInRun>())
{
    nc_nodes->parent = this;
    children["nc-nodes"] = nc_nodes.get();

    node_in_progress->parent = this;
    children["node-in-progress"] = node_in_progress.get();

    nodes_in_load->parent = this;
    children["nodes-in-load"] = nodes_in_load.get();

    nodes_in_run->parent = this;
    children["nodes-in-run"] = nodes_in_run.get();

    yang_name = "stage"; yang_parent_name = "issu";
}

Install::Issu::Stage::~Stage()
{
}

bool Install::Issu::Stage::has_data() const
{
    return is_issu_aborted.is_set
	|| is_issu_aborted_by_ism.is_set
	|| issu_manager_fsm_state.is_set
	|| issu_op_id.is_set
	|| issu_state.is_set
	|| num_nodes_in_progress.is_set
	|| num_of_nodes_in_load.is_set
	|| num_of_nodes_in_run.is_set
	|| numof_nc_nodes.is_set
	|| participating_node_all.is_set
	|| percentage.is_set
	|| (nc_nodes !=  nullptr && nc_nodes->has_data())
	|| (node_in_progress !=  nullptr && node_in_progress->has_data())
	|| (nodes_in_load !=  nullptr && nodes_in_load->has_data())
	|| (nodes_in_run !=  nullptr && nodes_in_run->has_data());
}

bool Install::Issu::Stage::has_operation() const
{
    return is_set(operation)
	|| is_set(is_issu_aborted.operation)
	|| is_set(is_issu_aborted_by_ism.operation)
	|| is_set(issu_manager_fsm_state.operation)
	|| is_set(issu_op_id.operation)
	|| is_set(issu_state.operation)
	|| is_set(num_nodes_in_progress.operation)
	|| is_set(num_of_nodes_in_load.operation)
	|| is_set(num_of_nodes_in_run.operation)
	|| is_set(numof_nc_nodes.operation)
	|| is_set(participating_node_all.operation)
	|| is_set(percentage.operation)
	|| (nc_nodes !=  nullptr && nc_nodes->has_operation())
	|| (node_in_progress !=  nullptr && node_in_progress->has_operation())
	|| (nodes_in_load !=  nullptr && nodes_in_load->has_operation())
	|| (nodes_in_run !=  nullptr && nodes_in_run->has_operation());
}

std::string Install::Issu::Stage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stage";

    return path_buffer.str();

}

EntityPath Install::Issu::Stage::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/issu/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_issu_aborted.is_set || is_set(is_issu_aborted.operation)) leaf_name_data.push_back(is_issu_aborted.get_name_leafdata());
    if (is_issu_aborted_by_ism.is_set || is_set(is_issu_aborted_by_ism.operation)) leaf_name_data.push_back(is_issu_aborted_by_ism.get_name_leafdata());
    if (issu_manager_fsm_state.is_set || is_set(issu_manager_fsm_state.operation)) leaf_name_data.push_back(issu_manager_fsm_state.get_name_leafdata());
    if (issu_op_id.is_set || is_set(issu_op_id.operation)) leaf_name_data.push_back(issu_op_id.get_name_leafdata());
    if (issu_state.is_set || is_set(issu_state.operation)) leaf_name_data.push_back(issu_state.get_name_leafdata());
    if (num_nodes_in_progress.is_set || is_set(num_nodes_in_progress.operation)) leaf_name_data.push_back(num_nodes_in_progress.get_name_leafdata());
    if (num_of_nodes_in_load.is_set || is_set(num_of_nodes_in_load.operation)) leaf_name_data.push_back(num_of_nodes_in_load.get_name_leafdata());
    if (num_of_nodes_in_run.is_set || is_set(num_of_nodes_in_run.operation)) leaf_name_data.push_back(num_of_nodes_in_run.get_name_leafdata());
    if (numof_nc_nodes.is_set || is_set(numof_nc_nodes.operation)) leaf_name_data.push_back(numof_nc_nodes.get_name_leafdata());
    if (participating_node_all.is_set || is_set(participating_node_all.operation)) leaf_name_data.push_back(participating_node_all.get_name_leafdata());
    if (percentage.is_set || is_set(percentage.operation)) leaf_name_data.push_back(percentage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Issu::Stage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nc-nodes")
    {
        if(nc_nodes != nullptr)
        {
            children["nc-nodes"] = nc_nodes.get();
        }
        else
        {
            nc_nodes = std::make_unique<Install::Issu::Stage::NcNodes>();
            nc_nodes->parent = this;
            children["nc-nodes"] = nc_nodes.get();
        }
        return children.at("nc-nodes");
    }

    if(child_yang_name == "node-in-progress")
    {
        if(node_in_progress != nullptr)
        {
            children["node-in-progress"] = node_in_progress.get();
        }
        else
        {
            node_in_progress = std::make_unique<Install::Issu::Stage::NodeInProgress>();
            node_in_progress->parent = this;
            children["node-in-progress"] = node_in_progress.get();
        }
        return children.at("node-in-progress");
    }

    if(child_yang_name == "nodes-in-load")
    {
        if(nodes_in_load != nullptr)
        {
            children["nodes-in-load"] = nodes_in_load.get();
        }
        else
        {
            nodes_in_load = std::make_unique<Install::Issu::Stage::NodesInLoad>();
            nodes_in_load->parent = this;
            children["nodes-in-load"] = nodes_in_load.get();
        }
        return children.at("nodes-in-load");
    }

    if(child_yang_name == "nodes-in-run")
    {
        if(nodes_in_run != nullptr)
        {
            children["nodes-in-run"] = nodes_in_run.get();
        }
        else
        {
            nodes_in_run = std::make_unique<Install::Issu::Stage::NodesInRun>();
            nodes_in_run->parent = this;
            children["nodes-in-run"] = nodes_in_run.get();
        }
        return children.at("nodes-in-run");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Issu::Stage::get_children()
{
    if(children.find("nc-nodes") == children.end())
    {
        if(nc_nodes != nullptr)
        {
            children["nc-nodes"] = nc_nodes.get();
        }
    }

    if(children.find("node-in-progress") == children.end())
    {
        if(node_in_progress != nullptr)
        {
            children["node-in-progress"] = node_in_progress.get();
        }
    }

    if(children.find("nodes-in-load") == children.end())
    {
        if(nodes_in_load != nullptr)
        {
            children["nodes-in-load"] = nodes_in_load.get();
        }
    }

    if(children.find("nodes-in-run") == children.end())
    {
        if(nodes_in_run != nullptr)
        {
            children["nodes-in-run"] = nodes_in_run.get();
        }
    }

    return children;
}

void Install::Issu::Stage::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-issu-aborted")
    {
        is_issu_aborted = value;
    }
    if(value_path == "is-issu-aborted-by-ism")
    {
        is_issu_aborted_by_ism = value;
    }
    if(value_path == "issu-manager-fsm-state")
    {
        issu_manager_fsm_state = value;
    }
    if(value_path == "issu-op-id")
    {
        issu_op_id = value;
    }
    if(value_path == "issu-state")
    {
        issu_state = value;
    }
    if(value_path == "num-nodes-in-progress")
    {
        num_nodes_in_progress = value;
    }
    if(value_path == "num-of-nodes-in-load")
    {
        num_of_nodes_in_load = value;
    }
    if(value_path == "num-of-nodes-in-run")
    {
        num_of_nodes_in_run = value;
    }
    if(value_path == "numof-nc-nodes")
    {
        numof_nc_nodes = value;
    }
    if(value_path == "participating-node-all")
    {
        participating_node_all = value;
    }
    if(value_path == "percentage")
    {
        percentage = value;
    }
}

Install::Issu::Issu()
    :
    card_inventories(std::make_unique<Install::Issu::CardInventories>())
	,stage(std::make_unique<Install::Issu::Stage>())
{
    card_inventories->parent = this;
    children["card-inventories"] = card_inventories.get();

    stage->parent = this;
    children["stage"] = stage.get();

    yang_name = "issu"; yang_parent_name = "install";
}

Install::Issu::~Issu()
{
}

bool Install::Issu::has_data() const
{
    return (card_inventories !=  nullptr && card_inventories->has_data())
	|| (stage !=  nullptr && stage->has_data());
}

bool Install::Issu::has_operation() const
{
    return is_set(operation)
	|| (card_inventories !=  nullptr && card_inventories->has_operation())
	|| (stage !=  nullptr && stage->has_operation());
}

std::string Install::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";

    return path_buffer.str();

}

EntityPath Install::Issu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "card-inventories")
    {
        if(card_inventories != nullptr)
        {
            children["card-inventories"] = card_inventories.get();
        }
        else
        {
            card_inventories = std::make_unique<Install::Issu::CardInventories>();
            card_inventories->parent = this;
            children["card-inventories"] = card_inventories.get();
        }
        return children.at("card-inventories");
    }

    if(child_yang_name == "stage")
    {
        if(stage != nullptr)
        {
            children["stage"] = stage.get();
        }
        else
        {
            stage = std::make_unique<Install::Issu::Stage>();
            stage->parent = this;
            children["stage"] = stage.get();
        }
        return children.at("stage");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Issu::get_children()
{
    if(children.find("card-inventories") == children.end())
    {
        if(card_inventories != nullptr)
        {
            children["card-inventories"] = card_inventories.get();
        }
    }

    if(children.find("stage") == children.end())
    {
        if(stage != nullptr)
        {
            children["stage"] = stage.get();
        }
    }

    return children;
}

void Install::Issu::set_value(const std::string & value_path, std::string value)
{
}

Install::BootImage::BootImage()
    :
    	system_image_file{YType::str, "system-image-file"}
{
    yang_name = "boot-image"; yang_parent_name = "install";
}

Install::BootImage::~BootImage()
{
}

bool Install::BootImage::has_data() const
{
    return system_image_file.is_set;
}

bool Install::BootImage::has_operation() const
{
    return is_set(operation)
	|| is_set(system_image_file.operation);
}

std::string Install::BootImage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot-image";

    return path_buffer.str();

}

EntityPath Install::BootImage::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_image_file.is_set || is_set(system_image_file.operation)) leaf_name_data.push_back(system_image_file.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::BootImage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::BootImage::get_children()
{
    return children;
}

void Install::BootImage::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-image-file")
    {
        system_image_file = value;
    }
}

Install::Logs::Log::Header::LogContents::V3::Scope::Scope()
    :
    	admin_read{YType::boolean, "admin-read"},
	 affected_sd_rs{YType::uint32, "affected-sd-rs"}
{
    yang_name = "scope"; yang_parent_name = "v3";
}

Install::Logs::Log::Header::LogContents::V3::Scope::~Scope()
{
}

bool Install::Logs::Log::Header::LogContents::V3::Scope::has_data() const
{
    return admin_read.is_set
	|| affected_sd_rs.is_set;
}

bool Install::Logs::Log::Header::LogContents::V3::Scope::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_read.operation)
	|| is_set(affected_sd_rs.operation);
}

std::string Install::Logs::Log::Header::LogContents::V3::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";

    return path_buffer.str();

}

EntityPath Install::Logs::Log::Header::LogContents::V3::Scope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_read.is_set || is_set(admin_read.operation)) leaf_name_data.push_back(admin_read.get_name_leafdata());
    if (affected_sd_rs.is_set || is_set(affected_sd_rs.operation)) leaf_name_data.push_back(affected_sd_rs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Logs::Log::Header::LogContents::V3::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Logs::Log::Header::LogContents::V3::Scope::get_children()
{
    return children;
}

void Install::Logs::Log::Header::LogContents::V3::Scope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-read")
    {
        admin_read = value;
    }
    if(value_path == "affected-sd-rs")
    {
        affected_sd_rs = value;
    }
}

Install::Logs::Log::Header::LogContents::V3::V3()
    :
    	category{YType::enumeration, "category"},
	 message{YType::str, "message"}
    	,
    scope(std::make_unique<Install::Logs::Log::Header::LogContents::V3::Scope>())
{
    scope->parent = this;
    children["scope"] = scope.get();

    yang_name = "v3"; yang_parent_name = "log-contents";
}

Install::Logs::Log::Header::LogContents::V3::~V3()
{
}

bool Install::Logs::Log::Header::LogContents::V3::has_data() const
{
    return category.is_set
	|| message.is_set
	|| (scope !=  nullptr && scope->has_data());
}

bool Install::Logs::Log::Header::LogContents::V3::has_operation() const
{
    return is_set(operation)
	|| is_set(category.operation)
	|| is_set(message.operation)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Install::Logs::Log::Header::LogContents::V3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v3";

    return path_buffer.str();

}

EntityPath Install::Logs::Log::Header::LogContents::V3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.operation)) leaf_name_data.push_back(category.get_name_leafdata());
    if (message.is_set || is_set(message.operation)) leaf_name_data.push_back(message.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Logs::Log::Header::LogContents::V3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "scope")
    {
        if(scope != nullptr)
        {
            children["scope"] = scope.get();
        }
        else
        {
            scope = std::make_unique<Install::Logs::Log::Header::LogContents::V3::Scope>();
            scope->parent = this;
            children["scope"] = scope.get();
        }
        return children.at("scope");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Logs::Log::Header::LogContents::V3::get_children()
{
    if(children.find("scope") == children.end())
    {
        if(scope != nullptr)
        {
            children["scope"] = scope.get();
        }
    }

    return children;
}

void Install::Logs::Log::Header::LogContents::V3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "category")
    {
        category = value;
    }
    if(value_path == "message")
    {
        message = value;
    }
}

Install::Logs::Log::Header::LogContents::LogContents()
    :
    	version{YType::uint32, "version"}
    	,
    v3(std::make_unique<Install::Logs::Log::Header::LogContents::V3>())
{
    v3->parent = this;
    children["v3"] = v3.get();

    yang_name = "log-contents"; yang_parent_name = "header";
}

Install::Logs::Log::Header::LogContents::~LogContents()
{
}

bool Install::Logs::Log::Header::LogContents::has_data() const
{
    return version.is_set
	|| (v3 !=  nullptr && v3->has_data());
}

bool Install::Logs::Log::Header::LogContents::has_operation() const
{
    return is_set(operation)
	|| is_set(version.operation)
	|| (v3 !=  nullptr && v3->has_operation());
}

std::string Install::Logs::Log::Header::LogContents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-contents";

    return path_buffer.str();

}

EntityPath Install::Logs::Log::Header::LogContents::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Logs::Log::Header::LogContents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "v3")
    {
        if(v3 != nullptr)
        {
            children["v3"] = v3.get();
        }
        else
        {
            v3 = std::make_unique<Install::Logs::Log::Header::LogContents::V3>();
            v3->parent = this;
            children["v3"] = v3.get();
        }
        return children.at("v3");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Logs::Log::Header::LogContents::get_children()
{
    if(children.find("v3") == children.end())
    {
        if(v3 != nullptr)
        {
            children["v3"] = v3.get();
        }
    }

    return children;
}

void Install::Logs::Log::Header::LogContents::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "version")
    {
        version = value;
    }
}

Install::Logs::Log::Header::Header()
    :
    log_contents(std::make_unique<Install::Logs::Log::Header::LogContents>())
{
    log_contents->parent = this;
    children["log-contents"] = log_contents.get();

    yang_name = "header"; yang_parent_name = "log";
}

Install::Logs::Log::Header::~Header()
{
}

bool Install::Logs::Log::Header::has_data() const
{
    return (log_contents !=  nullptr && log_contents->has_data());
}

bool Install::Logs::Log::Header::has_operation() const
{
    return is_set(operation)
	|| (log_contents !=  nullptr && log_contents->has_operation());
}

std::string Install::Logs::Log::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";

    return path_buffer.str();

}

EntityPath Install::Logs::Log::Header::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Logs::Log::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "log-contents")
    {
        if(log_contents != nullptr)
        {
            children["log-contents"] = log_contents.get();
        }
        else
        {
            log_contents = std::make_unique<Install::Logs::Log::Header::LogContents>();
            log_contents->parent = this;
            children["log-contents"] = log_contents.get();
        }
        return children.at("log-contents");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Logs::Log::Header::get_children()
{
    if(children.find("log-contents") == children.end())
    {
        if(log_contents != nullptr)
        {
            children["log-contents"] = log_contents.get();
        }
    }

    return children;
}

void Install::Logs::Log::Header::set_value(const std::string & value_path, std::string value)
{
}

Install::Logs::Log::Summary::LogContents::V3::Scope::Scope()
    :
    	admin_read{YType::boolean, "admin-read"},
	 affected_sd_rs{YType::uint32, "affected-sd-rs"}
{
    yang_name = "scope"; yang_parent_name = "v3";
}

Install::Logs::Log::Summary::LogContents::V3::Scope::~Scope()
{
}

bool Install::Logs::Log::Summary::LogContents::V3::Scope::has_data() const
{
    return admin_read.is_set
	|| affected_sd_rs.is_set;
}

bool Install::Logs::Log::Summary::LogContents::V3::Scope::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_read.operation)
	|| is_set(affected_sd_rs.operation);
}

std::string Install::Logs::Log::Summary::LogContents::V3::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";

    return path_buffer.str();

}

EntityPath Install::Logs::Log::Summary::LogContents::V3::Scope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_read.is_set || is_set(admin_read.operation)) leaf_name_data.push_back(admin_read.get_name_leafdata());
    if (affected_sd_rs.is_set || is_set(affected_sd_rs.operation)) leaf_name_data.push_back(affected_sd_rs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Logs::Log::Summary::LogContents::V3::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Logs::Log::Summary::LogContents::V3::Scope::get_children()
{
    return children;
}

void Install::Logs::Log::Summary::LogContents::V3::Scope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-read")
    {
        admin_read = value;
    }
    if(value_path == "affected-sd-rs")
    {
        affected_sd_rs = value;
    }
}

Install::Logs::Log::Summary::LogContents::V3::V3()
    :
    	category{YType::enumeration, "category"},
	 message{YType::str, "message"}
    	,
    scope(std::make_unique<Install::Logs::Log::Summary::LogContents::V3::Scope>())
{
    scope->parent = this;
    children["scope"] = scope.get();

    yang_name = "v3"; yang_parent_name = "log-contents";
}

Install::Logs::Log::Summary::LogContents::V3::~V3()
{
}

bool Install::Logs::Log::Summary::LogContents::V3::has_data() const
{
    return category.is_set
	|| message.is_set
	|| (scope !=  nullptr && scope->has_data());
}

bool Install::Logs::Log::Summary::LogContents::V3::has_operation() const
{
    return is_set(operation)
	|| is_set(category.operation)
	|| is_set(message.operation)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Install::Logs::Log::Summary::LogContents::V3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v3";

    return path_buffer.str();

}

EntityPath Install::Logs::Log::Summary::LogContents::V3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.operation)) leaf_name_data.push_back(category.get_name_leafdata());
    if (message.is_set || is_set(message.operation)) leaf_name_data.push_back(message.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Logs::Log::Summary::LogContents::V3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "scope")
    {
        if(scope != nullptr)
        {
            children["scope"] = scope.get();
        }
        else
        {
            scope = std::make_unique<Install::Logs::Log::Summary::LogContents::V3::Scope>();
            scope->parent = this;
            children["scope"] = scope.get();
        }
        return children.at("scope");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Logs::Log::Summary::LogContents::V3::get_children()
{
    if(children.find("scope") == children.end())
    {
        if(scope != nullptr)
        {
            children["scope"] = scope.get();
        }
    }

    return children;
}

void Install::Logs::Log::Summary::LogContents::V3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "category")
    {
        category = value;
    }
    if(value_path == "message")
    {
        message = value;
    }
}

Install::Logs::Log::Summary::LogContents::LogContents()
    :
    	version{YType::uint32, "version"}
    	,
    v3(std::make_unique<Install::Logs::Log::Summary::LogContents::V3>())
{
    v3->parent = this;
    children["v3"] = v3.get();

    yang_name = "log-contents"; yang_parent_name = "summary";
}

Install::Logs::Log::Summary::LogContents::~LogContents()
{
}

bool Install::Logs::Log::Summary::LogContents::has_data() const
{
    return version.is_set
	|| (v3 !=  nullptr && v3->has_data());
}

bool Install::Logs::Log::Summary::LogContents::has_operation() const
{
    return is_set(operation)
	|| is_set(version.operation)
	|| (v3 !=  nullptr && v3->has_operation());
}

std::string Install::Logs::Log::Summary::LogContents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-contents";

    return path_buffer.str();

}

EntityPath Install::Logs::Log::Summary::LogContents::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Logs::Log::Summary::LogContents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "v3")
    {
        if(v3 != nullptr)
        {
            children["v3"] = v3.get();
        }
        else
        {
            v3 = std::make_unique<Install::Logs::Log::Summary::LogContents::V3>();
            v3->parent = this;
            children["v3"] = v3.get();
        }
        return children.at("v3");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Logs::Log::Summary::LogContents::get_children()
{
    if(children.find("v3") == children.end())
    {
        if(v3 != nullptr)
        {
            children["v3"] = v3.get();
        }
    }

    return children;
}

void Install::Logs::Log::Summary::LogContents::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "version")
    {
        version = value;
    }
}

Install::Logs::Log::Summary::Summary()
    :
    log_contents(std::make_unique<Install::Logs::Log::Summary::LogContents>())
{
    log_contents->parent = this;
    children["log-contents"] = log_contents.get();

    yang_name = "summary"; yang_parent_name = "log";
}

Install::Logs::Log::Summary::~Summary()
{
}

bool Install::Logs::Log::Summary::has_data() const
{
    return (log_contents !=  nullptr && log_contents->has_data());
}

bool Install::Logs::Log::Summary::has_operation() const
{
    return is_set(operation)
	|| (log_contents !=  nullptr && log_contents->has_operation());
}

std::string Install::Logs::Log::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath Install::Logs::Log::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Logs::Log::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "log-contents")
    {
        if(log_contents != nullptr)
        {
            children["log-contents"] = log_contents.get();
        }
        else
        {
            log_contents = std::make_unique<Install::Logs::Log::Summary::LogContents>();
            log_contents->parent = this;
            children["log-contents"] = log_contents.get();
        }
        return children.at("log-contents");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Logs::Log::Summary::get_children()
{
    if(children.find("log-contents") == children.end())
    {
        if(log_contents != nullptr)
        {
            children["log-contents"] = log_contents.get();
        }
    }

    return children;
}

void Install::Logs::Log::Summary::set_value(const std::string & value_path, std::string value)
{
}

Install::Logs::Log::Message::LogContents::V3::Scope::Scope()
    :
    	admin_read{YType::boolean, "admin-read"},
	 affected_sd_rs{YType::uint32, "affected-sd-rs"}
{
    yang_name = "scope"; yang_parent_name = "v3";
}

Install::Logs::Log::Message::LogContents::V3::Scope::~Scope()
{
}

bool Install::Logs::Log::Message::LogContents::V3::Scope::has_data() const
{
    return admin_read.is_set
	|| affected_sd_rs.is_set;
}

bool Install::Logs::Log::Message::LogContents::V3::Scope::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_read.operation)
	|| is_set(affected_sd_rs.operation);
}

std::string Install::Logs::Log::Message::LogContents::V3::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";

    return path_buffer.str();

}

EntityPath Install::Logs::Log::Message::LogContents::V3::Scope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_read.is_set || is_set(admin_read.operation)) leaf_name_data.push_back(admin_read.get_name_leafdata());
    if (affected_sd_rs.is_set || is_set(affected_sd_rs.operation)) leaf_name_data.push_back(affected_sd_rs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Logs::Log::Message::LogContents::V3::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Logs::Log::Message::LogContents::V3::Scope::get_children()
{
    return children;
}

void Install::Logs::Log::Message::LogContents::V3::Scope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-read")
    {
        admin_read = value;
    }
    if(value_path == "affected-sd-rs")
    {
        affected_sd_rs = value;
    }
}

Install::Logs::Log::Message::LogContents::V3::V3()
    :
    	category{YType::enumeration, "category"},
	 message{YType::str, "message"}
    	,
    scope(std::make_unique<Install::Logs::Log::Message::LogContents::V3::Scope>())
{
    scope->parent = this;
    children["scope"] = scope.get();

    yang_name = "v3"; yang_parent_name = "log-contents";
}

Install::Logs::Log::Message::LogContents::V3::~V3()
{
}

bool Install::Logs::Log::Message::LogContents::V3::has_data() const
{
    return category.is_set
	|| message.is_set
	|| (scope !=  nullptr && scope->has_data());
}

bool Install::Logs::Log::Message::LogContents::V3::has_operation() const
{
    return is_set(operation)
	|| is_set(category.operation)
	|| is_set(message.operation)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Install::Logs::Log::Message::LogContents::V3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v3";

    return path_buffer.str();

}

EntityPath Install::Logs::Log::Message::LogContents::V3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.operation)) leaf_name_data.push_back(category.get_name_leafdata());
    if (message.is_set || is_set(message.operation)) leaf_name_data.push_back(message.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Logs::Log::Message::LogContents::V3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "scope")
    {
        if(scope != nullptr)
        {
            children["scope"] = scope.get();
        }
        else
        {
            scope = std::make_unique<Install::Logs::Log::Message::LogContents::V3::Scope>();
            scope->parent = this;
            children["scope"] = scope.get();
        }
        return children.at("scope");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Logs::Log::Message::LogContents::V3::get_children()
{
    if(children.find("scope") == children.end())
    {
        if(scope != nullptr)
        {
            children["scope"] = scope.get();
        }
    }

    return children;
}

void Install::Logs::Log::Message::LogContents::V3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "category")
    {
        category = value;
    }
    if(value_path == "message")
    {
        message = value;
    }
}

Install::Logs::Log::Message::LogContents::LogContents()
    :
    	version{YType::uint32, "version"}
    	,
    v3(std::make_unique<Install::Logs::Log::Message::LogContents::V3>())
{
    v3->parent = this;
    children["v3"] = v3.get();

    yang_name = "log-contents"; yang_parent_name = "message";
}

Install::Logs::Log::Message::LogContents::~LogContents()
{
}

bool Install::Logs::Log::Message::LogContents::has_data() const
{
    return version.is_set
	|| (v3 !=  nullptr && v3->has_data());
}

bool Install::Logs::Log::Message::LogContents::has_operation() const
{
    return is_set(operation)
	|| is_set(version.operation)
	|| (v3 !=  nullptr && v3->has_operation());
}

std::string Install::Logs::Log::Message::LogContents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-contents";

    return path_buffer.str();

}

EntityPath Install::Logs::Log::Message::LogContents::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Logs::Log::Message::LogContents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "v3")
    {
        if(v3 != nullptr)
        {
            children["v3"] = v3.get();
        }
        else
        {
            v3 = std::make_unique<Install::Logs::Log::Message::LogContents::V3>();
            v3->parent = this;
            children["v3"] = v3.get();
        }
        return children.at("v3");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Logs::Log::Message::LogContents::get_children()
{
    if(children.find("v3") == children.end())
    {
        if(v3 != nullptr)
        {
            children["v3"] = v3.get();
        }
    }

    return children;
}

void Install::Logs::Log::Message::LogContents::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "version")
    {
        version = value;
    }
}

Install::Logs::Log::Message::Message()
    :
    log_contents(std::make_unique<Install::Logs::Log::Message::LogContents>())
{
    log_contents->parent = this;
    children["log-contents"] = log_contents.get();

    yang_name = "message"; yang_parent_name = "log";
}

Install::Logs::Log::Message::~Message()
{
}

bool Install::Logs::Log::Message::has_data() const
{
    return (log_contents !=  nullptr && log_contents->has_data());
}

bool Install::Logs::Log::Message::has_operation() const
{
    return is_set(operation)
	|| (log_contents !=  nullptr && log_contents->has_operation());
}

std::string Install::Logs::Log::Message::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message";

    return path_buffer.str();

}

EntityPath Install::Logs::Log::Message::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Logs::Log::Message::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "log-contents")
    {
        if(log_contents != nullptr)
        {
            children["log-contents"] = log_contents.get();
        }
        else
        {
            log_contents = std::make_unique<Install::Logs::Log::Message::LogContents>();
            log_contents->parent = this;
            children["log-contents"] = log_contents.get();
        }
        return children.at("log-contents");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Logs::Log::Message::get_children()
{
    if(children.find("log-contents") == children.end())
    {
        if(log_contents != nullptr)
        {
            children["log-contents"] = log_contents.get();
        }
    }

    return children;
}

void Install::Logs::Log::Message::set_value(const std::string & value_path, std::string value)
{
}

Install::Logs::Log::Change::LogContents::V3::Scope::Scope()
    :
    	admin_read{YType::boolean, "admin-read"},
	 affected_sd_rs{YType::uint32, "affected-sd-rs"}
{
    yang_name = "scope"; yang_parent_name = "v3";
}

Install::Logs::Log::Change::LogContents::V3::Scope::~Scope()
{
}

bool Install::Logs::Log::Change::LogContents::V3::Scope::has_data() const
{
    return admin_read.is_set
	|| affected_sd_rs.is_set;
}

bool Install::Logs::Log::Change::LogContents::V3::Scope::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_read.operation)
	|| is_set(affected_sd_rs.operation);
}

std::string Install::Logs::Log::Change::LogContents::V3::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";

    return path_buffer.str();

}

EntityPath Install::Logs::Log::Change::LogContents::V3::Scope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_read.is_set || is_set(admin_read.operation)) leaf_name_data.push_back(admin_read.get_name_leafdata());
    if (affected_sd_rs.is_set || is_set(affected_sd_rs.operation)) leaf_name_data.push_back(affected_sd_rs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Logs::Log::Change::LogContents::V3::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Logs::Log::Change::LogContents::V3::Scope::get_children()
{
    return children;
}

void Install::Logs::Log::Change::LogContents::V3::Scope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-read")
    {
        admin_read = value;
    }
    if(value_path == "affected-sd-rs")
    {
        affected_sd_rs = value;
    }
}

Install::Logs::Log::Change::LogContents::V3::V3()
    :
    	category{YType::enumeration, "category"},
	 message{YType::str, "message"}
    	,
    scope(std::make_unique<Install::Logs::Log::Change::LogContents::V3::Scope>())
{
    scope->parent = this;
    children["scope"] = scope.get();

    yang_name = "v3"; yang_parent_name = "log-contents";
}

Install::Logs::Log::Change::LogContents::V3::~V3()
{
}

bool Install::Logs::Log::Change::LogContents::V3::has_data() const
{
    return category.is_set
	|| message.is_set
	|| (scope !=  nullptr && scope->has_data());
}

bool Install::Logs::Log::Change::LogContents::V3::has_operation() const
{
    return is_set(operation)
	|| is_set(category.operation)
	|| is_set(message.operation)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Install::Logs::Log::Change::LogContents::V3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v3";

    return path_buffer.str();

}

EntityPath Install::Logs::Log::Change::LogContents::V3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.operation)) leaf_name_data.push_back(category.get_name_leafdata());
    if (message.is_set || is_set(message.operation)) leaf_name_data.push_back(message.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Logs::Log::Change::LogContents::V3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "scope")
    {
        if(scope != nullptr)
        {
            children["scope"] = scope.get();
        }
        else
        {
            scope = std::make_unique<Install::Logs::Log::Change::LogContents::V3::Scope>();
            scope->parent = this;
            children["scope"] = scope.get();
        }
        return children.at("scope");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Logs::Log::Change::LogContents::V3::get_children()
{
    if(children.find("scope") == children.end())
    {
        if(scope != nullptr)
        {
            children["scope"] = scope.get();
        }
    }

    return children;
}

void Install::Logs::Log::Change::LogContents::V3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "category")
    {
        category = value;
    }
    if(value_path == "message")
    {
        message = value;
    }
}

Install::Logs::Log::Change::LogContents::LogContents()
    :
    	version{YType::uint32, "version"}
    	,
    v3(std::make_unique<Install::Logs::Log::Change::LogContents::V3>())
{
    v3->parent = this;
    children["v3"] = v3.get();

    yang_name = "log-contents"; yang_parent_name = "change";
}

Install::Logs::Log::Change::LogContents::~LogContents()
{
}

bool Install::Logs::Log::Change::LogContents::has_data() const
{
    return version.is_set
	|| (v3 !=  nullptr && v3->has_data());
}

bool Install::Logs::Log::Change::LogContents::has_operation() const
{
    return is_set(operation)
	|| is_set(version.operation)
	|| (v3 !=  nullptr && v3->has_operation());
}

std::string Install::Logs::Log::Change::LogContents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-contents";

    return path_buffer.str();

}

EntityPath Install::Logs::Log::Change::LogContents::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Logs::Log::Change::LogContents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "v3")
    {
        if(v3 != nullptr)
        {
            children["v3"] = v3.get();
        }
        else
        {
            v3 = std::make_unique<Install::Logs::Log::Change::LogContents::V3>();
            v3->parent = this;
            children["v3"] = v3.get();
        }
        return children.at("v3");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Logs::Log::Change::LogContents::get_children()
{
    if(children.find("v3") == children.end())
    {
        if(v3 != nullptr)
        {
            children["v3"] = v3.get();
        }
    }

    return children;
}

void Install::Logs::Log::Change::LogContents::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "version")
    {
        version = value;
    }
}

Install::Logs::Log::Change::Change()
    :
    log_contents(std::make_unique<Install::Logs::Log::Change::LogContents>())
{
    log_contents->parent = this;
    children["log-contents"] = log_contents.get();

    yang_name = "change"; yang_parent_name = "log";
}

Install::Logs::Log::Change::~Change()
{
}

bool Install::Logs::Log::Change::has_data() const
{
    return (log_contents !=  nullptr && log_contents->has_data());
}

bool Install::Logs::Log::Change::has_operation() const
{
    return is_set(operation)
	|| (log_contents !=  nullptr && log_contents->has_operation());
}

std::string Install::Logs::Log::Change::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change";

    return path_buffer.str();

}

EntityPath Install::Logs::Log::Change::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Logs::Log::Change::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "log-contents")
    {
        if(log_contents != nullptr)
        {
            children["log-contents"] = log_contents.get();
        }
        else
        {
            log_contents = std::make_unique<Install::Logs::Log::Change::LogContents>();
            log_contents->parent = this;
            children["log-contents"] = log_contents.get();
        }
        return children.at("log-contents");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Logs::Log::Change::get_children()
{
    if(children.find("log-contents") == children.end())
    {
        if(log_contents != nullptr)
        {
            children["log-contents"] = log_contents.get();
        }
    }

    return children;
}

void Install::Logs::Log::Change::set_value(const std::string & value_path, std::string value)
{
}

Install::Logs::Log::Detail::LogContents::V3::Scope::Scope()
    :
    	admin_read{YType::boolean, "admin-read"},
	 affected_sd_rs{YType::uint32, "affected-sd-rs"}
{
    yang_name = "scope"; yang_parent_name = "v3";
}

Install::Logs::Log::Detail::LogContents::V3::Scope::~Scope()
{
}

bool Install::Logs::Log::Detail::LogContents::V3::Scope::has_data() const
{
    return admin_read.is_set
	|| affected_sd_rs.is_set;
}

bool Install::Logs::Log::Detail::LogContents::V3::Scope::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_read.operation)
	|| is_set(affected_sd_rs.operation);
}

std::string Install::Logs::Log::Detail::LogContents::V3::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";

    return path_buffer.str();

}

EntityPath Install::Logs::Log::Detail::LogContents::V3::Scope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_read.is_set || is_set(admin_read.operation)) leaf_name_data.push_back(admin_read.get_name_leafdata());
    if (affected_sd_rs.is_set || is_set(affected_sd_rs.operation)) leaf_name_data.push_back(affected_sd_rs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Logs::Log::Detail::LogContents::V3::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Logs::Log::Detail::LogContents::V3::Scope::get_children()
{
    return children;
}

void Install::Logs::Log::Detail::LogContents::V3::Scope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-read")
    {
        admin_read = value;
    }
    if(value_path == "affected-sd-rs")
    {
        affected_sd_rs = value;
    }
}

Install::Logs::Log::Detail::LogContents::V3::V3()
    :
    	category{YType::enumeration, "category"},
	 message{YType::str, "message"}
    	,
    scope(std::make_unique<Install::Logs::Log::Detail::LogContents::V3::Scope>())
{
    scope->parent = this;
    children["scope"] = scope.get();

    yang_name = "v3"; yang_parent_name = "log-contents";
}

Install::Logs::Log::Detail::LogContents::V3::~V3()
{
}

bool Install::Logs::Log::Detail::LogContents::V3::has_data() const
{
    return category.is_set
	|| message.is_set
	|| (scope !=  nullptr && scope->has_data());
}

bool Install::Logs::Log::Detail::LogContents::V3::has_operation() const
{
    return is_set(operation)
	|| is_set(category.operation)
	|| is_set(message.operation)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Install::Logs::Log::Detail::LogContents::V3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v3";

    return path_buffer.str();

}

EntityPath Install::Logs::Log::Detail::LogContents::V3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.operation)) leaf_name_data.push_back(category.get_name_leafdata());
    if (message.is_set || is_set(message.operation)) leaf_name_data.push_back(message.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Logs::Log::Detail::LogContents::V3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "scope")
    {
        if(scope != nullptr)
        {
            children["scope"] = scope.get();
        }
        else
        {
            scope = std::make_unique<Install::Logs::Log::Detail::LogContents::V3::Scope>();
            scope->parent = this;
            children["scope"] = scope.get();
        }
        return children.at("scope");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Logs::Log::Detail::LogContents::V3::get_children()
{
    if(children.find("scope") == children.end())
    {
        if(scope != nullptr)
        {
            children["scope"] = scope.get();
        }
    }

    return children;
}

void Install::Logs::Log::Detail::LogContents::V3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "category")
    {
        category = value;
    }
    if(value_path == "message")
    {
        message = value;
    }
}

Install::Logs::Log::Detail::LogContents::LogContents()
    :
    	version{YType::uint32, "version"}
    	,
    v3(std::make_unique<Install::Logs::Log::Detail::LogContents::V3>())
{
    v3->parent = this;
    children["v3"] = v3.get();

    yang_name = "log-contents"; yang_parent_name = "detail";
}

Install::Logs::Log::Detail::LogContents::~LogContents()
{
}

bool Install::Logs::Log::Detail::LogContents::has_data() const
{
    return version.is_set
	|| (v3 !=  nullptr && v3->has_data());
}

bool Install::Logs::Log::Detail::LogContents::has_operation() const
{
    return is_set(operation)
	|| is_set(version.operation)
	|| (v3 !=  nullptr && v3->has_operation());
}

std::string Install::Logs::Log::Detail::LogContents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-contents";

    return path_buffer.str();

}

EntityPath Install::Logs::Log::Detail::LogContents::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Logs::Log::Detail::LogContents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "v3")
    {
        if(v3 != nullptr)
        {
            children["v3"] = v3.get();
        }
        else
        {
            v3 = std::make_unique<Install::Logs::Log::Detail::LogContents::V3>();
            v3->parent = this;
            children["v3"] = v3.get();
        }
        return children.at("v3");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Logs::Log::Detail::LogContents::get_children()
{
    if(children.find("v3") == children.end())
    {
        if(v3 != nullptr)
        {
            children["v3"] = v3.get();
        }
    }

    return children;
}

void Install::Logs::Log::Detail::LogContents::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "version")
    {
        version = value;
    }
}

Install::Logs::Log::Detail::Detail()
    :
    log_contents(std::make_unique<Install::Logs::Log::Detail::LogContents>())
{
    log_contents->parent = this;
    children["log-contents"] = log_contents.get();

    yang_name = "detail"; yang_parent_name = "log";
}

Install::Logs::Log::Detail::~Detail()
{
}

bool Install::Logs::Log::Detail::has_data() const
{
    return (log_contents !=  nullptr && log_contents->has_data());
}

bool Install::Logs::Log::Detail::has_operation() const
{
    return is_set(operation)
	|| (log_contents !=  nullptr && log_contents->has_operation());
}

std::string Install::Logs::Log::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

EntityPath Install::Logs::Log::Detail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Logs::Log::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "log-contents")
    {
        if(log_contents != nullptr)
        {
            children["log-contents"] = log_contents.get();
        }
        else
        {
            log_contents = std::make_unique<Install::Logs::Log::Detail::LogContents>();
            log_contents->parent = this;
            children["log-contents"] = log_contents.get();
        }
        return children.at("log-contents");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Logs::Log::Detail::get_children()
{
    if(children.find("log-contents") == children.end())
    {
        if(log_contents != nullptr)
        {
            children["log-contents"] = log_contents.get();
        }
    }

    return children;
}

void Install::Logs::Log::Detail::set_value(const std::string & value_path, std::string value)
{
}

Install::Logs::Log::Communication::LogContents::V3::Scope::Scope()
    :
    	admin_read{YType::boolean, "admin-read"},
	 affected_sd_rs{YType::uint32, "affected-sd-rs"}
{
    yang_name = "scope"; yang_parent_name = "v3";
}

Install::Logs::Log::Communication::LogContents::V3::Scope::~Scope()
{
}

bool Install::Logs::Log::Communication::LogContents::V3::Scope::has_data() const
{
    return admin_read.is_set
	|| affected_sd_rs.is_set;
}

bool Install::Logs::Log::Communication::LogContents::V3::Scope::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_read.operation)
	|| is_set(affected_sd_rs.operation);
}

std::string Install::Logs::Log::Communication::LogContents::V3::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";

    return path_buffer.str();

}

EntityPath Install::Logs::Log::Communication::LogContents::V3::Scope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_read.is_set || is_set(admin_read.operation)) leaf_name_data.push_back(admin_read.get_name_leafdata());
    if (affected_sd_rs.is_set || is_set(affected_sd_rs.operation)) leaf_name_data.push_back(affected_sd_rs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Logs::Log::Communication::LogContents::V3::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Logs::Log::Communication::LogContents::V3::Scope::get_children()
{
    return children;
}

void Install::Logs::Log::Communication::LogContents::V3::Scope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-read")
    {
        admin_read = value;
    }
    if(value_path == "affected-sd-rs")
    {
        affected_sd_rs = value;
    }
}

Install::Logs::Log::Communication::LogContents::V3::V3()
    :
    	category{YType::enumeration, "category"},
	 message{YType::str, "message"}
    	,
    scope(std::make_unique<Install::Logs::Log::Communication::LogContents::V3::Scope>())
{
    scope->parent = this;
    children["scope"] = scope.get();

    yang_name = "v3"; yang_parent_name = "log-contents";
}

Install::Logs::Log::Communication::LogContents::V3::~V3()
{
}

bool Install::Logs::Log::Communication::LogContents::V3::has_data() const
{
    return category.is_set
	|| message.is_set
	|| (scope !=  nullptr && scope->has_data());
}

bool Install::Logs::Log::Communication::LogContents::V3::has_operation() const
{
    return is_set(operation)
	|| is_set(category.operation)
	|| is_set(message.operation)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Install::Logs::Log::Communication::LogContents::V3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v3";

    return path_buffer.str();

}

EntityPath Install::Logs::Log::Communication::LogContents::V3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.operation)) leaf_name_data.push_back(category.get_name_leafdata());
    if (message.is_set || is_set(message.operation)) leaf_name_data.push_back(message.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Logs::Log::Communication::LogContents::V3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "scope")
    {
        if(scope != nullptr)
        {
            children["scope"] = scope.get();
        }
        else
        {
            scope = std::make_unique<Install::Logs::Log::Communication::LogContents::V3::Scope>();
            scope->parent = this;
            children["scope"] = scope.get();
        }
        return children.at("scope");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Logs::Log::Communication::LogContents::V3::get_children()
{
    if(children.find("scope") == children.end())
    {
        if(scope != nullptr)
        {
            children["scope"] = scope.get();
        }
    }

    return children;
}

void Install::Logs::Log::Communication::LogContents::V3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "category")
    {
        category = value;
    }
    if(value_path == "message")
    {
        message = value;
    }
}

Install::Logs::Log::Communication::LogContents::LogContents()
    :
    	version{YType::uint32, "version"}
    	,
    v3(std::make_unique<Install::Logs::Log::Communication::LogContents::V3>())
{
    v3->parent = this;
    children["v3"] = v3.get();

    yang_name = "log-contents"; yang_parent_name = "communication";
}

Install::Logs::Log::Communication::LogContents::~LogContents()
{
}

bool Install::Logs::Log::Communication::LogContents::has_data() const
{
    return version.is_set
	|| (v3 !=  nullptr && v3->has_data());
}

bool Install::Logs::Log::Communication::LogContents::has_operation() const
{
    return is_set(operation)
	|| is_set(version.operation)
	|| (v3 !=  nullptr && v3->has_operation());
}

std::string Install::Logs::Log::Communication::LogContents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-contents";

    return path_buffer.str();

}

EntityPath Install::Logs::Log::Communication::LogContents::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Logs::Log::Communication::LogContents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "v3")
    {
        if(v3 != nullptr)
        {
            children["v3"] = v3.get();
        }
        else
        {
            v3 = std::make_unique<Install::Logs::Log::Communication::LogContents::V3>();
            v3->parent = this;
            children["v3"] = v3.get();
        }
        return children.at("v3");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Logs::Log::Communication::LogContents::get_children()
{
    if(children.find("v3") == children.end())
    {
        if(v3 != nullptr)
        {
            children["v3"] = v3.get();
        }
    }

    return children;
}

void Install::Logs::Log::Communication::LogContents::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "version")
    {
        version = value;
    }
}

Install::Logs::Log::Communication::Communication()
    :
    log_contents(std::make_unique<Install::Logs::Log::Communication::LogContents>())
{
    log_contents->parent = this;
    children["log-contents"] = log_contents.get();

    yang_name = "communication"; yang_parent_name = "log";
}

Install::Logs::Log::Communication::~Communication()
{
}

bool Install::Logs::Log::Communication::has_data() const
{
    return (log_contents !=  nullptr && log_contents->has_data());
}

bool Install::Logs::Log::Communication::has_operation() const
{
    return is_set(operation)
	|| (log_contents !=  nullptr && log_contents->has_operation());
}

std::string Install::Logs::Log::Communication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "communication";

    return path_buffer.str();

}

EntityPath Install::Logs::Log::Communication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Logs::Log::Communication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "log-contents")
    {
        if(log_contents != nullptr)
        {
            children["log-contents"] = log_contents.get();
        }
        else
        {
            log_contents = std::make_unique<Install::Logs::Log::Communication::LogContents>();
            log_contents->parent = this;
            children["log-contents"] = log_contents.get();
        }
        return children.at("log-contents");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Logs::Log::Communication::get_children()
{
    if(children.find("log-contents") == children.end())
    {
        if(log_contents != nullptr)
        {
            children["log-contents"] = log_contents.get();
        }
    }

    return children;
}

void Install::Logs::Log::Communication::set_value(const std::string & value_path, std::string value)
{
}

Install::Logs::Log::Log()
    :
    	request_id{YType::int32, "request-id"}
{
    yang_name = "log"; yang_parent_name = "logs";
}

Install::Logs::Log::~Log()
{
}

bool Install::Logs::Log::has_data() const
{
    for (std::size_t index=0; index<change.size(); index++)
    {
        if(change[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<communication.size(); index++)
    {
        if(communication[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<detail.size(); index++)
    {
        if(detail[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<header.size(); index++)
    {
        if(header[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<message.size(); index++)
    {
        if(message[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<summary.size(); index++)
    {
        if(summary[index]->has_data())
            return true;
    }
    return request_id.is_set;
}

bool Install::Logs::Log::has_operation() const
{
    for (std::size_t index=0; index<change.size(); index++)
    {
        if(change[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<communication.size(); index++)
    {
        if(communication[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<detail.size(); index++)
    {
        if(detail[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<header.size(); index++)
    {
        if(header[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<message.size(); index++)
    {
        if(message[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<summary.size(); index++)
    {
        if(summary[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(request_id.operation);
}

std::string Install::Logs::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log" <<"[request-id='" <<request_id.get() <<"']";

    return path_buffer.str();

}

EntityPath Install::Logs::Log::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/logs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_id.is_set || is_set(request_id.operation)) leaf_name_data.push_back(request_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Logs::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "change")
    {
        for(auto const & c : change)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::Logs::Log::Change>();
        c->parent = this;
        change.push_back(std::move(c));
        children[segment_path] = change.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "communication")
    {
        for(auto const & c : communication)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::Logs::Log::Communication>();
        c->parent = this;
        communication.push_back(std::move(c));
        children[segment_path] = communication.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "detail")
    {
        for(auto const & c : detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::Logs::Log::Detail>();
        c->parent = this;
        detail.push_back(std::move(c));
        children[segment_path] = detail.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "header")
    {
        for(auto const & c : header)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::Logs::Log::Header>();
        c->parent = this;
        header.push_back(std::move(c));
        children[segment_path] = header.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "message")
    {
        for(auto const & c : message)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::Logs::Log::Message>();
        c->parent = this;
        message.push_back(std::move(c));
        children[segment_path] = message.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "summary")
    {
        for(auto const & c : summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::Logs::Log::Summary>();
        c->parent = this;
        summary.push_back(std::move(c));
        children[segment_path] = summary.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Logs::Log::get_children()
{
    for (auto const & c : change)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : communication)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : header)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : message)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::Logs::Log::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "request-id")
    {
        request_id = value;
    }
}

Install::Logs::Logs()
{
    yang_name = "logs"; yang_parent_name = "install";
}

Install::Logs::~Logs()
{
}

bool Install::Logs::has_data() const
{
    for (std::size_t index=0; index<log.size(); index++)
    {
        if(log[index]->has_data())
            return true;
    }
    return false;
}

bool Install::Logs::has_operation() const
{
    for (std::size_t index=0; index<log.size(); index++)
    {
        if(log[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Install::Logs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logs";

    return path_buffer.str();

}

EntityPath Install::Logs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::Logs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "log")
    {
        for(auto const & c : log)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Install::Logs::Log>();
        c->parent = this;
        log.push_back(std::move(c));
        children[segment_path] = log.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::Logs::get_children()
{
    for (auto const & c : log)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Install::Logs::set_value(const std::string & value_path, std::string value)
{
}

Install::Install()
    :
    	log_size{YType::int32, "log-size"}
    	,
    boot_image(std::make_unique<Install::BootImage>())
	,boot_variables(std::make_unique<Install::BootVariables>())
	,configuration_registers(std::make_unique<Install::ConfigurationRegisters>())
	,issu(std::make_unique<Install::Issu>())
	,logs(std::make_unique<Install::Logs>())
	,request_statuses(std::make_unique<Install::RequestStatuses>())
	,software(std::make_unique<Install::Software>())
	,software_inventory(std::make_unique<Install::SoftwareInventory>())
{
    boot_image->parent = this;
    children["boot-image"] = boot_image.get();

    boot_variables->parent = this;
    children["boot-variables"] = boot_variables.get();

    configuration_registers->parent = this;
    children["configuration-registers"] = configuration_registers.get();

    issu->parent = this;
    children["issu"] = issu.get();

    logs->parent = this;
    children["logs"] = logs.get();

    request_statuses->parent = this;
    children["request-statuses"] = request_statuses.get();

    software->parent = this;
    children["software"] = software.get();

    software_inventory->parent = this;
    children["software-inventory"] = software_inventory.get();

    yang_name = "install"; yang_parent_name = "Cisco-IOS-XR-installmgr-admin-oper";
}

Install::~Install()
{
}

bool Install::has_data() const
{
    return log_size.is_set
	|| (boot_image !=  nullptr && boot_image->has_data())
	|| (boot_variables !=  nullptr && boot_variables->has_data())
	|| (configuration_registers !=  nullptr && configuration_registers->has_data())
	|| (issu !=  nullptr && issu->has_data())
	|| (logs !=  nullptr && logs->has_data())
	|| (request_statuses !=  nullptr && request_statuses->has_data())
	|| (software !=  nullptr && software->has_data())
	|| (software_inventory !=  nullptr && software_inventory->has_data());
}

bool Install::has_operation() const
{
    return is_set(operation)
	|| is_set(log_size.operation)
	|| (boot_image !=  nullptr && boot_image->has_operation())
	|| (boot_variables !=  nullptr && boot_variables->has_operation())
	|| (configuration_registers !=  nullptr && configuration_registers->has_operation())
	|| (issu !=  nullptr && issu->has_operation())
	|| (logs !=  nullptr && logs->has_operation())
	|| (request_statuses !=  nullptr && request_statuses->has_operation())
	|| (software !=  nullptr && software->has_operation())
	|| (software_inventory !=  nullptr && software_inventory->has_operation());
}

std::string Install::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install";

    return path_buffer.str();

}

EntityPath Install::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_size.is_set || is_set(log_size.operation)) leaf_name_data.push_back(log_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Install::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "boot-image")
    {
        if(boot_image != nullptr)
        {
            children["boot-image"] = boot_image.get();
        }
        else
        {
            boot_image = std::make_unique<Install::BootImage>();
            boot_image->parent = this;
            children["boot-image"] = boot_image.get();
        }
        return children.at("boot-image");
    }

    if(child_yang_name == "boot-variables")
    {
        if(boot_variables != nullptr)
        {
            children["boot-variables"] = boot_variables.get();
        }
        else
        {
            boot_variables = std::make_unique<Install::BootVariables>();
            boot_variables->parent = this;
            children["boot-variables"] = boot_variables.get();
        }
        return children.at("boot-variables");
    }

    if(child_yang_name == "configuration-registers")
    {
        if(configuration_registers != nullptr)
        {
            children["configuration-registers"] = configuration_registers.get();
        }
        else
        {
            configuration_registers = std::make_unique<Install::ConfigurationRegisters>();
            configuration_registers->parent = this;
            children["configuration-registers"] = configuration_registers.get();
        }
        return children.at("configuration-registers");
    }

    if(child_yang_name == "issu")
    {
        if(issu != nullptr)
        {
            children["issu"] = issu.get();
        }
        else
        {
            issu = std::make_unique<Install::Issu>();
            issu->parent = this;
            children["issu"] = issu.get();
        }
        return children.at("issu");
    }

    if(child_yang_name == "logs")
    {
        if(logs != nullptr)
        {
            children["logs"] = logs.get();
        }
        else
        {
            logs = std::make_unique<Install::Logs>();
            logs->parent = this;
            children["logs"] = logs.get();
        }
        return children.at("logs");
    }

    if(child_yang_name == "request-statuses")
    {
        if(request_statuses != nullptr)
        {
            children["request-statuses"] = request_statuses.get();
        }
        else
        {
            request_statuses = std::make_unique<Install::RequestStatuses>();
            request_statuses->parent = this;
            children["request-statuses"] = request_statuses.get();
        }
        return children.at("request-statuses");
    }

    if(child_yang_name == "software")
    {
        if(software != nullptr)
        {
            children["software"] = software.get();
        }
        else
        {
            software = std::make_unique<Install::Software>();
            software->parent = this;
            children["software"] = software.get();
        }
        return children.at("software");
    }

    if(child_yang_name == "software-inventory")
    {
        if(software_inventory != nullptr)
        {
            children["software-inventory"] = software_inventory.get();
        }
        else
        {
            software_inventory = std::make_unique<Install::SoftwareInventory>();
            software_inventory->parent = this;
            children["software-inventory"] = software_inventory.get();
        }
        return children.at("software-inventory");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Install::get_children()
{
    if(children.find("boot-image") == children.end())
    {
        if(boot_image != nullptr)
        {
            children["boot-image"] = boot_image.get();
        }
    }

    if(children.find("boot-variables") == children.end())
    {
        if(boot_variables != nullptr)
        {
            children["boot-variables"] = boot_variables.get();
        }
    }

    if(children.find("configuration-registers") == children.end())
    {
        if(configuration_registers != nullptr)
        {
            children["configuration-registers"] = configuration_registers.get();
        }
    }

    if(children.find("issu") == children.end())
    {
        if(issu != nullptr)
        {
            children["issu"] = issu.get();
        }
    }

    if(children.find("logs") == children.end())
    {
        if(logs != nullptr)
        {
            children["logs"] = logs.get();
        }
    }

    if(children.find("request-statuses") == children.end())
    {
        if(request_statuses != nullptr)
        {
            children["request-statuses"] = request_statuses.get();
        }
    }

    if(children.find("software") == children.end())
    {
        if(software != nullptr)
        {
            children["software"] = software.get();
        }
    }

    if(children.find("software-inventory") == children.end())
    {
        if(software_inventory != nullptr)
        {
            children["software-inventory"] = software_inventory.get();
        }
    }

    return children;
}

void Install::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log-size")
    {
        log_size = value;
    }
}

std::unique_ptr<Entity> Install::clone_ptr()
{
    return std::make_unique<Install>();
}

const Enum::YLeaf InstmgrIssuAbortMethodEnum::method_undefined {0, "method-undefined"};
const Enum::YLeaf InstmgrIssuAbortMethodEnum::method_no_operation {1, "method-no-operation"};
const Enum::YLeaf InstmgrIssuAbortMethodEnum::method_standby_reload {2, "method-standby-reload"};
const Enum::YLeaf InstmgrIssuAbortMethodEnum::method_system_reload {3, "method-system-reload"};
const Enum::YLeaf InstmgrIssuAbortMethodEnum::method_rollback {4, "method-rollback"};
const Enum::YLeaf InstmgrIssuAbortMethodEnum::method_not_possible {5, "method-not-possible"};
const Enum::YLeaf InstmgrIssuAbortMethodEnum::method_admin_only {6, "method-admin-only"};

const Enum::YLeaf InstmgrBagRequestTriggerEnum::cli {1, "cli"};
const Enum::YLeaf InstmgrBagRequestTriggerEnum::xr_xml {2, "xr-xml"};

const Enum::YLeaf InstmgrGroupEnum::inst_pkg_group_undefined {0, "inst-pkg-group-undefined"};
const Enum::YLeaf InstmgrGroupEnum::inst_pkg_group_grouped {1, "inst-pkg-group-grouped"};
const Enum::YLeaf InstmgrGroupEnum::inst_pkg_group_individual {2, "inst-pkg-group-individual"};

const Enum::YLeaf IsmCardTypeFamilyEnum::ndsc_active_rp {1, "ndsc-active-rp"};
const Enum::YLeaf IsmCardTypeFamilyEnum::ndsc_standby_rp {2, "ndsc-standby-rp"};
const Enum::YLeaf IsmCardTypeFamilyEnum::active_drp {3, "active-drp"};
const Enum::YLeaf IsmCardTypeFamilyEnum::standby_drp {4, "standby-drp"};
const Enum::YLeaf IsmCardTypeFamilyEnum::dsc_active_rp {5, "dsc-active-rp"};
const Enum::YLeaf IsmCardTypeFamilyEnum::dsc_standby_rp {6, "dsc-standby-rp"};
const Enum::YLeaf IsmCardTypeFamilyEnum::active_sc {7, "active-sc"};
const Enum::YLeaf IsmCardTypeFamilyEnum::standby_sc {8, "standby-sc"};
const Enum::YLeaf IsmCardTypeFamilyEnum::root_active_sc {9, "root-active-sc"};
const Enum::YLeaf IsmCardTypeFamilyEnum::root_standby_sc {10, "root-standby-sc"};
const Enum::YLeaf IsmCardTypeFamilyEnum::lc {11, "lc"};
const Enum::YLeaf IsmCardTypeFamilyEnum::sp {12, "sp"};
const Enum::YLeaf IsmCardTypeFamilyEnum::fabric_sp {13, "fabric-sp"};
const Enum::YLeaf IsmCardTypeFamilyEnum::spa {14, "spa"};

const Enum::YLeaf InstmgrBagUserMsgCategoryEnum::user_error {1, "user-error"};
const Enum::YLeaf InstmgrBagUserMsgCategoryEnum::non_specific {2, "non-specific"};
const Enum::YLeaf InstmgrBagUserMsgCategoryEnum::warning {3, "warning"};
const Enum::YLeaf InstmgrBagUserMsgCategoryEnum::information {4, "information"};
const Enum::YLeaf InstmgrBagUserMsgCategoryEnum::user_prompt {5, "user-prompt"};
const Enum::YLeaf InstmgrBagUserMsgCategoryEnum::log {6, "log"};
const Enum::YLeaf InstmgrBagUserMsgCategoryEnum::system_error {7, "system-error"};
const Enum::YLeaf InstmgrBagUserMsgCategoryEnum::user_response {8, "user-response"};

const Enum::YLeaf InstallmgrIsmNodeConformingEnum::conforming {0, "conforming"};
const Enum::YLeaf InstallmgrIsmNodeConformingEnum::none_conforming {1, "none-conforming"};
const Enum::YLeaf InstallmgrIsmNodeConformingEnum::upgrade_fail {2, "upgrade-fail"};
const Enum::YLeaf InstallmgrIsmNodeConformingEnum::none_conforming_spa {3, "none-conforming-spa"};
const Enum::YLeaf InstallmgrIsmNodeConformingEnum::spa_upgrade_fail {4, "spa-upgrade-fail"};

const Enum::YLeaf InstmgrInstallPhaseEnum::inst_phase_unknown {0, "inst-phase-unknown"};
const Enum::YLeaf InstmgrInstallPhaseEnum::inst_phase_download {10, "inst-phase-download"};
const Enum::YLeaf InstmgrInstallPhaseEnum::inst_phase_sw_change {50, "inst-phase-sw-change"};
const Enum::YLeaf InstmgrInstallPhaseEnum::inst_phase_cleaning_up {1000, "inst-phase-cleaning-up"};

const Enum::YLeaf InstmgrIssuAbortImpactEnum::undefined {0, "undefined"};
const Enum::YLeaf InstmgrIssuAbortImpactEnum::hitless {1, "hitless"};
const Enum::YLeaf InstmgrIssuAbortImpactEnum::traffic_outage {2, "traffic-outage"};
const Enum::YLeaf InstmgrIssuAbortImpactEnum::not_applicable {3, "not-applicable"};

const Enum::YLeaf InstmgrIsmNodeStateEnum::none {0, "none"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::issu_node_gsp_ready {1, "issu-node-gsp-ready"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::load_shut_done {2, "load-shut-done"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::standby_management_upgrade_done {3, "standby-management-upgrade-done"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::fabric_upgrade_done {4, "fabric-upgrade-done"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::imdr_preparation_ack_received {5, "imdr-preparation-ack-received"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::imdr_preparation_failed {6, "imdr-preparation-failed"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::imdr_start_ack_received {7, "imdr-start-ack-received"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::imdr_start_failed {8, "imdr-start-failed"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::imdr_complete_ack_received {9, "imdr-complete-ack-received"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::imdr_complete_failed {10, "imdr-complete-failed"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::standby_management_ready {11, "standby-management-ready"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::fo_acknowledged {12, "fo-acknowledged"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::fo_complete {13, "fo-complete"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::standby_ready_after_fo {14, "standby-ready-after-fo"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::iam_ready_afteri_mdr {15, "iam-ready-afteri-mdr"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::nsf_ready {16, "nsf-ready"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::nsf_begin_ack_received {17, "nsf-begin-ack-received"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::imdr_done {18, "imdr-done"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::unshut_done {19, "unshut-done"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::run_done {20, "run-done"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::imdr_abort_sent {21, "imdr-abort-sent"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::imdr_abort_ack_received {22, "imdr-abort-ack-received"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::imdr_abort_failed {23, "imdr-abort-failed"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::standby_management_downgrade_done {24, "standby-management-downgrade-done"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::fabric_downgrade_done {25, "fabric-downgrade-done"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::reload_during_issu {26, "reload-during-issu"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::timneout {27, "timneout"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::fabric_upgrade_failed {28, "fabric-upgrade-failed"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::unsupported_hw {29, "unsupported-hw"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::not_reachable {30, "not-reachable"};
const Enum::YLeaf InstmgrIsmNodeStateEnum::max {32, "max"};

const Enum::YLeaf InstmgrPkgEnum::inst_pkg_type_undefined {0, "inst-pkg-type-undefined"};
const Enum::YLeaf InstmgrPkgEnum::inst_pkg_type_root {1, "inst-pkg-type-root"};
const Enum::YLeaf InstmgrPkgEnum::inst_pkg_type_standard {2, "inst-pkg-type-standard"};
const Enum::YLeaf InstmgrPkgEnum::inst_pkg_type_internal {3, "inst-pkg-type-internal"};

const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_not_present {0, "instmgr-card-not-present"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_present {1, "instmgr-card-present"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_reset {2, "instmgr-card-reset"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_booting {3, "instmgr-card-booting"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_mbi_booting {4, "instmgr-card-mbi-booting"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_running_mbi {5, "instmgr-card-running-mbi"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_running_ena {6, "instmgr-card-running-ena"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_bring_down {7, "instmgr-card-bring-down"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_ena_failure {8, "instmgr-card-ena-failure"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_f_diag_run {9, "instmgr-card-f-diag-run"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_f_diag_failure {10, "instmgr-card-f-diag-failure"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_powered {11, "instmgr-card-powered"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_unpowered {12, "instmgr-card-unpowered"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_mdr {13, "instmgr-card-mdr"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_mdr_running_mbi {14, "instmgr-card-mdr-running-mbi"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_main_t_mode {15, "instmgr-card-main-t-mode"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_admin_down {16, "instmgr-card-admin-down"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_no_mon {17, "instmgr-card-no-mon"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_unknown {18, "instmgr-card-unknown"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_failed {19, "instmgr-card-failed"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_ok {20, "instmgr-card-ok"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_missing {21, "instmgr-card-missing"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_field_diag_downloading {22, "instmgr-card-field-diag-downloading"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_field_diag_unmonitor {23, "instmgr-card-field-diag-unmonitor"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_fabric_field_diag_unmonitor {24, "instmgr-card-fabric-field-diag-unmonitor"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_field_diag_rp_launching {25, "instmgr-card-field-diag-rp-launching"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_field_diag_running {26, "instmgr-card-field-diag-running"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_field_diag_pass {27, "instmgr-card-field-diag-pass"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_field_diag_fail {28, "instmgr-card-field-diag-fail"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_field_diag_timeout {29, "instmgr-card-field-diag-timeout"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_disabled {30, "instmgr-card-disabled"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_spa_booting {31, "instmgr-card-spa-booting"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_not_allowed_online {32, "instmgr-card-not-allowed-online"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_stopped {33, "instmgr-card-stopped"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_incompatible_fw_ver {34, "instmgr-card-incompatible-fw-ver"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_fpd_hold {35, "instmgr-card-fpd-hold"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_updating_fpd {37, "instmgr-card-updating-fpd"};
const Enum::YLeaf InstmgrCardStateEnum::instmgr_card_num_states {38, "instmgr-card-num-states"};

const Enum::YLeaf InstmgrNodeRoleEnum::redundency_unknown {0, "redundency-unknown"};
const Enum::YLeaf InstmgrNodeRoleEnum::redundency_active {1, "redundency-active"};
const Enum::YLeaf InstmgrNodeRoleEnum::redundency_standby {2, "redundency-standby"};
const Enum::YLeaf InstmgrNodeRoleEnum::redundency_unusable {3, "redundency-unusable"};

const Enum::YLeaf InstmgrRequestEnum::add {1, "add"};
const Enum::YLeaf InstmgrRequestEnum::accept {2, "accept"};
const Enum::YLeaf InstmgrRequestEnum::clean {3, "clean"};
const Enum::YLeaf InstmgrRequestEnum::activate {4, "activate"};
const Enum::YLeaf InstmgrRequestEnum::deactivate {5, "deactivate"};
const Enum::YLeaf InstmgrRequestEnum::commit {6, "commit"};
const Enum::YLeaf InstmgrRequestEnum::verify {7, "verify"};
const Enum::YLeaf InstmgrRequestEnum::rollback {8, "rollback"};
const Enum::YLeaf InstmgrRequestEnum::clear_rollback {9, "clear-rollback"};
const Enum::YLeaf InstmgrRequestEnum::clear_log {10, "clear-log"};
const Enum::YLeaf InstmgrRequestEnum::health_check {11, "health-check"};
const Enum::YLeaf InstmgrRequestEnum::operation_ {12, "operation"};
const Enum::YLeaf InstmgrRequestEnum::stop_timer {13, "stop-timer"};
const Enum::YLeaf InstmgrRequestEnum::label {14, "label"};
const Enum::YLeaf InstmgrRequestEnum::clear_label {15, "clear-label"};
const Enum::YLeaf InstmgrRequestEnum::extend {16, "extend"};

const Enum::YLeaf InstmgrIsmFsmStateEnum::idle {0, "idle"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::init_done {1, "init-done"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::load_shut {2, "load-shut"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::load_wait {3, "load-wait"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::load_stp_root_before {4, "load-stp-root-before"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::load_standby_root_sc_upgrade {5, "load-standby-root-sc-upgrade"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::load_standby_management_upgrade {6, "load-standby-management-upgrade"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::load_stp_root_after {7, "load-stp-root-after"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::load_fabric_upgrade {8, "load-fabric-upgrade"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::load_management_issu_ready {9, "load-management-issu-ready"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::load_done {10, "load-done"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::run_prep {11, "run-prep"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::run_wait {12, "run-wait"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::runi_mdr_prep {13, "runi-mdr-prep"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::runi_mdr_start {14, "runi-mdr-start"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::runi_mdr_complete {15, "runi-mdr-complete"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::run_make_standby_ready {16, "run-make-standby-ready"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::run_root_scfo {17, "run-root-scfo"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::run_ndscfo {18, "run-ndscfo"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::run_transient1 {19, "run-transient1"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::run_dscfo {20, "run-dscfo"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::run_fo_complete {21, "run-fo-complete"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::run_stp_root_return {22, "run-stp-root-return"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::runi_mdr_continue {23, "runi-mdr-continue"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::run_am_i_ready_afteri_mdr {24, "run-am-i-ready-afteri-mdr"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::run_nsf_ready {25, "run-nsf-ready"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::run_nsf_begin {26, "run-nsf-begin"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::runi_mdr_done {27, "runi-mdr-done"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::run_management_issu_ready {28, "run-management-issu-ready"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::run_un_shut {29, "run-un-shut"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::run_is_done {30, "run-is-done"};
const Enum::YLeaf InstmgrIsmFsmStateEnum::state_max {31, "state-max"};

const Enum::YLeaf InstmgrBagIiDirectionEnum::not_incremental {0, "not-incremental"};
const Enum::YLeaf InstmgrBagIiDirectionEnum::installing {1, "installing"};
const Enum::YLeaf InstmgrBagIiDirectionEnum::unwinding {2, "unwinding"};

const Enum::YLeaf InstmgrPiCardEnum::type_rp {0, "type-rp"};
const Enum::YLeaf InstmgrPiCardEnum::type_drp {1, "type-drp"};
const Enum::YLeaf InstmgrPiCardEnum::type_lc {2, "type-lc"};
const Enum::YLeaf InstmgrPiCardEnum::type_sc {3, "type-sc"};
const Enum::YLeaf InstmgrPiCardEnum::type_sp {4, "type-sp"};
const Enum::YLeaf InstmgrPiCardEnum::type_other {5, "type-other"};

const Enum::YLeaf InstmgrBagIiStateEnum::idle {1, "idle"};
const Enum::YLeaf InstmgrBagIiStateEnum::in_progress {2, "in-progress"};
const Enum::YLeaf InstmgrBagIiStateEnum::completed {3, "completed"};
const Enum::YLeaf InstmgrBagIiStateEnum::aborted {4, "aborted"};
const Enum::YLeaf InstmgrBagIiStateEnum::rebooted {5, "rebooted"};

const Enum::YLeaf InstmgrBagLogEntryUserMsgCategoryEnum::user_error {1, "user-error"};
const Enum::YLeaf InstmgrBagLogEntryUserMsgCategoryEnum::non_specific {2, "non-specific"};
const Enum::YLeaf InstmgrBagLogEntryUserMsgCategoryEnum::warning {3, "warning"};
const Enum::YLeaf InstmgrBagLogEntryUserMsgCategoryEnum::information {4, "information"};
const Enum::YLeaf InstmgrBagLogEntryUserMsgCategoryEnum::user_prompt {5, "user-prompt"};
const Enum::YLeaf InstmgrBagLogEntryUserMsgCategoryEnum::log {6, "log"};
const Enum::YLeaf InstmgrBagLogEntryUserMsgCategoryEnum::system_error {7, "system-error"};
const Enum::YLeaf InstmgrBagLogEntryUserMsgCategoryEnum::user_response {8, "user-response"};

const Enum::YLeaf InstmgrBagAbortStateEnum::abortable {1, "abortable"};
const Enum::YLeaf InstmgrBagAbortStateEnum::no_longer_abortable {2, "no-longer-abortable"};
const Enum::YLeaf InstmgrBagAbortStateEnum::never_abortable {3, "never-abortable"};
const Enum::YLeaf InstmgrBagAbortStateEnum::already_aborted {4, "already-aborted"};


}
}

