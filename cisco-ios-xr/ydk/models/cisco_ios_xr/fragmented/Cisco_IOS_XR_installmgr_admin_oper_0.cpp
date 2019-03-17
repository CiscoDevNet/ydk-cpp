
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_installmgr_admin_oper_0.hpp"
#include "Cisco_IOS_XR_installmgr_admin_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_installmgr_admin_oper {

Install::Install()
    :
    log_size{YType::uint32, "log-size"}
        ,
    configuration_registers(std::make_shared<Install::ConfigurationRegisters>())
    , request_statuses(std::make_shared<Install::RequestStatuses>())
    , boot_variables(std::make_shared<Install::BootVariables>())
    , software(std::make_shared<Install::Software>())
    , software_inventory(std::make_shared<Install::SoftwareInventory>())
    , issu(std::make_shared<Install::Issu>())
    , boot_image(std::make_shared<Install::BootImage>())
    , logs(std::make_shared<Install::Logs>())
{
    configuration_registers->parent = this;
    request_statuses->parent = this;
    boot_variables->parent = this;
    software->parent = this;
    software_inventory->parent = this;
    issu->parent = this;
    boot_image->parent = this;
    logs->parent = this;

    yang_name = "install"; yang_parent_name = "Cisco-IOS-XR-installmgr-admin-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Install::~Install()
{
}

bool Install::has_data() const
{
    if (is_presence_container) return true;
    return log_size.is_set
	|| (configuration_registers !=  nullptr && configuration_registers->has_data())
	|| (request_statuses !=  nullptr && request_statuses->has_data())
	|| (boot_variables !=  nullptr && boot_variables->has_data())
	|| (software !=  nullptr && software->has_data())
	|| (software_inventory !=  nullptr && software_inventory->has_data())
	|| (issu !=  nullptr && issu->has_data())
	|| (boot_image !=  nullptr && boot_image->has_data())
	|| (logs !=  nullptr && logs->has_data());
}

bool Install::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_size.yfilter)
	|| (configuration_registers !=  nullptr && configuration_registers->has_operation())
	|| (request_statuses !=  nullptr && request_statuses->has_operation())
	|| (boot_variables !=  nullptr && boot_variables->has_operation())
	|| (software !=  nullptr && software->has_operation())
	|| (software_inventory !=  nullptr && software_inventory->has_operation())
	|| (issu !=  nullptr && issu->has_operation())
	|| (boot_image !=  nullptr && boot_image->has_operation())
	|| (logs !=  nullptr && logs->has_operation());
}

std::string Install::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_size.is_set || is_set(log_size.yfilter)) leaf_name_data.push_back(log_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configuration-registers")
    {
        if(configuration_registers == nullptr)
        {
            configuration_registers = std::make_shared<Install::ConfigurationRegisters>();
        }
        return configuration_registers;
    }

    if(child_yang_name == "request-statuses")
    {
        if(request_statuses == nullptr)
        {
            request_statuses = std::make_shared<Install::RequestStatuses>();
        }
        return request_statuses;
    }

    if(child_yang_name == "boot-variables")
    {
        if(boot_variables == nullptr)
        {
            boot_variables = std::make_shared<Install::BootVariables>();
        }
        return boot_variables;
    }

    if(child_yang_name == "software")
    {
        if(software == nullptr)
        {
            software = std::make_shared<Install::Software>();
        }
        return software;
    }

    if(child_yang_name == "software-inventory")
    {
        if(software_inventory == nullptr)
        {
            software_inventory = std::make_shared<Install::SoftwareInventory>();
        }
        return software_inventory;
    }

    if(child_yang_name == "issu")
    {
        if(issu == nullptr)
        {
            issu = std::make_shared<Install::Issu>();
        }
        return issu;
    }

    if(child_yang_name == "boot-image")
    {
        if(boot_image == nullptr)
        {
            boot_image = std::make_shared<Install::BootImage>();
        }
        return boot_image;
    }

    if(child_yang_name == "logs")
    {
        if(logs == nullptr)
        {
            logs = std::make_shared<Install::Logs>();
        }
        return logs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(configuration_registers != nullptr)
    {
        _children["configuration-registers"] = configuration_registers;
    }

    if(request_statuses != nullptr)
    {
        _children["request-statuses"] = request_statuses;
    }

    if(boot_variables != nullptr)
    {
        _children["boot-variables"] = boot_variables;
    }

    if(software != nullptr)
    {
        _children["software"] = software;
    }

    if(software_inventory != nullptr)
    {
        _children["software-inventory"] = software_inventory;
    }

    if(issu != nullptr)
    {
        _children["issu"] = issu;
    }

    if(boot_image != nullptr)
    {
        _children["boot-image"] = boot_image;
    }

    if(logs != nullptr)
    {
        _children["logs"] = logs;
    }

    return _children;
}

void Install::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-size")
    {
        log_size = value;
        log_size.value_namespace = name_space;
        log_size.value_namespace_prefix = name_space_prefix;
    }
}

void Install::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-size")
    {
        log_size.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> Install::clone_ptr() const
{
    return std::make_shared<Install>();
}

std::string Install::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Install::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Install::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Install::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Install::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configuration-registers" || name == "request-statuses" || name == "boot-variables" || name == "software" || name == "software-inventory" || name == "issu" || name == "boot-image" || name == "logs" || name == "log-size")
        return true;
    return false;
}

Install::ConfigurationRegisters::ConfigurationRegisters()
    :
    configuration_register(this, {"node_name"})
{

    yang_name = "configuration-registers"; yang_parent_name = "install"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::ConfigurationRegisters::~ConfigurationRegisters()
{
}

bool Install::ConfigurationRegisters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<configuration_register.len(); index++)
    {
        if(configuration_register[index]->has_data())
            return true;
    }
    return false;
}

bool Install::ConfigurationRegisters::has_operation() const
{
    for (std::size_t index=0; index<configuration_register.len(); index++)
    {
        if(configuration_register[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Install::ConfigurationRegisters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::ConfigurationRegisters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration-registers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::ConfigurationRegisters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::ConfigurationRegisters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configuration-register")
    {
        auto ent_ = std::make_shared<Install::ConfigurationRegisters::ConfigurationRegister>();
        ent_->parent = this;
        configuration_register.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::ConfigurationRegisters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : configuration_register.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::ConfigurationRegisters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::ConfigurationRegisters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::ConfigurationRegisters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configuration-register")
        return true;
    return false;
}

Install::ConfigurationRegisters::ConfigurationRegister::ConfigurationRegister()
    :
    node_name{YType::str, "node-name"},
    config_register{YType::str, "config-register"}
{

    yang_name = "configuration-register"; yang_parent_name = "configuration-registers"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::ConfigurationRegisters::ConfigurationRegister::~ConfigurationRegister()
{
}

bool Install::ConfigurationRegisters::ConfigurationRegister::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| config_register.is_set;
}

bool Install::ConfigurationRegisters::ConfigurationRegister::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(config_register.yfilter);
}

std::string Install::ConfigurationRegisters::ConfigurationRegister::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/configuration-registers/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::ConfigurationRegisters::ConfigurationRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration-register";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::ConfigurationRegisters::ConfigurationRegister::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (config_register.is_set || is_set(config_register.yfilter)) leaf_name_data.push_back(config_register.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::ConfigurationRegisters::ConfigurationRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::ConfigurationRegisters::ConfigurationRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::ConfigurationRegisters::ConfigurationRegister::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-register")
    {
        config_register = value;
        config_register.value_namespace = name_space;
        config_register.value_namespace_prefix = name_space_prefix;
    }
}

void Install::ConfigurationRegisters::ConfigurationRegister::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "config-register")
    {
        config_register.yfilter = yfilter;
    }
}

bool Install::ConfigurationRegisters::ConfigurationRegister::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "config-register")
        return true;
    return false;
}

Install::RequestStatuses::RequestStatuses()
    :
    request_status(this, {"request_id"})
{

    yang_name = "request-statuses"; yang_parent_name = "install"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::RequestStatuses::~RequestStatuses()
{
}

bool Install::RequestStatuses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<request_status.len(); index++)
    {
        if(request_status[index]->has_data())
            return true;
    }
    return false;
}

bool Install::RequestStatuses::has_operation() const
{
    for (std::size_t index=0; index<request_status.len(); index++)
    {
        if(request_status[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Install::RequestStatuses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::RequestStatuses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-statuses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::RequestStatuses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::RequestStatuses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request-status")
    {
        auto ent_ = std::make_shared<Install::RequestStatuses::RequestStatus>();
        ent_->parent = this;
        request_status.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::RequestStatuses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : request_status.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::RequestStatuses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::RequestStatuses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::RequestStatuses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request-status")
        return true;
    return false;
}

Install::RequestStatuses::RequestStatus::RequestStatus()
    :
    request_id{YType::uint32, "request-id"},
    percentage{YType::uint8, "percentage"},
    abort_state{YType::enumeration, "abort-state"},
    downloaded_bytes{YType::uint32, "downloaded-bytes"},
    unanswered_query{YType::boolean, "unanswered-query"},
    operation_phase{YType::enumeration, "operation-phase"}
        ,
    request_information(std::make_shared<Install::RequestStatuses::RequestStatus::RequestInformation>())
    , abort_status(std::make_shared<Install::RequestStatuses::RequestStatus::AbortStatus>())
    , incremental_install_information(std::make_shared<Install::RequestStatuses::RequestStatus::IncrementalInstallInformation>())
    , issu_message(this, {})
    , message(this, {})
{
    request_information->parent = this;
    abort_status->parent = this;
    incremental_install_information->parent = this;

    yang_name = "request-status"; yang_parent_name = "request-statuses"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::RequestStatuses::RequestStatus::~RequestStatus()
{
}

bool Install::RequestStatuses::RequestStatus::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<issu_message.len(); index++)
    {
        if(issu_message[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<message.len(); index++)
    {
        if(message[index]->has_data())
            return true;
    }
    return request_id.is_set
	|| percentage.is_set
	|| abort_state.is_set
	|| downloaded_bytes.is_set
	|| unanswered_query.is_set
	|| operation_phase.is_set
	|| (request_information !=  nullptr && request_information->has_data())
	|| (abort_status !=  nullptr && abort_status->has_data())
	|| (incremental_install_information !=  nullptr && incremental_install_information->has_data());
}

bool Install::RequestStatuses::RequestStatus::has_operation() const
{
    for (std::size_t index=0; index<issu_message.len(); index++)
    {
        if(issu_message[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<message.len(); index++)
    {
        if(message[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(request_id.yfilter)
	|| ydk::is_set(percentage.yfilter)
	|| ydk::is_set(abort_state.yfilter)
	|| ydk::is_set(downloaded_bytes.yfilter)
	|| ydk::is_set(unanswered_query.yfilter)
	|| ydk::is_set(operation_phase.yfilter)
	|| (request_information !=  nullptr && request_information->has_operation())
	|| (abort_status !=  nullptr && abort_status->has_operation())
	|| (incremental_install_information !=  nullptr && incremental_install_information->has_operation());
}

std::string Install::RequestStatuses::RequestStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/request-statuses/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::RequestStatuses::RequestStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-status";
    ADD_KEY_TOKEN(request_id, "request-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::RequestStatuses::RequestStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_id.is_set || is_set(request_id.yfilter)) leaf_name_data.push_back(request_id.get_name_leafdata());
    if (percentage.is_set || is_set(percentage.yfilter)) leaf_name_data.push_back(percentage.get_name_leafdata());
    if (abort_state.is_set || is_set(abort_state.yfilter)) leaf_name_data.push_back(abort_state.get_name_leafdata());
    if (downloaded_bytes.is_set || is_set(downloaded_bytes.yfilter)) leaf_name_data.push_back(downloaded_bytes.get_name_leafdata());
    if (unanswered_query.is_set || is_set(unanswered_query.yfilter)) leaf_name_data.push_back(unanswered_query.get_name_leafdata());
    if (operation_phase.is_set || is_set(operation_phase.yfilter)) leaf_name_data.push_back(operation_phase.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::RequestStatuses::RequestStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request-information")
    {
        if(request_information == nullptr)
        {
            request_information = std::make_shared<Install::RequestStatuses::RequestStatus::RequestInformation>();
        }
        return request_information;
    }

    if(child_yang_name == "abort-status")
    {
        if(abort_status == nullptr)
        {
            abort_status = std::make_shared<Install::RequestStatuses::RequestStatus::AbortStatus>();
        }
        return abort_status;
    }

    if(child_yang_name == "incremental-install-information")
    {
        if(incremental_install_information == nullptr)
        {
            incremental_install_information = std::make_shared<Install::RequestStatuses::RequestStatus::IncrementalInstallInformation>();
        }
        return incremental_install_information;
    }

    if(child_yang_name == "issu-message")
    {
        auto ent_ = std::make_shared<Install::RequestStatuses::RequestStatus::IssuMessage>();
        ent_->parent = this;
        issu_message.append(ent_);
        return ent_;
    }

    if(child_yang_name == "message")
    {
        auto ent_ = std::make_shared<Install::RequestStatuses::RequestStatus::Message>();
        ent_->parent = this;
        message.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::RequestStatuses::RequestStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(request_information != nullptr)
    {
        _children["request-information"] = request_information;
    }

    if(abort_status != nullptr)
    {
        _children["abort-status"] = abort_status;
    }

    if(incremental_install_information != nullptr)
    {
        _children["incremental-install-information"] = incremental_install_information;
    }

    count_ = 0;
    for (auto ent_ : issu_message.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : message.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::RequestStatuses::RequestStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request-id")
    {
        request_id = value;
        request_id.value_namespace = name_space;
        request_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percentage")
    {
        percentage = value;
        percentage.value_namespace = name_space;
        percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abort-state")
    {
        abort_state = value;
        abort_state.value_namespace = name_space;
        abort_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downloaded-bytes")
    {
        downloaded_bytes = value;
        downloaded_bytes.value_namespace = name_space;
        downloaded_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unanswered-query")
    {
        unanswered_query = value;
        unanswered_query.value_namespace = name_space;
        unanswered_query.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-phase")
    {
        operation_phase = value;
        operation_phase.value_namespace = name_space;
        operation_phase.value_namespace_prefix = name_space_prefix;
    }
}

void Install::RequestStatuses::RequestStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request-id")
    {
        request_id.yfilter = yfilter;
    }
    if(value_path == "percentage")
    {
        percentage.yfilter = yfilter;
    }
    if(value_path == "abort-state")
    {
        abort_state.yfilter = yfilter;
    }
    if(value_path == "downloaded-bytes")
    {
        downloaded_bytes.yfilter = yfilter;
    }
    if(value_path == "unanswered-query")
    {
        unanswered_query.yfilter = yfilter;
    }
    if(value_path == "operation-phase")
    {
        operation_phase.yfilter = yfilter;
    }
}

bool Install::RequestStatuses::RequestStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request-information" || name == "abort-status" || name == "incremental-install-information" || name == "issu-message" || name == "message" || name == "request-id" || name == "percentage" || name == "abort-state" || name == "downloaded-bytes" || name == "unanswered-query" || name == "operation-phase")
        return true;
    return false;
}

Install::RequestStatuses::RequestStatus::RequestInformation::RequestInformation()
    :
    request_id{YType::uint32, "request-id"},
    user_id{YType::str, "user-id"},
    trigger_type{YType::enumeration, "trigger-type"},
    request_option{YType::int32, "request-option"},
    operation_type{YType::enumeration, "operation-type"},
    operation_detail{YType::str, "operation-detail"}
{

    yang_name = "request-information"; yang_parent_name = "request-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::RequestStatuses::RequestStatus::RequestInformation::~RequestInformation()
{
}

bool Install::RequestStatuses::RequestStatus::RequestInformation::has_data() const
{
    if (is_presence_container) return true;
    return request_id.is_set
	|| user_id.is_set
	|| trigger_type.is_set
	|| request_option.is_set
	|| operation_type.is_set
	|| operation_detail.is_set;
}

bool Install::RequestStatuses::RequestStatus::RequestInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(request_id.yfilter)
	|| ydk::is_set(user_id.yfilter)
	|| ydk::is_set(trigger_type.yfilter)
	|| ydk::is_set(request_option.yfilter)
	|| ydk::is_set(operation_type.yfilter)
	|| ydk::is_set(operation_detail.yfilter);
}

std::string Install::RequestStatuses::RequestStatus::RequestInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::RequestStatuses::RequestStatus::RequestInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_id.is_set || is_set(request_id.yfilter)) leaf_name_data.push_back(request_id.get_name_leafdata());
    if (user_id.is_set || is_set(user_id.yfilter)) leaf_name_data.push_back(user_id.get_name_leafdata());
    if (trigger_type.is_set || is_set(trigger_type.yfilter)) leaf_name_data.push_back(trigger_type.get_name_leafdata());
    if (request_option.is_set || is_set(request_option.yfilter)) leaf_name_data.push_back(request_option.get_name_leafdata());
    if (operation_type.is_set || is_set(operation_type.yfilter)) leaf_name_data.push_back(operation_type.get_name_leafdata());
    if (operation_detail.is_set || is_set(operation_detail.yfilter)) leaf_name_data.push_back(operation_detail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::RequestStatuses::RequestStatus::RequestInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::RequestStatuses::RequestStatus::RequestInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::RequestStatuses::RequestStatus::RequestInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request-id")
    {
        request_id = value;
        request_id.value_namespace = name_space;
        request_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-id")
    {
        user_id = value;
        user_id.value_namespace = name_space;
        user_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-type")
    {
        trigger_type = value;
        trigger_type.value_namespace = name_space;
        trigger_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-option")
    {
        request_option = value;
        request_option.value_namespace = name_space;
        request_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-type")
    {
        operation_type = value;
        operation_type.value_namespace = name_space;
        operation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-detail")
    {
        operation_detail = value;
        operation_detail.value_namespace = name_space;
        operation_detail.value_namespace_prefix = name_space_prefix;
    }
}

void Install::RequestStatuses::RequestStatus::RequestInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request-id")
    {
        request_id.yfilter = yfilter;
    }
    if(value_path == "user-id")
    {
        user_id.yfilter = yfilter;
    }
    if(value_path == "trigger-type")
    {
        trigger_type.yfilter = yfilter;
    }
    if(value_path == "request-option")
    {
        request_option.yfilter = yfilter;
    }
    if(value_path == "operation-type")
    {
        operation_type.yfilter = yfilter;
    }
    if(value_path == "operation-detail")
    {
        operation_detail.yfilter = yfilter;
    }
}

bool Install::RequestStatuses::RequestStatus::RequestInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request-id" || name == "user-id" || name == "trigger-type" || name == "request-option" || name == "operation-type" || name == "operation-detail")
        return true;
    return false;
}

Install::RequestStatuses::RequestStatus::AbortStatus::AbortStatus()
    :
    abort_method{YType::enumeration, "abort-method"},
    abort_impact{YType::enumeration, "abort-impact"}
{

    yang_name = "abort-status"; yang_parent_name = "request-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::RequestStatuses::RequestStatus::AbortStatus::~AbortStatus()
{
}

bool Install::RequestStatuses::RequestStatus::AbortStatus::has_data() const
{
    if (is_presence_container) return true;
    return abort_method.is_set
	|| abort_impact.is_set;
}

bool Install::RequestStatuses::RequestStatus::AbortStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(abort_method.yfilter)
	|| ydk::is_set(abort_impact.yfilter);
}

std::string Install::RequestStatuses::RequestStatus::AbortStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "abort-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::RequestStatuses::RequestStatus::AbortStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abort_method.is_set || is_set(abort_method.yfilter)) leaf_name_data.push_back(abort_method.get_name_leafdata());
    if (abort_impact.is_set || is_set(abort_impact.yfilter)) leaf_name_data.push_back(abort_impact.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::RequestStatuses::RequestStatus::AbortStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::RequestStatuses::RequestStatus::AbortStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::RequestStatuses::RequestStatus::AbortStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "abort-method")
    {
        abort_method = value;
        abort_method.value_namespace = name_space;
        abort_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abort-impact")
    {
        abort_impact = value;
        abort_impact.value_namespace = name_space;
        abort_impact.value_namespace_prefix = name_space_prefix;
    }
}

void Install::RequestStatuses::RequestStatus::AbortStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "abort-method")
    {
        abort_method.yfilter = yfilter;
    }
    if(value_path == "abort-impact")
    {
        abort_impact.yfilter = yfilter;
    }
}

bool Install::RequestStatuses::RequestStatus::AbortStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abort-method" || name == "abort-impact")
        return true;
    return false;
}

Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::IncrementalInstallInformation()
    :
    direction{YType::enumeration, "direction"},
    ii_error{YType::str, "ii-error"}
        ,
    nodes(this, {})
{

    yang_name = "incremental-install-information"; yang_parent_name = "request-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::~IncrementalInstallInformation()
{
}

bool Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nodes.len(); index++)
    {
        if(nodes[index]->has_data())
            return true;
    }
    return direction.is_set
	|| ii_error.is_set;
}

bool Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::has_operation() const
{
    for (std::size_t index=0; index<nodes.len(); index++)
    {
        if(nodes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(ii_error.yfilter);
}

std::string Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incremental-install-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (ii_error.is_set || is_set(ii_error.yfilter)) leaf_name_data.push_back(ii_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        auto ent_ = std::make_shared<Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes>();
        ent_->parent = this;
        nodes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nodes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ii-error")
    {
        ii_error = value;
        ii_error.value_namespace = name_space;
        ii_error.value_namespace_prefix = name_space_prefix;
    }
}

void Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "ii-error")
    {
        ii_error.yfilter = yfilter;
    }
}

bool Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes" || name == "direction" || name == "ii-error")
        return true;
    return false;
}

Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes::Nodes()
    :
    node_name{YType::str, "node-name"},
    state{YType::enumeration, "state"}
{

    yang_name = "nodes"; yang_parent_name = "incremental-install-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes::~Nodes()
{
}

bool Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| state.is_set;
}

bool Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Install::RequestStatuses::RequestStatus::IncrementalInstallInformation::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "state")
        return true;
    return false;
}

Install::RequestStatuses::RequestStatus::IssuMessage::IssuMessage()
    :
    category{YType::enumeration, "category"},
    message{YType::str, "message"}
        ,
    scope(std::make_shared<Install::RequestStatuses::RequestStatus::IssuMessage::Scope>())
{
    scope->parent = this;

    yang_name = "issu-message"; yang_parent_name = "request-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::RequestStatuses::RequestStatus::IssuMessage::~IssuMessage()
{
}

bool Install::RequestStatuses::RequestStatus::IssuMessage::has_data() const
{
    if (is_presence_container) return true;
    return category.is_set
	|| message.is_set
	|| (scope !=  nullptr && scope->has_data());
}

bool Install::RequestStatuses::RequestStatus::IssuMessage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(category.yfilter)
	|| ydk::is_set(message.yfilter)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Install::RequestStatuses::RequestStatus::IssuMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-message";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::RequestStatuses::RequestStatus::IssuMessage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.yfilter)) leaf_name_data.push_back(category.get_name_leafdata());
    if (message.is_set || is_set(message.yfilter)) leaf_name_data.push_back(message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::RequestStatuses::RequestStatus::IssuMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Install::RequestStatuses::RequestStatus::IssuMessage::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::RequestStatuses::RequestStatus::IssuMessage::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(scope != nullptr)
    {
        _children["scope"] = scope;
    }

    return _children;
}

void Install::RequestStatuses::RequestStatus::IssuMessage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "category")
    {
        category = value;
        category.value_namespace = name_space;
        category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message")
    {
        message = value;
        message.value_namespace = name_space;
        message.value_namespace_prefix = name_space_prefix;
    }
}

void Install::RequestStatuses::RequestStatus::IssuMessage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "category")
    {
        category.yfilter = yfilter;
    }
    if(value_path == "message")
    {
        message.yfilter = yfilter;
    }
}

bool Install::RequestStatuses::RequestStatus::IssuMessage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope" || name == "category" || name == "message")
        return true;
    return false;
}

Install::RequestStatuses::RequestStatus::IssuMessage::Scope::Scope()
    :
    admin_read{YType::boolean, "admin-read"},
    affected_sd_rs{YType::uint32, "affected-sd-rs"}
{

    yang_name = "scope"; yang_parent_name = "issu-message"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::RequestStatuses::RequestStatus::IssuMessage::Scope::~Scope()
{
}

bool Install::RequestStatuses::RequestStatus::IssuMessage::Scope::has_data() const
{
    if (is_presence_container) return true;
    return admin_read.is_set
	|| affected_sd_rs.is_set;
}

bool Install::RequestStatuses::RequestStatus::IssuMessage::Scope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_read.yfilter)
	|| ydk::is_set(affected_sd_rs.yfilter);
}

std::string Install::RequestStatuses::RequestStatus::IssuMessage::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::RequestStatuses::RequestStatus::IssuMessage::Scope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_read.is_set || is_set(admin_read.yfilter)) leaf_name_data.push_back(admin_read.get_name_leafdata());
    if (affected_sd_rs.is_set || is_set(affected_sd_rs.yfilter)) leaf_name_data.push_back(affected_sd_rs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::RequestStatuses::RequestStatus::IssuMessage::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::RequestStatuses::RequestStatus::IssuMessage::Scope::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::RequestStatuses::RequestStatus::IssuMessage::Scope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-read")
    {
        admin_read = value;
        admin_read.value_namespace = name_space;
        admin_read.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affected-sd-rs")
    {
        affected_sd_rs = value;
        affected_sd_rs.value_namespace = name_space;
        affected_sd_rs.value_namespace_prefix = name_space_prefix;
    }
}

void Install::RequestStatuses::RequestStatus::IssuMessage::Scope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-read")
    {
        admin_read.yfilter = yfilter;
    }
    if(value_path == "affected-sd-rs")
    {
        affected_sd_rs.yfilter = yfilter;
    }
}

bool Install::RequestStatuses::RequestStatus::IssuMessage::Scope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-read" || name == "affected-sd-rs")
        return true;
    return false;
}

Install::RequestStatuses::RequestStatus::Message::Message()
    :
    category{YType::enumeration, "category"},
    message{YType::str, "message"}
        ,
    scope(std::make_shared<Install::RequestStatuses::RequestStatus::Message::Scope>())
{
    scope->parent = this;

    yang_name = "message"; yang_parent_name = "request-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::RequestStatuses::RequestStatus::Message::~Message()
{
}

bool Install::RequestStatuses::RequestStatus::Message::has_data() const
{
    if (is_presence_container) return true;
    return category.is_set
	|| message.is_set
	|| (scope !=  nullptr && scope->has_data());
}

bool Install::RequestStatuses::RequestStatus::Message::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(category.yfilter)
	|| ydk::is_set(message.yfilter)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Install::RequestStatuses::RequestStatus::Message::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::RequestStatuses::RequestStatus::Message::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.yfilter)) leaf_name_data.push_back(category.get_name_leafdata());
    if (message.is_set || is_set(message.yfilter)) leaf_name_data.push_back(message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::RequestStatuses::RequestStatus::Message::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Install::RequestStatuses::RequestStatus::Message::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::RequestStatuses::RequestStatus::Message::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(scope != nullptr)
    {
        _children["scope"] = scope;
    }

    return _children;
}

void Install::RequestStatuses::RequestStatus::Message::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "category")
    {
        category = value;
        category.value_namespace = name_space;
        category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message")
    {
        message = value;
        message.value_namespace = name_space;
        message.value_namespace_prefix = name_space_prefix;
    }
}

void Install::RequestStatuses::RequestStatus::Message::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "category")
    {
        category.yfilter = yfilter;
    }
    if(value_path == "message")
    {
        message.yfilter = yfilter;
    }
}

bool Install::RequestStatuses::RequestStatus::Message::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope" || name == "category" || name == "message")
        return true;
    return false;
}

Install::RequestStatuses::RequestStatus::Message::Scope::Scope()
    :
    admin_read{YType::boolean, "admin-read"},
    affected_sd_rs{YType::uint32, "affected-sd-rs"}
{

    yang_name = "scope"; yang_parent_name = "message"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::RequestStatuses::RequestStatus::Message::Scope::~Scope()
{
}

bool Install::RequestStatuses::RequestStatus::Message::Scope::has_data() const
{
    if (is_presence_container) return true;
    return admin_read.is_set
	|| affected_sd_rs.is_set;
}

bool Install::RequestStatuses::RequestStatus::Message::Scope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_read.yfilter)
	|| ydk::is_set(affected_sd_rs.yfilter);
}

std::string Install::RequestStatuses::RequestStatus::Message::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::RequestStatuses::RequestStatus::Message::Scope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_read.is_set || is_set(admin_read.yfilter)) leaf_name_data.push_back(admin_read.get_name_leafdata());
    if (affected_sd_rs.is_set || is_set(affected_sd_rs.yfilter)) leaf_name_data.push_back(affected_sd_rs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::RequestStatuses::RequestStatus::Message::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::RequestStatuses::RequestStatus::Message::Scope::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::RequestStatuses::RequestStatus::Message::Scope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-read")
    {
        admin_read = value;
        admin_read.value_namespace = name_space;
        admin_read.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affected-sd-rs")
    {
        affected_sd_rs = value;
        affected_sd_rs.value_namespace = name_space;
        affected_sd_rs.value_namespace_prefix = name_space_prefix;
    }
}

void Install::RequestStatuses::RequestStatus::Message::Scope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-read")
    {
        admin_read.yfilter = yfilter;
    }
    if(value_path == "affected-sd-rs")
    {
        affected_sd_rs.yfilter = yfilter;
    }
}

bool Install::RequestStatuses::RequestStatus::Message::Scope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-read" || name == "affected-sd-rs")
        return true;
    return false;
}

Install::BootVariables::BootVariables()
    :
    boot_variable(this, {"node_name"})
{

    yang_name = "boot-variables"; yang_parent_name = "install"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::BootVariables::~BootVariables()
{
}

bool Install::BootVariables::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<boot_variable.len(); index++)
    {
        if(boot_variable[index]->has_data())
            return true;
    }
    return false;
}

bool Install::BootVariables::has_operation() const
{
    for (std::size_t index=0; index<boot_variable.len(); index++)
    {
        if(boot_variable[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Install::BootVariables::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::BootVariables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot-variables";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::BootVariables::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::BootVariables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boot-variable")
    {
        auto ent_ = std::make_shared<Install::BootVariables::BootVariable>();
        ent_->parent = this;
        boot_variable.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::BootVariables::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : boot_variable.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::BootVariables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::BootVariables::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::BootVariables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boot-variable")
        return true;
    return false;
}

Install::BootVariables::BootVariable::BootVariable()
    :
    node_name{YType::str, "node-name"},
    boot_variable{YType::str, "boot-variable"}
{

    yang_name = "boot-variable"; yang_parent_name = "boot-variables"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::BootVariables::BootVariable::~BootVariable()
{
}

bool Install::BootVariables::BootVariable::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| boot_variable.is_set;
}

bool Install::BootVariables::BootVariable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(boot_variable.yfilter);
}

std::string Install::BootVariables::BootVariable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/boot-variables/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::BootVariables::BootVariable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot-variable";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::BootVariables::BootVariable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (boot_variable.is_set || is_set(boot_variable.yfilter)) leaf_name_data.push_back(boot_variable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::BootVariables::BootVariable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::BootVariables::BootVariable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::BootVariables::BootVariable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-variable")
    {
        boot_variable = value;
        boot_variable.value_namespace = name_space;
        boot_variable.value_namespace_prefix = name_space_prefix;
    }
}

void Install::BootVariables::BootVariable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "boot-variable")
    {
        boot_variable.yfilter = yfilter;
    }
}

bool Install::BootVariables::BootVariable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "boot-variable")
        return true;
    return false;
}

Install::Software::Software()
    :
    alias_devices(std::make_shared<Install::Software::AliasDevices>())
    , package_devices(std::make_shared<Install::Software::PackageDevices>())
    , component_devices(std::make_shared<Install::Software::ComponentDevices>())
{
    alias_devices->parent = this;
    package_devices->parent = this;
    component_devices->parent = this;

    yang_name = "software"; yang_parent_name = "install"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Software::~Software()
{
}

bool Install::Software::has_data() const
{
    if (is_presence_container) return true;
    return (alias_devices !=  nullptr && alias_devices->has_data())
	|| (package_devices !=  nullptr && package_devices->has_data())
	|| (component_devices !=  nullptr && component_devices->has_data());
}

bool Install::Software::has_operation() const
{
    return is_set(yfilter)
	|| (alias_devices !=  nullptr && alias_devices->has_operation())
	|| (package_devices !=  nullptr && package_devices->has_operation())
	|| (component_devices !=  nullptr && component_devices->has_operation());
}

std::string Install::Software::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Software::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "software";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Software::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Software::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alias-devices")
    {
        if(alias_devices == nullptr)
        {
            alias_devices = std::make_shared<Install::Software::AliasDevices>();
        }
        return alias_devices;
    }

    if(child_yang_name == "package-devices")
    {
        if(package_devices == nullptr)
        {
            package_devices = std::make_shared<Install::Software::PackageDevices>();
        }
        return package_devices;
    }

    if(child_yang_name == "component-devices")
    {
        if(component_devices == nullptr)
        {
            component_devices = std::make_shared<Install::Software::ComponentDevices>();
        }
        return component_devices;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Software::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(alias_devices != nullptr)
    {
        _children["alias-devices"] = alias_devices;
    }

    if(package_devices != nullptr)
    {
        _children["package-devices"] = package_devices;
    }

    if(component_devices != nullptr)
    {
        _children["component-devices"] = component_devices;
    }

    return _children;
}

void Install::Software::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::Software::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::Software::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alias-devices" || name == "package-devices" || name == "component-devices")
        return true;
    return false;
}

Install::Software::AliasDevices::AliasDevices()
    :
    alias_device(this, {"device_name"})
{

    yang_name = "alias-devices"; yang_parent_name = "software"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Software::AliasDevices::~AliasDevices()
{
}

bool Install::Software::AliasDevices::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<alias_device.len(); index++)
    {
        if(alias_device[index]->has_data())
            return true;
    }
    return false;
}

bool Install::Software::AliasDevices::has_operation() const
{
    for (std::size_t index=0; index<alias_device.len(); index++)
    {
        if(alias_device[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Install::Software::AliasDevices::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Software::AliasDevices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alias-devices";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Software::AliasDevices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Software::AliasDevices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alias-device")
    {
        auto ent_ = std::make_shared<Install::Software::AliasDevices::AliasDevice>();
        ent_->parent = this;
        alias_device.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Software::AliasDevices::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : alias_device.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::Software::AliasDevices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::Software::AliasDevices::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::Software::AliasDevices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alias-device")
        return true;
    return false;
}

Install::Software::AliasDevices::AliasDevice::AliasDevice()
    :
    device_name{YType::str, "device-name"}
        ,
    aliases(std::make_shared<Install::Software::AliasDevices::AliasDevice::Aliases>())
{
    aliases->parent = this;

    yang_name = "alias-device"; yang_parent_name = "alias-devices"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Software::AliasDevices::AliasDevice::~AliasDevice()
{
}

bool Install::Software::AliasDevices::AliasDevice::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| (aliases !=  nullptr && aliases->has_data());
}

bool Install::Software::AliasDevices::AliasDevice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| (aliases !=  nullptr && aliases->has_operation());
}

std::string Install::Software::AliasDevices::AliasDevice::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software/alias-devices/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Software::AliasDevices::AliasDevice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alias-device";
    ADD_KEY_TOKEN(device_name, "device-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Software::AliasDevices::AliasDevice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Software::AliasDevices::AliasDevice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aliases")
    {
        if(aliases == nullptr)
        {
            aliases = std::make_shared<Install::Software::AliasDevices::AliasDevice::Aliases>();
        }
        return aliases;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Software::AliasDevices::AliasDevice::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aliases != nullptr)
    {
        _children["aliases"] = aliases;
    }

    return _children;
}

void Install::Software::AliasDevices::AliasDevice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Software::AliasDevices::AliasDevice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
}

bool Install::Software::AliasDevices::AliasDevice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aliases" || name == "device-name")
        return true;
    return false;
}

Install::Software::AliasDevices::AliasDevice::Aliases::Aliases()
    :
    alias(this, {"package_name"})
{

    yang_name = "aliases"; yang_parent_name = "alias-device"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Software::AliasDevices::AliasDevice::Aliases::~Aliases()
{
}

bool Install::Software::AliasDevices::AliasDevice::Aliases::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<alias.len(); index++)
    {
        if(alias[index]->has_data())
            return true;
    }
    return false;
}

bool Install::Software::AliasDevices::AliasDevice::Aliases::has_operation() const
{
    for (std::size_t index=0; index<alias.len(); index++)
    {
        if(alias[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Install::Software::AliasDevices::AliasDevice::Aliases::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aliases";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Software::AliasDevices::AliasDevice::Aliases::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Software::AliasDevices::AliasDevice::Aliases::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alias")
    {
        auto ent_ = std::make_shared<Install::Software::AliasDevices::AliasDevice::Aliases::Alias>();
        ent_->parent = this;
        alias.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Software::AliasDevices::AliasDevice::Aliases::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : alias.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::Software::AliasDevices::AliasDevice::Aliases::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::Software::AliasDevices::AliasDevice::Aliases::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::Software::AliasDevices::AliasDevice::Aliases::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alias")
        return true;
    return false;
}

Install::Software::AliasDevices::AliasDevice::Aliases::Alias::Alias()
    :
    package_name{YType::str, "package-name"},
    alias_names{YType::str, "alias-names"}
{

    yang_name = "alias"; yang_parent_name = "aliases"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Software::AliasDevices::AliasDevice::Aliases::Alias::~Alias()
{
}

bool Install::Software::AliasDevices::AliasDevice::Aliases::Alias::has_data() const
{
    if (is_presence_container) return true;
    return package_name.is_set
	|| alias_names.is_set;
}

bool Install::Software::AliasDevices::AliasDevice::Aliases::Alias::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(package_name.yfilter)
	|| ydk::is_set(alias_names.yfilter);
}

std::string Install::Software::AliasDevices::AliasDevice::Aliases::Alias::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alias";
    ADD_KEY_TOKEN(package_name, "package-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Software::AliasDevices::AliasDevice::Aliases::Alias::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (package_name.is_set || is_set(package_name.yfilter)) leaf_name_data.push_back(package_name.get_name_leafdata());
    if (alias_names.is_set || is_set(alias_names.yfilter)) leaf_name_data.push_back(alias_names.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Software::AliasDevices::AliasDevice::Aliases::Alias::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Software::AliasDevices::AliasDevice::Aliases::Alias::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::Software::AliasDevices::AliasDevice::Aliases::Alias::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "package-name")
    {
        package_name = value;
        package_name.value_namespace = name_space;
        package_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alias-names")
    {
        alias_names = value;
        alias_names.value_namespace = name_space;
        alias_names.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Software::AliasDevices::AliasDevice::Aliases::Alias::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "package-name")
    {
        package_name.yfilter = yfilter;
    }
    if(value_path == "alias-names")
    {
        alias_names.yfilter = yfilter;
    }
}

bool Install::Software::AliasDevices::AliasDevice::Aliases::Alias::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package-name" || name == "alias-names")
        return true;
    return false;
}

Install::Software::PackageDevices::PackageDevices()
    :
    package_device(this, {"device_name"})
{

    yang_name = "package-devices"; yang_parent_name = "software"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Software::PackageDevices::~PackageDevices()
{
}

bool Install::Software::PackageDevices::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<package_device.len(); index++)
    {
        if(package_device[index]->has_data())
            return true;
    }
    return false;
}

bool Install::Software::PackageDevices::has_operation() const
{
    for (std::size_t index=0; index<package_device.len(); index++)
    {
        if(package_device[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Install::Software::PackageDevices::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Software::PackageDevices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package-devices";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Software::PackageDevices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Software::PackageDevices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package-device")
    {
        auto ent_ = std::make_shared<Install::Software::PackageDevices::PackageDevice>();
        ent_->parent = this;
        package_device.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Software::PackageDevices::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : package_device.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::Software::PackageDevices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::Software::PackageDevices::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::Software::PackageDevices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package-device")
        return true;
    return false;
}

Install::Software::PackageDevices::PackageDevice::PackageDevice()
    :
    device_name{YType::str, "device-name"}
        ,
    packages(std::make_shared<Install::Software::PackageDevices::PackageDevice::Packages>())
{
    packages->parent = this;

    yang_name = "package-device"; yang_parent_name = "package-devices"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Software::PackageDevices::PackageDevice::~PackageDevice()
{
}

bool Install::Software::PackageDevices::PackageDevice::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| (packages !=  nullptr && packages->has_data());
}

bool Install::Software::PackageDevices::PackageDevice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| (packages !=  nullptr && packages->has_operation());
}

std::string Install::Software::PackageDevices::PackageDevice::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software/package-devices/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Software::PackageDevices::PackageDevice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package-device";
    ADD_KEY_TOKEN(device_name, "device-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Software::PackageDevices::PackageDevice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Software::PackageDevices::PackageDevice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packages")
    {
        if(packages == nullptr)
        {
            packages = std::make_shared<Install::Software::PackageDevices::PackageDevice::Packages>();
        }
        return packages;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Software::PackageDevices::PackageDevice::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(packages != nullptr)
    {
        _children["packages"] = packages;
    }

    return _children;
}

void Install::Software::PackageDevices::PackageDevice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Software::PackageDevices::PackageDevice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
}

bool Install::Software::PackageDevices::PackageDevice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packages" || name == "device-name")
        return true;
    return false;
}

Install::Software::PackageDevices::PackageDevice::Packages::Packages()
    :
    package(this, {"package_name"})
{

    yang_name = "packages"; yang_parent_name = "package-device"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Software::PackageDevices::PackageDevice::Packages::~Packages()
{
}

bool Install::Software::PackageDevices::PackageDevice::Packages::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<package.len(); index++)
    {
        if(package[index]->has_data())
            return true;
    }
    return false;
}

bool Install::Software::PackageDevices::PackageDevice::Packages::has_operation() const
{
    for (std::size_t index=0; index<package.len(); index++)
    {
        if(package[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Install::Software::PackageDevices::PackageDevice::Packages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Software::PackageDevices::PackageDevice::Packages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Software::PackageDevices::PackageDevice::Packages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        auto ent_ = std::make_shared<Install::Software::PackageDevices::PackageDevice::Packages::Package>();
        ent_->parent = this;
        package.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Software::PackageDevices::PackageDevice::Packages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : package.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::Software::PackageDevices::PackageDevice::Packages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::Software::PackageDevices::PackageDevice::Packages::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::Software::PackageDevices::PackageDevice::Packages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package")
        return true;
    return false;
}

Install::Software::PackageDevices::PackageDevice::Packages::Package::Package()
    :
    package_name{YType::str, "package-name"},
    name{YType::str, "name"},
    version{YType::str, "version"},
    description{YType::str, "description"},
    release{YType::str, "release"},
    vendor{YType::str, "vendor"},
    date{YType::str, "date"},
    source{YType::str, "source"},
    base{YType::str, "base"},
    bootable{YType::boolean, "bootable"},
    composite{YType::boolean, "composite"},
    restart_info{YType::str, "restart-info"},
    package_type{YType::enumeration, "package-type"},
    group_type{YType::enumeration, "group-type"},
    depth{YType::uint32, "depth"},
    uncompressed_size{YType::uint32, "uncompressed-size"},
    compressed_size{YType::uint32, "compressed-size"},
    cards{YType::str, "cards"}
        ,
    sub_pkg(this, {})
{

    yang_name = "package"; yang_parent_name = "packages"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Software::PackageDevices::PackageDevice::Packages::Package::~Package()
{
}

bool Install::Software::PackageDevices::PackageDevice::Packages::Package::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sub_pkg.len(); index++)
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
	|| name.is_set
	|| version.is_set
	|| description.is_set
	|| release.is_set
	|| vendor.is_set
	|| date.is_set
	|| source.is_set
	|| base.is_set
	|| bootable.is_set
	|| composite.is_set
	|| restart_info.is_set
	|| package_type.is_set
	|| group_type.is_set
	|| depth.is_set
	|| uncompressed_size.is_set
	|| compressed_size.is_set;
}

bool Install::Software::PackageDevices::PackageDevice::Packages::Package::has_operation() const
{
    for (std::size_t index=0; index<sub_pkg.len(); index++)
    {
        if(sub_pkg[index]->has_operation())
            return true;
    }
    for (auto const & leaf : cards.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(package_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(release.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(date.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(base.yfilter)
	|| ydk::is_set(bootable.yfilter)
	|| ydk::is_set(composite.yfilter)
	|| ydk::is_set(restart_info.yfilter)
	|| ydk::is_set(package_type.yfilter)
	|| ydk::is_set(group_type.yfilter)
	|| ydk::is_set(depth.yfilter)
	|| ydk::is_set(uncompressed_size.yfilter)
	|| ydk::is_set(compressed_size.yfilter)
	|| ydk::is_set(cards.yfilter);
}

std::string Install::Software::PackageDevices::PackageDevice::Packages::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    ADD_KEY_TOKEN(package_name, "package-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Software::PackageDevices::PackageDevice::Packages::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (package_name.is_set || is_set(package_name.yfilter)) leaf_name_data.push_back(package_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (release.is_set || is_set(release.yfilter)) leaf_name_data.push_back(release.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (date.is_set || is_set(date.yfilter)) leaf_name_data.push_back(date.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (base.is_set || is_set(base.yfilter)) leaf_name_data.push_back(base.get_name_leafdata());
    if (bootable.is_set || is_set(bootable.yfilter)) leaf_name_data.push_back(bootable.get_name_leafdata());
    if (composite.is_set || is_set(composite.yfilter)) leaf_name_data.push_back(composite.get_name_leafdata());
    if (restart_info.is_set || is_set(restart_info.yfilter)) leaf_name_data.push_back(restart_info.get_name_leafdata());
    if (package_type.is_set || is_set(package_type.yfilter)) leaf_name_data.push_back(package_type.get_name_leafdata());
    if (group_type.is_set || is_set(group_type.yfilter)) leaf_name_data.push_back(group_type.get_name_leafdata());
    if (depth.is_set || is_set(depth.yfilter)) leaf_name_data.push_back(depth.get_name_leafdata());
    if (uncompressed_size.is_set || is_set(uncompressed_size.yfilter)) leaf_name_data.push_back(uncompressed_size.get_name_leafdata());
    if (compressed_size.is_set || is_set(compressed_size.yfilter)) leaf_name_data.push_back(compressed_size.get_name_leafdata());

    auto cards_name_datas = cards.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cards_name_datas.begin(), cards_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Software::PackageDevices::PackageDevice::Packages::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sub-pkg")
    {
        auto ent_ = std::make_shared<Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg>();
        ent_->parent = this;
        sub_pkg.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Software::PackageDevices::PackageDevice::Packages::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sub_pkg.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::Software::PackageDevices::PackageDevice::Packages::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "package-name")
    {
        package_name = value;
        package_name.value_namespace = name_space;
        package_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "release")
    {
        release = value;
        release.value_namespace = name_space;
        release.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date")
    {
        date = value;
        date.value_namespace = name_space;
        date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base")
    {
        base = value;
        base.value_namespace = name_space;
        base.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bootable")
    {
        bootable = value;
        bootable.value_namespace = name_space;
        bootable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "composite")
    {
        composite = value;
        composite.value_namespace = name_space;
        composite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-info")
    {
        restart_info = value;
        restart_info.value_namespace = name_space;
        restart_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "package-type")
    {
        package_type = value;
        package_type.value_namespace = name_space;
        package_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-type")
    {
        group_type = value;
        group_type.value_namespace = name_space;
        group_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "depth")
    {
        depth = value;
        depth.value_namespace = name_space;
        depth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncompressed-size")
    {
        uncompressed_size = value;
        uncompressed_size.value_namespace = name_space;
        uncompressed_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compressed-size")
    {
        compressed_size = value;
        compressed_size.value_namespace = name_space;
        compressed_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cards")
    {
        cards.append(value);
    }
}

void Install::Software::PackageDevices::PackageDevice::Packages::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "package-name")
    {
        package_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "release")
    {
        release.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "date")
    {
        date.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "base")
    {
        base.yfilter = yfilter;
    }
    if(value_path == "bootable")
    {
        bootable.yfilter = yfilter;
    }
    if(value_path == "composite")
    {
        composite.yfilter = yfilter;
    }
    if(value_path == "restart-info")
    {
        restart_info.yfilter = yfilter;
    }
    if(value_path == "package-type")
    {
        package_type.yfilter = yfilter;
    }
    if(value_path == "group-type")
    {
        group_type.yfilter = yfilter;
    }
    if(value_path == "depth")
    {
        depth.yfilter = yfilter;
    }
    if(value_path == "uncompressed-size")
    {
        uncompressed_size.yfilter = yfilter;
    }
    if(value_path == "compressed-size")
    {
        compressed_size.yfilter = yfilter;
    }
    if(value_path == "cards")
    {
        cards.yfilter = yfilter;
    }
}

bool Install::Software::PackageDevices::PackageDevice::Packages::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-pkg" || name == "package-name" || name == "name" || name == "version" || name == "description" || name == "release" || name == "vendor" || name == "date" || name == "source" || name == "base" || name == "bootable" || name == "composite" || name == "restart-info" || name == "package-type" || name == "group-type" || name == "depth" || name == "uncompressed-size" || name == "compressed-size" || name == "cards")
        return true;
    return false;
}

Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg::SubPkg()
    :
    name{YType::str, "name"},
    node_types{YType::uint64, "node-types"}
{

    yang_name = "sub-pkg"; yang_parent_name = "package"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg::~SubPkg()
{
}

bool Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| node_types.is_set;
}

bool Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_types.yfilter);
}

std::string Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-pkg";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_types.is_set || is_set(node_types.yfilter)) leaf_name_data.push_back(node_types.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-types")
    {
        node_types = value;
        node_types.value_namespace = name_space;
        node_types.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-types")
    {
        node_types.yfilter = yfilter;
    }
}

bool Install::Software::PackageDevices::PackageDevice::Packages::Package::SubPkg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "node-types")
        return true;
    return false;
}

Install::Software::ComponentDevices::ComponentDevices()
    :
    component_device(this, {"device_name"})
{

    yang_name = "component-devices"; yang_parent_name = "software"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Software::ComponentDevices::~ComponentDevices()
{
}

bool Install::Software::ComponentDevices::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<component_device.len(); index++)
    {
        if(component_device[index]->has_data())
            return true;
    }
    return false;
}

bool Install::Software::ComponentDevices::has_operation() const
{
    for (std::size_t index=0; index<component_device.len(); index++)
    {
        if(component_device[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Install::Software::ComponentDevices::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Software::ComponentDevices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "component-devices";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Software::ComponentDevices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Software::ComponentDevices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "component-device")
    {
        auto ent_ = std::make_shared<Install::Software::ComponentDevices::ComponentDevice>();
        ent_->parent = this;
        component_device.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Software::ComponentDevices::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : component_device.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::Software::ComponentDevices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::Software::ComponentDevices::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::Software::ComponentDevices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "component-device")
        return true;
    return false;
}

Install::Software::ComponentDevices::ComponentDevice::ComponentDevice()
    :
    device_name{YType::str, "device-name"}
        ,
    component_packages(std::make_shared<Install::Software::ComponentDevices::ComponentDevice::ComponentPackages>())
{
    component_packages->parent = this;

    yang_name = "component-device"; yang_parent_name = "component-devices"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Software::ComponentDevices::ComponentDevice::~ComponentDevice()
{
}

bool Install::Software::ComponentDevices::ComponentDevice::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| (component_packages !=  nullptr && component_packages->has_data());
}

bool Install::Software::ComponentDevices::ComponentDevice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| (component_packages !=  nullptr && component_packages->has_operation());
}

std::string Install::Software::ComponentDevices::ComponentDevice::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software/component-devices/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Software::ComponentDevices::ComponentDevice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "component-device";
    ADD_KEY_TOKEN(device_name, "device-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Software::ComponentDevices::ComponentDevice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Software::ComponentDevices::ComponentDevice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "component-packages")
    {
        if(component_packages == nullptr)
        {
            component_packages = std::make_shared<Install::Software::ComponentDevices::ComponentDevice::ComponentPackages>();
        }
        return component_packages;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Software::ComponentDevices::ComponentDevice::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(component_packages != nullptr)
    {
        _children["component-packages"] = component_packages;
    }

    return _children;
}

void Install::Software::ComponentDevices::ComponentDevice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Software::ComponentDevices::ComponentDevice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
}

bool Install::Software::ComponentDevices::ComponentDevice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "component-packages" || name == "device-name")
        return true;
    return false;
}

Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackages()
    :
    component_package(this, {"package_name"})
{

    yang_name = "component-packages"; yang_parent_name = "component-device"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::~ComponentPackages()
{
}

bool Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<component_package.len(); index++)
    {
        if(component_package[index]->has_data())
            return true;
    }
    return false;
}

bool Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::has_operation() const
{
    for (std::size_t index=0; index<component_package.len(); index++)
    {
        if(component_package[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "component-packages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "component-package")
    {
        auto ent_ = std::make_shared<Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage>();
        ent_->parent = this;
        component_package.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : component_package.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "component-package")
        return true;
    return false;
}

Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::ComponentPackage()
    :
    package_name{YType::str, "package-name"}
        ,
    component(this, {"component_name"})
{

    yang_name = "component-package"; yang_parent_name = "component-packages"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::~ComponentPackage()
{
}

bool Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<component.len(); index++)
    {
        if(component[index]->has_data())
            return true;
    }
    return package_name.is_set;
}

bool Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::has_operation() const
{
    for (std::size_t index=0; index<component.len(); index++)
    {
        if(component[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(package_name.yfilter);
}

std::string Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "component-package";
    ADD_KEY_TOKEN(package_name, "package-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (package_name.is_set || is_set(package_name.yfilter)) leaf_name_data.push_back(package_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "component")
    {
        auto ent_ = std::make_shared<Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component>();
        ent_->parent = this;
        component.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : component.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "package-name")
    {
        package_name = value;
        package_name.value_namespace = name_space;
        package_name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "package-name")
    {
        package_name.yfilter = yfilter;
    }
}

bool Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "component" || name == "package-name")
        return true;
    return false;
}

Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component::Component()
    :
    component_name{YType::str, "component-name"},
    name{YType::str, "name"},
    version{YType::str, "version"},
    release{YType::str, "release"},
    description{YType::str, "description"},
    files{YType::str, "files"}
{

    yang_name = "component"; yang_parent_name = "component-package"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component::~Component()
{
}

bool Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : files.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return component_name.is_set
	|| name.is_set
	|| version.is_set
	|| release.is_set
	|| description.is_set;
}

bool Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component::has_operation() const
{
    for (auto const & leaf : files.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(component_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(release.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(files.yfilter);
}

std::string Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "component";
    ADD_KEY_TOKEN(component_name, "component-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (component_name.is_set || is_set(component_name.yfilter)) leaf_name_data.push_back(component_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (release.is_set || is_set(release.yfilter)) leaf_name_data.push_back(release.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    auto files_name_datas = files.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), files_name_datas.begin(), files_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "component-name")
    {
        component_name = value;
        component_name.value_namespace = name_space;
        component_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "release")
    {
        release = value;
        release.value_namespace = name_space;
        release.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "files")
    {
        files.append(value);
    }
}

void Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "component-name")
    {
        component_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "release")
    {
        release.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "files")
    {
        files.yfilter = yfilter;
    }
}

bool Install::Software::ComponentDevices::ComponentDevice::ComponentPackages::ComponentPackage::Component::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "component-name" || name == "name" || name == "version" || name == "release" || name == "description" || name == "files")
        return true;
    return false;
}

Install::SoftwareInventory::SoftwareInventory()
    :
    committed(std::make_shared<Install::SoftwareInventory::Committed>())
    , inactive(std::make_shared<Install::SoftwareInventory::Inactive>())
    , requests(std::make_shared<Install::SoftwareInventory::Requests>())
    , active(std::make_shared<Install::SoftwareInventory::Active>())
{
    committed->parent = this;
    inactive->parent = this;
    requests->parent = this;
    active->parent = this;

    yang_name = "software-inventory"; yang_parent_name = "install"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::~SoftwareInventory()
{
}

bool Install::SoftwareInventory::has_data() const
{
    if (is_presence_container) return true;
    return (committed !=  nullptr && committed->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (requests !=  nullptr && requests->has_data())
	|| (active !=  nullptr && active->has_data());
}

bool Install::SoftwareInventory::has_operation() const
{
    return is_set(yfilter)
	|| (committed !=  nullptr && committed->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (requests !=  nullptr && requests->has_operation())
	|| (active !=  nullptr && active->has_operation());
}

std::string Install::SoftwareInventory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "software-inventory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "committed")
    {
        if(committed == nullptr)
        {
            committed = std::make_shared<Install::SoftwareInventory::Committed>();
        }
        return committed;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<Install::SoftwareInventory::Inactive>();
        }
        return inactive;
    }

    if(child_yang_name == "requests")
    {
        if(requests == nullptr)
        {
            requests = std::make_shared<Install::SoftwareInventory::Requests>();
        }
        return requests;
    }

    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<Install::SoftwareInventory::Active>();
        }
        return active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(committed != nullptr)
    {
        _children["committed"] = committed;
    }

    if(inactive != nullptr)
    {
        _children["inactive"] = inactive;
    }

    if(requests != nullptr)
    {
        _children["requests"] = requests;
    }

    if(active != nullptr)
    {
        _children["active"] = active;
    }

    return _children;
}

void Install::SoftwareInventory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::SoftwareInventory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::SoftwareInventory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "committed" || name == "inactive" || name == "requests" || name == "active")
        return true;
    return false;
}

Install::SoftwareInventory::Committed::Committed()
    :
    summary(std::make_shared<Install::SoftwareInventory::Committed::Summary>())
    , inventories(std::make_shared<Install::SoftwareInventory::Committed::Inventories>())
{
    summary->parent = this;
    inventories->parent = this;

    yang_name = "committed"; yang_parent_name = "software-inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Committed::~Committed()
{
}

bool Install::SoftwareInventory::Committed::has_data() const
{
    if (is_presence_container) return true;
    return (summary !=  nullptr && summary->has_data())
	|| (inventories !=  nullptr && inventories->has_data());
}

bool Install::SoftwareInventory::Committed::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation())
	|| (inventories !=  nullptr && inventories->has_operation());
}

std::string Install::SoftwareInventory::Committed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Committed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "committed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Committed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Committed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Install::SoftwareInventory::Committed::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "inventories")
    {
        if(inventories == nullptr)
        {
            inventories = std::make_shared<Install::SoftwareInventory::Committed::Inventories>();
        }
        return inventories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Committed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(inventories != nullptr)
    {
        _children["inventories"] = inventories;
    }

    return _children;
}

void Install::SoftwareInventory::Committed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::SoftwareInventory::Committed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::SoftwareInventory::Committed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "inventories")
        return true;
    return false;
}

Install::SoftwareInventory::Committed::Summary::Summary()
    :
    default_load_path(std::make_shared<Install::SoftwareInventory::Committed::Summary::DefaultLoadPath>())
    , admin_load_path(std::make_shared<Install::SoftwareInventory::Committed::Summary::AdminLoadPath>())
    , sdr_load_path(this, {})
    , location_load_path(this, {})
{
    default_load_path->parent = this;
    admin_load_path->parent = this;

    yang_name = "summary"; yang_parent_name = "committed"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Committed::Summary::~Summary()
{
}

bool Install::SoftwareInventory::Committed::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sdr_load_path.len(); index++)
    {
        if(sdr_load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<location_load_path.len(); index++)
    {
        if(location_load_path[index]->has_data())
            return true;
    }
    return (default_load_path !=  nullptr && default_load_path->has_data())
	|| (admin_load_path !=  nullptr && admin_load_path->has_data());
}

bool Install::SoftwareInventory::Committed::Summary::has_operation() const
{
    for (std::size_t index=0; index<sdr_load_path.len(); index++)
    {
        if(sdr_load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<location_load_path.len(); index++)
    {
        if(location_load_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (default_load_path !=  nullptr && default_load_path->has_operation())
	|| (admin_load_path !=  nullptr && admin_load_path->has_operation());
}

std::string Install::SoftwareInventory::Committed::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Committed::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Committed::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Committed::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-load-path")
    {
        if(default_load_path == nullptr)
        {
            default_load_path = std::make_shared<Install::SoftwareInventory::Committed::Summary::DefaultLoadPath>();
        }
        return default_load_path;
    }

    if(child_yang_name == "admin-load-path")
    {
        if(admin_load_path == nullptr)
        {
            admin_load_path = std::make_shared<Install::SoftwareInventory::Committed::Summary::AdminLoadPath>();
        }
        return admin_load_path;
    }

    if(child_yang_name == "sdr-load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Committed::Summary::SdrLoadPath>();
        ent_->parent = this;
        sdr_load_path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "location-load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Committed::Summary::LocationLoadPath>();
        ent_->parent = this;
        location_load_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Committed::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_load_path != nullptr)
    {
        _children["default-load-path"] = default_load_path;
    }

    if(admin_load_path != nullptr)
    {
        _children["admin-load-path"] = admin_load_path;
    }

    count_ = 0;
    for (auto ent_ : sdr_load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : location_load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::SoftwareInventory::Committed::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::SoftwareInventory::Committed::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::SoftwareInventory::Committed::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-load-path" || name == "admin-load-path" || name == "sdr-load-path" || name == "location-load-path")
        return true;
    return false;
}

Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::DefaultLoadPath()
    :
    request_id{YType::uint32, "request-id"},
    admin_match{YType::boolean, "admin-match"},
    secure_domain_router_name{YType::str, "secure-domain-router-name"}
        ,
    load_path(this, {})
    , standby_load_path(this, {})
{

    yang_name = "default-load-path"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::~DefaultLoadPath()
{
}

bool Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.len(); index++)
    {
        if(standby_load_path[index]->has_data())
            return true;
    }
    for (auto const & leaf : secure_domain_router_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return request_id.is_set
	|| admin_match.is_set;
}

bool Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::has_operation() const
{
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.len(); index++)
    {
        if(standby_load_path[index]->has_operation())
            return true;
    }
    for (auto const & leaf : secure_domain_router_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(request_id.yfilter)
	|| ydk::is_set(admin_match.yfilter)
	|| ydk::is_set(secure_domain_router_name.yfilter);
}

std::string Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-load-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_id.is_set || is_set(request_id.yfilter)) leaf_name_data.push_back(request_id.get_name_leafdata());
    if (admin_match.is_set || is_set(admin_match.yfilter)) leaf_name_data.push_back(admin_match.get_name_leafdata());

    auto secure_domain_router_name_name_datas = secure_domain_router_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), secure_domain_router_name_name_datas.begin(), secure_domain_router_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath>();
        ent_->parent = this;
        load_path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "standby-load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath>();
        ent_->parent = this;
        standby_load_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : standby_load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request-id")
    {
        request_id = value;
        request_id.value_namespace = name_space;
        request_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-match")
    {
        admin_match = value;
        admin_match.value_namespace = name_space;
        admin_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name.append(value);
    }
}

void Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request-id")
    {
        request_id.yfilter = yfilter;
    }
    if(value_path == "admin-match")
    {
        admin_match.yfilter = yfilter;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-path" || name == "standby-load-path" || name == "request-id" || name == "admin-match" || name == "secure-domain-router-name")
        return true;
    return false;
}

Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::LoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package>())
{
    package->parent = this;

    yang_name = "load-path"; yang_parent_name = "default-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/default-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/default-load-path/load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::LoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::StandbyLoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package>())
{
    package->parent = this;

    yang_name = "standby-load-path"; yang_parent_name = "default-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::~StandbyLoadPath()
{
}

bool Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/default-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "standby-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/default-load-path/standby-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Committed::Summary::DefaultLoadPath::StandbyLoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::SoftwareInventory::Committed::Summary::AdminLoadPath::AdminLoadPath()
    :
    request_id{YType::uint32, "request-id"}
        ,
    load_path(this, {})
    , standby_load_path(this, {})
{

    yang_name = "admin-load-path"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Committed::Summary::AdminLoadPath::~AdminLoadPath()
{
}

bool Install::SoftwareInventory::Committed::Summary::AdminLoadPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.len(); index++)
    {
        if(standby_load_path[index]->has_data())
            return true;
    }
    return request_id.is_set;
}

bool Install::SoftwareInventory::Committed::Summary::AdminLoadPath::has_operation() const
{
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.len(); index++)
    {
        if(standby_load_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(request_id.yfilter);
}

std::string Install::SoftwareInventory::Committed::Summary::AdminLoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Committed::Summary::AdminLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-load-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Committed::Summary::AdminLoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_id.is_set || is_set(request_id.yfilter)) leaf_name_data.push_back(request_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Committed::Summary::AdminLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath>();
        ent_->parent = this;
        load_path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "standby-load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath>();
        ent_->parent = this;
        standby_load_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Committed::Summary::AdminLoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : standby_load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::SoftwareInventory::Committed::Summary::AdminLoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request-id")
    {
        request_id = value;
        request_id.value_namespace = name_space;
        request_id.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Committed::Summary::AdminLoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request-id")
    {
        request_id.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Committed::Summary::AdminLoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-path" || name == "standby-load-path" || name == "request-id")
        return true;
    return false;
}

Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::LoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package>())
{
    package->parent = this;

    yang_name = "load-path"; yang_parent_name = "admin-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/admin-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/admin-load-path/load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Committed::Summary::AdminLoadPath::LoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::StandbyLoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package>())
{
    package->parent = this;

    yang_name = "standby-load-path"; yang_parent_name = "admin-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::~StandbyLoadPath()
{
}

bool Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/admin-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "standby-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/admin-load-path/standby-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Committed::Summary::AdminLoadPath::StandbyLoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::SoftwareInventory::Committed::Summary::SdrLoadPath::SdrLoadPath()
    :
    request_id{YType::uint32, "request-id"},
    secure_domain_router_name{YType::str, "secure-domain-router-name"}
        ,
    load_path(this, {})
    , standby_load_path(this, {})
{

    yang_name = "sdr-load-path"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Committed::Summary::SdrLoadPath::~SdrLoadPath()
{
}

bool Install::SoftwareInventory::Committed::Summary::SdrLoadPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.len(); index++)
    {
        if(standby_load_path[index]->has_data())
            return true;
    }
    return request_id.is_set
	|| secure_domain_router_name.is_set;
}

bool Install::SoftwareInventory::Committed::Summary::SdrLoadPath::has_operation() const
{
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.len(); index++)
    {
        if(standby_load_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(request_id.yfilter)
	|| ydk::is_set(secure_domain_router_name.yfilter);
}

std::string Install::SoftwareInventory::Committed::Summary::SdrLoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Committed::Summary::SdrLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Committed::Summary::SdrLoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_id.is_set || is_set(request_id.yfilter)) leaf_name_data.push_back(request_id.get_name_leafdata());
    if (secure_domain_router_name.is_set || is_set(secure_domain_router_name.yfilter)) leaf_name_data.push_back(secure_domain_router_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Committed::Summary::SdrLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath>();
        ent_->parent = this;
        load_path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "standby-load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath>();
        ent_->parent = this;
        standby_load_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Committed::Summary::SdrLoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : standby_load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::SoftwareInventory::Committed::Summary::SdrLoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request-id")
    {
        request_id = value;
        request_id.value_namespace = name_space;
        request_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name = value;
        secure_domain_router_name.value_namespace = name_space;
        secure_domain_router_name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Committed::Summary::SdrLoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request-id")
    {
        request_id.yfilter = yfilter;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Committed::Summary::SdrLoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-path" || name == "standby-load-path" || name == "request-id" || name == "secure-domain-router-name")
        return true;
    return false;
}

Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::LoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package>())
{
    package->parent = this;

    yang_name = "load-path"; yang_parent_name = "sdr-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/sdr-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/sdr-load-path/load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Committed::Summary::SdrLoadPath::LoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::StandbyLoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package>())
{
    package->parent = this;

    yang_name = "standby-load-path"; yang_parent_name = "sdr-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::~StandbyLoadPath()
{
}

bool Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/sdr-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "standby-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/sdr-load-path/standby-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Committed::Summary::SdrLoadPath::StandbyLoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LocationLoadPath()
    :
    request_id{YType::uint32, "request-id"},
    secure_domain_router_name{YType::str, "secure-domain-router-name"},
    node_name{YType::str, "node-name"}
        ,
    load_path(this, {})
    , standby_load_path(this, {})
{

    yang_name = "location-load-path"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Committed::Summary::LocationLoadPath::~LocationLoadPath()
{
}

bool Install::SoftwareInventory::Committed::Summary::LocationLoadPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.len(); index++)
    {
        if(standby_load_path[index]->has_data())
            return true;
    }
    return request_id.is_set
	|| secure_domain_router_name.is_set
	|| node_name.is_set;
}

bool Install::SoftwareInventory::Committed::Summary::LocationLoadPath::has_operation() const
{
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.len(); index++)
    {
        if(standby_load_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(request_id.yfilter)
	|| ydk::is_set(secure_domain_router_name.yfilter)
	|| ydk::is_set(node_name.yfilter);
}

std::string Install::SoftwareInventory::Committed::Summary::LocationLoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Committed::Summary::LocationLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location-load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Committed::Summary::LocationLoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_id.is_set || is_set(request_id.yfilter)) leaf_name_data.push_back(request_id.get_name_leafdata());
    if (secure_domain_router_name.is_set || is_set(secure_domain_router_name.yfilter)) leaf_name_data.push_back(secure_domain_router_name.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Committed::Summary::LocationLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath>();
        ent_->parent = this;
        load_path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "standby-load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath>();
        ent_->parent = this;
        standby_load_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Committed::Summary::LocationLoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : standby_load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::SoftwareInventory::Committed::Summary::LocationLoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request-id")
    {
        request_id = value;
        request_id.value_namespace = name_space;
        request_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name = value;
        secure_domain_router_name.value_namespace = name_space;
        secure_domain_router_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Committed::Summary::LocationLoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request-id")
    {
        request_id.yfilter = yfilter;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Committed::Summary::LocationLoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-path" || name == "standby-load-path" || name == "request-id" || name == "secure-domain-router-name" || name == "node-name")
        return true;
    return false;
}

Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::LoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package>())
{
    package->parent = this;

    yang_name = "load-path"; yang_parent_name = "location-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/location-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/location-load-path/load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Committed::Summary::LocationLoadPath::LoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::StandbyLoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package>())
{
    package->parent = this;

    yang_name = "standby-load-path"; yang_parent_name = "location-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::~StandbyLoadPath()
{
}

bool Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/location-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "standby-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/summary/location-load-path/standby-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Committed::Summary::LocationLoadPath::StandbyLoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::SoftwareInventory::Committed::Inventories::Inventories()
    :
    inventory(this, {"node_name"})
{

    yang_name = "inventories"; yang_parent_name = "committed"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Committed::Inventories::~Inventories()
{
}

bool Install::SoftwareInventory::Committed::Inventories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<inventory.len(); index++)
    {
        if(inventory[index]->has_data())
            return true;
    }
    return false;
}

bool Install::SoftwareInventory::Committed::Inventories::has_operation() const
{
    for (std::size_t index=0; index<inventory.len(); index++)
    {
        if(inventory[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Install::SoftwareInventory::Committed::Inventories::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Committed::Inventories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Committed::Inventories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Committed::Inventories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inventory")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Committed::Inventories::Inventory>();
        ent_->parent = this;
        inventory.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Committed::Inventories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : inventory.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::SoftwareInventory::Committed::Inventories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::SoftwareInventory::Committed::Inventories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::SoftwareInventory::Committed::Inventories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inventory")
        return true;
    return false;
}

Install::SoftwareInventory::Committed::Inventories::Inventory::Inventory()
    :
    node_name{YType::str, "node-name"},
    major_{YType::uint32, "major"},
    minor{YType::uint32, "minor"},
    boot_image_name{YType::str, "boot-image-name"},
    node_type{YType::uint64, "node-type"},
    secure_domain_router_name{YType::str, "secure-domain-router-name"}
        ,
    load_path(this, {})
{

    yang_name = "inventory"; yang_parent_name = "inventories"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Committed::Inventories::Inventory::~Inventory()
{
}

bool Install::SoftwareInventory::Committed::Inventories::Inventory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| major_.is_set
	|| minor.is_set
	|| boot_image_name.is_set
	|| node_type.is_set
	|| secure_domain_router_name.is_set;
}

bool Install::SoftwareInventory::Committed::Inventories::Inventory::has_operation() const
{
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(major_.yfilter)
	|| ydk::is_set(minor.yfilter)
	|| ydk::is_set(boot_image_name.yfilter)
	|| ydk::is_set(node_type.yfilter)
	|| ydk::is_set(secure_domain_router_name.yfilter);
}

std::string Install::SoftwareInventory::Committed::Inventories::Inventory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/committed/inventories/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Committed::Inventories::Inventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventory";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Committed::Inventories::Inventory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (major_.is_set || is_set(major_.yfilter)) leaf_name_data.push_back(major_.get_name_leafdata());
    if (minor.is_set || is_set(minor.yfilter)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (boot_image_name.is_set || is_set(boot_image_name.yfilter)) leaf_name_data.push_back(boot_image_name.get_name_leafdata());
    if (node_type.is_set || is_set(node_type.yfilter)) leaf_name_data.push_back(node_type.get_name_leafdata());
    if (secure_domain_router_name.is_set || is_set(secure_domain_router_name.yfilter)) leaf_name_data.push_back(secure_domain_router_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Committed::Inventories::Inventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath>();
        ent_->parent = this;
        load_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Committed::Inventories::Inventory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::SoftwareInventory::Committed::Inventories::Inventory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "major")
    {
        major_ = value;
        major_.value_namespace = name_space;
        major_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor")
    {
        minor = value;
        minor.value_namespace = name_space;
        minor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-image-name")
    {
        boot_image_name = value;
        boot_image_name.value_namespace = name_space;
        boot_image_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-type")
    {
        node_type = value;
        node_type.value_namespace = name_space;
        node_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name = value;
        secure_domain_router_name.value_namespace = name_space;
        secure_domain_router_name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Committed::Inventories::Inventory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "major")
    {
        major_.yfilter = yfilter;
    }
    if(value_path == "minor")
    {
        minor.yfilter = yfilter;
    }
    if(value_path == "boot-image-name")
    {
        boot_image_name.yfilter = yfilter;
    }
    if(value_path == "node-type")
    {
        node_type.yfilter = yfilter;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Committed::Inventories::Inventory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-path" || name == "node-name" || name == "major" || name == "minor" || name == "boot-image-name" || name == "node-type" || name == "secure-domain-router-name")
        return true;
    return false;
}

Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::LoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package>())
{
    package->parent = this;

    yang_name = "load-path"; yang_parent_name = "inventory"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "load-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Committed::Inventories::Inventory::LoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::SoftwareInventory::Inactive::Inactive()
    :
    summary(std::make_shared<Install::SoftwareInventory::Inactive::Summary>())
    , inventories(std::make_shared<Install::SoftwareInventory::Inactive::Inventories>())
{
    summary->parent = this;
    inventories->parent = this;

    yang_name = "inactive"; yang_parent_name = "software-inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Inactive::~Inactive()
{
}

bool Install::SoftwareInventory::Inactive::has_data() const
{
    if (is_presence_container) return true;
    return (summary !=  nullptr && summary->has_data())
	|| (inventories !=  nullptr && inventories->has_data());
}

bool Install::SoftwareInventory::Inactive::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation())
	|| (inventories !=  nullptr && inventories->has_operation());
}

std::string Install::SoftwareInventory::Inactive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Inactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Install::SoftwareInventory::Inactive::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "inventories")
    {
        if(inventories == nullptr)
        {
            inventories = std::make_shared<Install::SoftwareInventory::Inactive::Inventories>();
        }
        return inventories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(inventories != nullptr)
    {
        _children["inventories"] = inventories;
    }

    return _children;
}

void Install::SoftwareInventory::Inactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::SoftwareInventory::Inactive::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::SoftwareInventory::Inactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "inventories")
        return true;
    return false;
}

Install::SoftwareInventory::Inactive::Summary::Summary()
    :
    default_load_path(std::make_shared<Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath>())
    , admin_load_path(std::make_shared<Install::SoftwareInventory::Inactive::Summary::AdminLoadPath>())
    , sdr_load_path(this, {})
    , location_load_path(this, {})
{
    default_load_path->parent = this;
    admin_load_path->parent = this;

    yang_name = "summary"; yang_parent_name = "inactive"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Inactive::Summary::~Summary()
{
}

bool Install::SoftwareInventory::Inactive::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sdr_load_path.len(); index++)
    {
        if(sdr_load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<location_load_path.len(); index++)
    {
        if(location_load_path[index]->has_data())
            return true;
    }
    return (default_load_path !=  nullptr && default_load_path->has_data())
	|| (admin_load_path !=  nullptr && admin_load_path->has_data());
}

bool Install::SoftwareInventory::Inactive::Summary::has_operation() const
{
    for (std::size_t index=0; index<sdr_load_path.len(); index++)
    {
        if(sdr_load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<location_load_path.len(); index++)
    {
        if(location_load_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (default_load_path !=  nullptr && default_load_path->has_operation())
	|| (admin_load_path !=  nullptr && admin_load_path->has_operation());
}

std::string Install::SoftwareInventory::Inactive::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Inactive::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Inactive::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Inactive::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-load-path")
    {
        if(default_load_path == nullptr)
        {
            default_load_path = std::make_shared<Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath>();
        }
        return default_load_path;
    }

    if(child_yang_name == "admin-load-path")
    {
        if(admin_load_path == nullptr)
        {
            admin_load_path = std::make_shared<Install::SoftwareInventory::Inactive::Summary::AdminLoadPath>();
        }
        return admin_load_path;
    }

    if(child_yang_name == "sdr-load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Inactive::Summary::SdrLoadPath>();
        ent_->parent = this;
        sdr_load_path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "location-load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Inactive::Summary::LocationLoadPath>();
        ent_->parent = this;
        location_load_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Inactive::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_load_path != nullptr)
    {
        _children["default-load-path"] = default_load_path;
    }

    if(admin_load_path != nullptr)
    {
        _children["admin-load-path"] = admin_load_path;
    }

    count_ = 0;
    for (auto ent_ : sdr_load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : location_load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::SoftwareInventory::Inactive::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::SoftwareInventory::Inactive::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::SoftwareInventory::Inactive::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-load-path" || name == "admin-load-path" || name == "sdr-load-path" || name == "location-load-path")
        return true;
    return false;
}

Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::DefaultLoadPath()
    :
    request_id{YType::uint32, "request-id"},
    admin_match{YType::boolean, "admin-match"},
    secure_domain_router_name{YType::str, "secure-domain-router-name"}
        ,
    load_path(this, {})
    , standby_load_path(this, {})
{

    yang_name = "default-load-path"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::~DefaultLoadPath()
{
}

bool Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.len(); index++)
    {
        if(standby_load_path[index]->has_data())
            return true;
    }
    for (auto const & leaf : secure_domain_router_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return request_id.is_set
	|| admin_match.is_set;
}

bool Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::has_operation() const
{
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.len(); index++)
    {
        if(standby_load_path[index]->has_operation())
            return true;
    }
    for (auto const & leaf : secure_domain_router_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(request_id.yfilter)
	|| ydk::is_set(admin_match.yfilter)
	|| ydk::is_set(secure_domain_router_name.yfilter);
}

std::string Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-load-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_id.is_set || is_set(request_id.yfilter)) leaf_name_data.push_back(request_id.get_name_leafdata());
    if (admin_match.is_set || is_set(admin_match.yfilter)) leaf_name_data.push_back(admin_match.get_name_leafdata());

    auto secure_domain_router_name_name_datas = secure_domain_router_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), secure_domain_router_name_name_datas.begin(), secure_domain_router_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath>();
        ent_->parent = this;
        load_path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "standby-load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath>();
        ent_->parent = this;
        standby_load_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : standby_load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request-id")
    {
        request_id = value;
        request_id.value_namespace = name_space;
        request_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-match")
    {
        admin_match = value;
        admin_match.value_namespace = name_space;
        admin_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name.append(value);
    }
}

void Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request-id")
    {
        request_id.yfilter = yfilter;
    }
    if(value_path == "admin-match")
    {
        admin_match.yfilter = yfilter;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-path" || name == "standby-load-path" || name == "request-id" || name == "admin-match" || name == "secure-domain-router-name")
        return true;
    return false;
}

Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::LoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package>())
{
    package->parent = this;

    yang_name = "load-path"; yang_parent_name = "default-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/default-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/default-load-path/load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::LoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::StandbyLoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package>())
{
    package->parent = this;

    yang_name = "standby-load-path"; yang_parent_name = "default-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::~StandbyLoadPath()
{
}

bool Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/default-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "standby-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/default-load-path/standby-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Inactive::Summary::DefaultLoadPath::StandbyLoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::AdminLoadPath()
    :
    request_id{YType::uint32, "request-id"}
        ,
    load_path(this, {})
    , standby_load_path(this, {})
{

    yang_name = "admin-load-path"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::~AdminLoadPath()
{
}

bool Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.len(); index++)
    {
        if(standby_load_path[index]->has_data())
            return true;
    }
    return request_id.is_set;
}

bool Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::has_operation() const
{
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.len(); index++)
    {
        if(standby_load_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(request_id.yfilter);
}

std::string Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-load-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_id.is_set || is_set(request_id.yfilter)) leaf_name_data.push_back(request_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath>();
        ent_->parent = this;
        load_path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "standby-load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath>();
        ent_->parent = this;
        standby_load_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : standby_load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request-id")
    {
        request_id = value;
        request_id.value_namespace = name_space;
        request_id.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request-id")
    {
        request_id.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-path" || name == "standby-load-path" || name == "request-id")
        return true;
    return false;
}

Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::LoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package>())
{
    package->parent = this;

    yang_name = "load-path"; yang_parent_name = "admin-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/admin-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/admin-load-path/load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::LoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::StandbyLoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package>())
{
    package->parent = this;

    yang_name = "standby-load-path"; yang_parent_name = "admin-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::~StandbyLoadPath()
{
}

bool Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/admin-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "standby-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/admin-load-path/standby-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Inactive::Summary::AdminLoadPath::StandbyLoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::SdrLoadPath()
    :
    request_id{YType::uint32, "request-id"},
    secure_domain_router_name{YType::str, "secure-domain-router-name"}
        ,
    load_path(this, {})
    , standby_load_path(this, {})
{

    yang_name = "sdr-load-path"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::~SdrLoadPath()
{
}

bool Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.len(); index++)
    {
        if(standby_load_path[index]->has_data())
            return true;
    }
    return request_id.is_set
	|| secure_domain_router_name.is_set;
}

bool Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::has_operation() const
{
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.len(); index++)
    {
        if(standby_load_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(request_id.yfilter)
	|| ydk::is_set(secure_domain_router_name.yfilter);
}

std::string Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_id.is_set || is_set(request_id.yfilter)) leaf_name_data.push_back(request_id.get_name_leafdata());
    if (secure_domain_router_name.is_set || is_set(secure_domain_router_name.yfilter)) leaf_name_data.push_back(secure_domain_router_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath>();
        ent_->parent = this;
        load_path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "standby-load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath>();
        ent_->parent = this;
        standby_load_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : standby_load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request-id")
    {
        request_id = value;
        request_id.value_namespace = name_space;
        request_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name = value;
        secure_domain_router_name.value_namespace = name_space;
        secure_domain_router_name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request-id")
    {
        request_id.yfilter = yfilter;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-path" || name == "standby-load-path" || name == "request-id" || name == "secure-domain-router-name")
        return true;
    return false;
}

Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::LoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package>())
{
    package->parent = this;

    yang_name = "load-path"; yang_parent_name = "sdr-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/sdr-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/sdr-load-path/load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::LoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::StandbyLoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package>())
{
    package->parent = this;

    yang_name = "standby-load-path"; yang_parent_name = "sdr-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::~StandbyLoadPath()
{
}

bool Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/sdr-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "standby-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/sdr-load-path/standby-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Inactive::Summary::SdrLoadPath::StandbyLoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LocationLoadPath()
    :
    request_id{YType::uint32, "request-id"},
    secure_domain_router_name{YType::str, "secure-domain-router-name"},
    node_name{YType::str, "node-name"}
        ,
    load_path(this, {})
    , standby_load_path(this, {})
{

    yang_name = "location-load-path"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::~LocationLoadPath()
{
}

bool Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.len(); index++)
    {
        if(standby_load_path[index]->has_data())
            return true;
    }
    return request_id.is_set
	|| secure_domain_router_name.is_set
	|| node_name.is_set;
}

bool Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::has_operation() const
{
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.len(); index++)
    {
        if(standby_load_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(request_id.yfilter)
	|| ydk::is_set(secure_domain_router_name.yfilter)
	|| ydk::is_set(node_name.yfilter);
}

std::string Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location-load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_id.is_set || is_set(request_id.yfilter)) leaf_name_data.push_back(request_id.get_name_leafdata());
    if (secure_domain_router_name.is_set || is_set(secure_domain_router_name.yfilter)) leaf_name_data.push_back(secure_domain_router_name.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath>();
        ent_->parent = this;
        load_path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "standby-load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath>();
        ent_->parent = this;
        standby_load_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : standby_load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request-id")
    {
        request_id = value;
        request_id.value_namespace = name_space;
        request_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name = value;
        secure_domain_router_name.value_namespace = name_space;
        secure_domain_router_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request-id")
    {
        request_id.yfilter = yfilter;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-path" || name == "standby-load-path" || name == "request-id" || name == "secure-domain-router-name" || name == "node-name")
        return true;
    return false;
}

Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::LoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package>())
{
    package->parent = this;

    yang_name = "load-path"; yang_parent_name = "location-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/location-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/location-load-path/load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::LoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::StandbyLoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package>())
{
    package->parent = this;

    yang_name = "standby-load-path"; yang_parent_name = "location-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::~StandbyLoadPath()
{
}

bool Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/location-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "standby-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/summary/location-load-path/standby-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Inactive::Summary::LocationLoadPath::StandbyLoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::SoftwareInventory::Inactive::Inventories::Inventories()
    :
    inventory(this, {"node_name"})
{

    yang_name = "inventories"; yang_parent_name = "inactive"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Inactive::Inventories::~Inventories()
{
}

bool Install::SoftwareInventory::Inactive::Inventories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<inventory.len(); index++)
    {
        if(inventory[index]->has_data())
            return true;
    }
    return false;
}

bool Install::SoftwareInventory::Inactive::Inventories::has_operation() const
{
    for (std::size_t index=0; index<inventory.len(); index++)
    {
        if(inventory[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Install::SoftwareInventory::Inactive::Inventories::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Inactive::Inventories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Inactive::Inventories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Inactive::Inventories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inventory")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Inactive::Inventories::Inventory>();
        ent_->parent = this;
        inventory.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Inactive::Inventories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : inventory.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::SoftwareInventory::Inactive::Inventories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::SoftwareInventory::Inactive::Inventories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::SoftwareInventory::Inactive::Inventories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inventory")
        return true;
    return false;
}

Install::SoftwareInventory::Inactive::Inventories::Inventory::Inventory()
    :
    node_name{YType::str, "node-name"},
    major_{YType::uint32, "major"},
    minor{YType::uint32, "minor"},
    boot_image_name{YType::str, "boot-image-name"},
    node_type{YType::uint64, "node-type"},
    secure_domain_router_name{YType::str, "secure-domain-router-name"}
        ,
    load_path(this, {})
{

    yang_name = "inventory"; yang_parent_name = "inventories"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Inactive::Inventories::Inventory::~Inventory()
{
}

bool Install::SoftwareInventory::Inactive::Inventories::Inventory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| major_.is_set
	|| minor.is_set
	|| boot_image_name.is_set
	|| node_type.is_set
	|| secure_domain_router_name.is_set;
}

bool Install::SoftwareInventory::Inactive::Inventories::Inventory::has_operation() const
{
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(major_.yfilter)
	|| ydk::is_set(minor.yfilter)
	|| ydk::is_set(boot_image_name.yfilter)
	|| ydk::is_set(node_type.yfilter)
	|| ydk::is_set(secure_domain_router_name.yfilter);
}

std::string Install::SoftwareInventory::Inactive::Inventories::Inventory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/inactive/inventories/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Inactive::Inventories::Inventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventory";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Inactive::Inventories::Inventory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (major_.is_set || is_set(major_.yfilter)) leaf_name_data.push_back(major_.get_name_leafdata());
    if (minor.is_set || is_set(minor.yfilter)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (boot_image_name.is_set || is_set(boot_image_name.yfilter)) leaf_name_data.push_back(boot_image_name.get_name_leafdata());
    if (node_type.is_set || is_set(node_type.yfilter)) leaf_name_data.push_back(node_type.get_name_leafdata());
    if (secure_domain_router_name.is_set || is_set(secure_domain_router_name.yfilter)) leaf_name_data.push_back(secure_domain_router_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Inactive::Inventories::Inventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath>();
        ent_->parent = this;
        load_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Inactive::Inventories::Inventory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::SoftwareInventory::Inactive::Inventories::Inventory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "major")
    {
        major_ = value;
        major_.value_namespace = name_space;
        major_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor")
    {
        minor = value;
        minor.value_namespace = name_space;
        minor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-image-name")
    {
        boot_image_name = value;
        boot_image_name.value_namespace = name_space;
        boot_image_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-type")
    {
        node_type = value;
        node_type.value_namespace = name_space;
        node_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name = value;
        secure_domain_router_name.value_namespace = name_space;
        secure_domain_router_name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Inactive::Inventories::Inventory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "major")
    {
        major_.yfilter = yfilter;
    }
    if(value_path == "minor")
    {
        minor.yfilter = yfilter;
    }
    if(value_path == "boot-image-name")
    {
        boot_image_name.yfilter = yfilter;
    }
    if(value_path == "node-type")
    {
        node_type.yfilter = yfilter;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Inactive::Inventories::Inventory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-path" || name == "node-name" || name == "major" || name == "minor" || name == "boot-image-name" || name == "node-type" || name == "secure-domain-router-name")
        return true;
    return false;
}

Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::LoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package>())
{
    package->parent = this;

    yang_name = "load-path"; yang_parent_name = "inventory"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "load-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Inactive::Inventories::Inventory::LoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::SoftwareInventory::Requests::Requests()
    :
    requests(std::make_shared<Install::SoftwareInventory::Requests::Requests_>())
{
    requests->parent = this;

    yang_name = "requests"; yang_parent_name = "software-inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Requests::~Requests()
{
}

bool Install::SoftwareInventory::Requests::has_data() const
{
    if (is_presence_container) return true;
    return (requests !=  nullptr && requests->has_data());
}

bool Install::SoftwareInventory::Requests::has_operation() const
{
    return is_set(yfilter)
	|| (requests !=  nullptr && requests->has_operation());
}

std::string Install::SoftwareInventory::Requests::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Requests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Requests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Requests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "requests")
    {
        if(requests == nullptr)
        {
            requests = std::make_shared<Install::SoftwareInventory::Requests::Requests_>();
        }
        return requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Requests::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(requests != nullptr)
    {
        _children["requests"] = requests;
    }

    return _children;
}

void Install::SoftwareInventory::Requests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::SoftwareInventory::Requests::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::SoftwareInventory::Requests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "requests")
        return true;
    return false;
}

Install::SoftwareInventory::Requests::Requests_::Requests_()
    :
    request(this, {"request_id"})
{

    yang_name = "requests"; yang_parent_name = "requests"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Requests::Requests_::~Requests_()
{
}

bool Install::SoftwareInventory::Requests::Requests_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<request.len(); index++)
    {
        if(request[index]->has_data())
            return true;
    }
    return false;
}

bool Install::SoftwareInventory::Requests::Requests_::has_operation() const
{
    for (std::size_t index=0; index<request.len(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Install::SoftwareInventory::Requests::Requests_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/requests/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Requests::Requests_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Requests::Requests_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Requests::Requests_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Requests::Requests_::Request>();
        ent_->parent = this;
        request.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Requests::Requests_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : request.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::SoftwareInventory::Requests::Requests_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::SoftwareInventory::Requests::Requests_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::SoftwareInventory::Requests::Requests_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request")
        return true;
    return false;
}

Install::SoftwareInventory::Requests::Requests_::Request::Request()
    :
    request_id{YType::uint32, "request-id"}
        ,
    inventories(std::make_shared<Install::SoftwareInventory::Requests::Requests_::Request::Inventories>())
{
    inventories->parent = this;

    yang_name = "request"; yang_parent_name = "requests"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Requests::Requests_::Request::~Request()
{
}

bool Install::SoftwareInventory::Requests::Requests_::Request::has_data() const
{
    if (is_presence_container) return true;
    return request_id.is_set
	|| (inventories !=  nullptr && inventories->has_data());
}

bool Install::SoftwareInventory::Requests::Requests_::Request::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(request_id.yfilter)
	|| (inventories !=  nullptr && inventories->has_operation());
}

std::string Install::SoftwareInventory::Requests::Requests_::Request::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/requests/requests/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Requests::Requests_::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    ADD_KEY_TOKEN(request_id, "request-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Requests::Requests_::Request::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_id.is_set || is_set(request_id.yfilter)) leaf_name_data.push_back(request_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Requests::Requests_::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inventories")
    {
        if(inventories == nullptr)
        {
            inventories = std::make_shared<Install::SoftwareInventory::Requests::Requests_::Request::Inventories>();
        }
        return inventories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Requests::Requests_::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inventories != nullptr)
    {
        _children["inventories"] = inventories;
    }

    return _children;
}

void Install::SoftwareInventory::Requests::Requests_::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request-id")
    {
        request_id = value;
        request_id.value_namespace = name_space;
        request_id.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Requests::Requests_::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request-id")
    {
        request_id.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Requests::Requests_::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inventories" || name == "request-id")
        return true;
    return false;
}

Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventories()
    :
    inventory(this, {"node_name"})
{

    yang_name = "inventories"; yang_parent_name = "request"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::SoftwareInventory::Requests::Requests_::Request::Inventories::~Inventories()
{
}

bool Install::SoftwareInventory::Requests::Requests_::Request::Inventories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<inventory.len(); index++)
    {
        if(inventory[index]->has_data())
            return true;
    }
    return false;
}

bool Install::SoftwareInventory::Requests::Requests_::Request::Inventories::has_operation() const
{
    for (std::size_t index=0; index<inventory.len(); index++)
    {
        if(inventory[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Install::SoftwareInventory::Requests::Requests_::Request::Inventories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Requests::Requests_::Request::Inventories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Requests::Requests_::Request::Inventories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inventory")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory>();
        ent_->parent = this;
        inventory.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Requests::Requests_::Request::Inventories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : inventory.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::SoftwareInventory::Requests::Requests_::Request::Inventories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::SoftwareInventory::Requests::Requests_::Request::Inventories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::SoftwareInventory::Requests::Requests_::Request::Inventories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inventory")
        return true;
    return false;
}

Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::Inventory()
    :
    node_name{YType::str, "node-name"},
    major_{YType::uint32, "major"},
    minor{YType::uint32, "minor"},
    boot_image_name{YType::str, "boot-image-name"},
    node_type{YType::uint64, "node-type"},
    secure_domain_router_name{YType::str, "secure-domain-router-name"}
        ,
    load_path(this, {})
{

    yang_name = "inventory"; yang_parent_name = "inventories"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::~Inventory()
{
}

bool Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| major_.is_set
	|| minor.is_set
	|| boot_image_name.is_set
	|| node_type.is_set
	|| secure_domain_router_name.is_set;
}

bool Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::has_operation() const
{
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(major_.yfilter)
	|| ydk::is_set(minor.yfilter)
	|| ydk::is_set(boot_image_name.yfilter)
	|| ydk::is_set(node_type.yfilter)
	|| ydk::is_set(secure_domain_router_name.yfilter);
}

std::string Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventory";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (major_.is_set || is_set(major_.yfilter)) leaf_name_data.push_back(major_.get_name_leafdata());
    if (minor.is_set || is_set(minor.yfilter)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (boot_image_name.is_set || is_set(boot_image_name.yfilter)) leaf_name_data.push_back(boot_image_name.get_name_leafdata());
    if (node_type.is_set || is_set(node_type.yfilter)) leaf_name_data.push_back(node_type.get_name_leafdata());
    if (secure_domain_router_name.is_set || is_set(secure_domain_router_name.yfilter)) leaf_name_data.push_back(secure_domain_router_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath>();
        ent_->parent = this;
        load_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "major")
    {
        major_ = value;
        major_.value_namespace = name_space;
        major_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor")
    {
        minor = value;
        minor.value_namespace = name_space;
        minor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-image-name")
    {
        boot_image_name = value;
        boot_image_name.value_namespace = name_space;
        boot_image_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-type")
    {
        node_type = value;
        node_type.value_namespace = name_space;
        node_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name = value;
        secure_domain_router_name.value_namespace = name_space;
        secure_domain_router_name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "major")
    {
        major_.yfilter = yfilter;
    }
    if(value_path == "minor")
    {
        minor.yfilter = yfilter;
    }
    if(value_path == "boot-image-name")
    {
        boot_image_name.yfilter = yfilter;
    }
    if(value_path == "node-type")
    {
        node_type.yfilter = yfilter;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-path" || name == "node-name" || name == "major" || name == "minor" || name == "boot-image-name" || name == "node-type" || name == "secure-domain-router-name")
        return true;
    return false;
}

Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::LoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package>())
{
    package->parent = this;

    yang_name = "load-path"; yang_parent_name = "inventory"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "load-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::SoftwareInventory::Active::Active()
    :
    summary(std::make_shared<Install::SoftwareInventory::Active::Summary>())
    , inventories(std::make_shared<Install::SoftwareInventory::Active::Inventories>())
{
    summary->parent = this;
    inventories->parent = this;

    yang_name = "active"; yang_parent_name = "software-inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Active::~Active()
{
}

bool Install::SoftwareInventory::Active::has_data() const
{
    if (is_presence_container) return true;
    return (summary !=  nullptr && summary->has_data())
	|| (inventories !=  nullptr && inventories->has_data());
}

bool Install::SoftwareInventory::Active::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation())
	|| (inventories !=  nullptr && inventories->has_operation());
}

std::string Install::SoftwareInventory::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Install::SoftwareInventory::Active::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "inventories")
    {
        if(inventories == nullptr)
        {
            inventories = std::make_shared<Install::SoftwareInventory::Active::Inventories>();
        }
        return inventories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(inventories != nullptr)
    {
        _children["inventories"] = inventories;
    }

    return _children;
}

void Install::SoftwareInventory::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::SoftwareInventory::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::SoftwareInventory::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "inventories")
        return true;
    return false;
}

Install::SoftwareInventory::Active::Summary::Summary()
    :
    default_load_path(std::make_shared<Install::SoftwareInventory::Active::Summary::DefaultLoadPath>())
    , admin_load_path(std::make_shared<Install::SoftwareInventory::Active::Summary::AdminLoadPath>())
    , sdr_load_path(this, {})
    , location_load_path(this, {})
{
    default_load_path->parent = this;
    admin_load_path->parent = this;

    yang_name = "summary"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Active::Summary::~Summary()
{
}

bool Install::SoftwareInventory::Active::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sdr_load_path.len(); index++)
    {
        if(sdr_load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<location_load_path.len(); index++)
    {
        if(location_load_path[index]->has_data())
            return true;
    }
    return (default_load_path !=  nullptr && default_load_path->has_data())
	|| (admin_load_path !=  nullptr && admin_load_path->has_data());
}

bool Install::SoftwareInventory::Active::Summary::has_operation() const
{
    for (std::size_t index=0; index<sdr_load_path.len(); index++)
    {
        if(sdr_load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<location_load_path.len(); index++)
    {
        if(location_load_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (default_load_path !=  nullptr && default_load_path->has_operation())
	|| (admin_load_path !=  nullptr && admin_load_path->has_operation());
}

std::string Install::SoftwareInventory::Active::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Active::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Active::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Active::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-load-path")
    {
        if(default_load_path == nullptr)
        {
            default_load_path = std::make_shared<Install::SoftwareInventory::Active::Summary::DefaultLoadPath>();
        }
        return default_load_path;
    }

    if(child_yang_name == "admin-load-path")
    {
        if(admin_load_path == nullptr)
        {
            admin_load_path = std::make_shared<Install::SoftwareInventory::Active::Summary::AdminLoadPath>();
        }
        return admin_load_path;
    }

    if(child_yang_name == "sdr-load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Active::Summary::SdrLoadPath>();
        ent_->parent = this;
        sdr_load_path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "location-load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Active::Summary::LocationLoadPath>();
        ent_->parent = this;
        location_load_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Active::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_load_path != nullptr)
    {
        _children["default-load-path"] = default_load_path;
    }

    if(admin_load_path != nullptr)
    {
        _children["admin-load-path"] = admin_load_path;
    }

    count_ = 0;
    for (auto ent_ : sdr_load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : location_load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::SoftwareInventory::Active::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::SoftwareInventory::Active::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::SoftwareInventory::Active::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-load-path" || name == "admin-load-path" || name == "sdr-load-path" || name == "location-load-path")
        return true;
    return false;
}

Install::SoftwareInventory::Active::Summary::DefaultLoadPath::DefaultLoadPath()
    :
    request_id{YType::uint32, "request-id"},
    admin_match{YType::boolean, "admin-match"},
    secure_domain_router_name{YType::str, "secure-domain-router-name"}
        ,
    load_path(this, {})
    , standby_load_path(this, {})
{

    yang_name = "default-load-path"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Active::Summary::DefaultLoadPath::~DefaultLoadPath()
{
}

bool Install::SoftwareInventory::Active::Summary::DefaultLoadPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.len(); index++)
    {
        if(standby_load_path[index]->has_data())
            return true;
    }
    for (auto const & leaf : secure_domain_router_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return request_id.is_set
	|| admin_match.is_set;
}

bool Install::SoftwareInventory::Active::Summary::DefaultLoadPath::has_operation() const
{
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.len(); index++)
    {
        if(standby_load_path[index]->has_operation())
            return true;
    }
    for (auto const & leaf : secure_domain_router_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(request_id.yfilter)
	|| ydk::is_set(admin_match.yfilter)
	|| ydk::is_set(secure_domain_router_name.yfilter);
}

std::string Install::SoftwareInventory::Active::Summary::DefaultLoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Active::Summary::DefaultLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-load-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Active::Summary::DefaultLoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_id.is_set || is_set(request_id.yfilter)) leaf_name_data.push_back(request_id.get_name_leafdata());
    if (admin_match.is_set || is_set(admin_match.yfilter)) leaf_name_data.push_back(admin_match.get_name_leafdata());

    auto secure_domain_router_name_name_datas = secure_domain_router_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), secure_domain_router_name_name_datas.begin(), secure_domain_router_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Active::Summary::DefaultLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath>();
        ent_->parent = this;
        load_path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "standby-load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath>();
        ent_->parent = this;
        standby_load_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Active::Summary::DefaultLoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : standby_load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::SoftwareInventory::Active::Summary::DefaultLoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request-id")
    {
        request_id = value;
        request_id.value_namespace = name_space;
        request_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-match")
    {
        admin_match = value;
        admin_match.value_namespace = name_space;
        admin_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name.append(value);
    }
}

void Install::SoftwareInventory::Active::Summary::DefaultLoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request-id")
    {
        request_id.yfilter = yfilter;
    }
    if(value_path == "admin-match")
    {
        admin_match.yfilter = yfilter;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Active::Summary::DefaultLoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-path" || name == "standby-load-path" || name == "request-id" || name == "admin-match" || name == "secure-domain-router-name")
        return true;
    return false;
}

Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::LoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package>())
{
    package->parent = this;

    yang_name = "load-path"; yang_parent_name = "default-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/default-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/default-load-path/load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Active::Summary::DefaultLoadPath::LoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::StandbyLoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package>())
{
    package->parent = this;

    yang_name = "standby-load-path"; yang_parent_name = "default-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::~StandbyLoadPath()
{
}

bool Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/default-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "standby-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/default-load-path/standby-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Active::Summary::DefaultLoadPath::StandbyLoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::SoftwareInventory::Active::Summary::AdminLoadPath::AdminLoadPath()
    :
    request_id{YType::uint32, "request-id"}
        ,
    load_path(this, {})
    , standby_load_path(this, {})
{

    yang_name = "admin-load-path"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Active::Summary::AdminLoadPath::~AdminLoadPath()
{
}

bool Install::SoftwareInventory::Active::Summary::AdminLoadPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.len(); index++)
    {
        if(standby_load_path[index]->has_data())
            return true;
    }
    return request_id.is_set;
}

bool Install::SoftwareInventory::Active::Summary::AdminLoadPath::has_operation() const
{
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.len(); index++)
    {
        if(standby_load_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(request_id.yfilter);
}

std::string Install::SoftwareInventory::Active::Summary::AdminLoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Active::Summary::AdminLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-load-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Active::Summary::AdminLoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_id.is_set || is_set(request_id.yfilter)) leaf_name_data.push_back(request_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Active::Summary::AdminLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath>();
        ent_->parent = this;
        load_path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "standby-load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath>();
        ent_->parent = this;
        standby_load_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Active::Summary::AdminLoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : standby_load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::SoftwareInventory::Active::Summary::AdminLoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request-id")
    {
        request_id = value;
        request_id.value_namespace = name_space;
        request_id.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Active::Summary::AdminLoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request-id")
    {
        request_id.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Active::Summary::AdminLoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-path" || name == "standby-load-path" || name == "request-id")
        return true;
    return false;
}

Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::LoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package>())
{
    package->parent = this;

    yang_name = "load-path"; yang_parent_name = "admin-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/admin-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/admin-load-path/load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Active::Summary::AdminLoadPath::LoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::StandbyLoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package>())
{
    package->parent = this;

    yang_name = "standby-load-path"; yang_parent_name = "admin-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::~StandbyLoadPath()
{
}

bool Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/admin-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "standby-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/admin-load-path/standby-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Active::Summary::AdminLoadPath::StandbyLoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::SoftwareInventory::Active::Summary::SdrLoadPath::SdrLoadPath()
    :
    request_id{YType::uint32, "request-id"},
    secure_domain_router_name{YType::str, "secure-domain-router-name"}
        ,
    load_path(this, {})
    , standby_load_path(this, {})
{

    yang_name = "sdr-load-path"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Active::Summary::SdrLoadPath::~SdrLoadPath()
{
}

bool Install::SoftwareInventory::Active::Summary::SdrLoadPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.len(); index++)
    {
        if(standby_load_path[index]->has_data())
            return true;
    }
    return request_id.is_set
	|| secure_domain_router_name.is_set;
}

bool Install::SoftwareInventory::Active::Summary::SdrLoadPath::has_operation() const
{
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.len(); index++)
    {
        if(standby_load_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(request_id.yfilter)
	|| ydk::is_set(secure_domain_router_name.yfilter);
}

std::string Install::SoftwareInventory::Active::Summary::SdrLoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Active::Summary::SdrLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Active::Summary::SdrLoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_id.is_set || is_set(request_id.yfilter)) leaf_name_data.push_back(request_id.get_name_leafdata());
    if (secure_domain_router_name.is_set || is_set(secure_domain_router_name.yfilter)) leaf_name_data.push_back(secure_domain_router_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Active::Summary::SdrLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath>();
        ent_->parent = this;
        load_path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "standby-load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath>();
        ent_->parent = this;
        standby_load_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Active::Summary::SdrLoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : standby_load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::SoftwareInventory::Active::Summary::SdrLoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request-id")
    {
        request_id = value;
        request_id.value_namespace = name_space;
        request_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name = value;
        secure_domain_router_name.value_namespace = name_space;
        secure_domain_router_name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Active::Summary::SdrLoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request-id")
    {
        request_id.yfilter = yfilter;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Active::Summary::SdrLoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-path" || name == "standby-load-path" || name == "request-id" || name == "secure-domain-router-name")
        return true;
    return false;
}

Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::LoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package>())
{
    package->parent = this;

    yang_name = "load-path"; yang_parent_name = "sdr-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/sdr-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/sdr-load-path/load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Active::Summary::SdrLoadPath::LoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::StandbyLoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package>())
{
    package->parent = this;

    yang_name = "standby-load-path"; yang_parent_name = "sdr-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::~StandbyLoadPath()
{
}

bool Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/sdr-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "standby-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/sdr-load-path/standby-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Active::Summary::SdrLoadPath::StandbyLoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::SoftwareInventory::Active::Summary::LocationLoadPath::LocationLoadPath()
    :
    request_id{YType::uint32, "request-id"},
    secure_domain_router_name{YType::str, "secure-domain-router-name"},
    node_name{YType::str, "node-name"}
        ,
    load_path(this, {})
    , standby_load_path(this, {})
{

    yang_name = "location-load-path"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Active::Summary::LocationLoadPath::~LocationLoadPath()
{
}

bool Install::SoftwareInventory::Active::Summary::LocationLoadPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.len(); index++)
    {
        if(standby_load_path[index]->has_data())
            return true;
    }
    return request_id.is_set
	|| secure_domain_router_name.is_set
	|| node_name.is_set;
}

bool Install::SoftwareInventory::Active::Summary::LocationLoadPath::has_operation() const
{
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standby_load_path.len(); index++)
    {
        if(standby_load_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(request_id.yfilter)
	|| ydk::is_set(secure_domain_router_name.yfilter)
	|| ydk::is_set(node_name.yfilter);
}

std::string Install::SoftwareInventory::Active::Summary::LocationLoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Active::Summary::LocationLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location-load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Active::Summary::LocationLoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_id.is_set || is_set(request_id.yfilter)) leaf_name_data.push_back(request_id.get_name_leafdata());
    if (secure_domain_router_name.is_set || is_set(secure_domain_router_name.yfilter)) leaf_name_data.push_back(secure_domain_router_name.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Active::Summary::LocationLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath>();
        ent_->parent = this;
        load_path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "standby-load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath>();
        ent_->parent = this;
        standby_load_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Active::Summary::LocationLoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : standby_load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::SoftwareInventory::Active::Summary::LocationLoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request-id")
    {
        request_id = value;
        request_id.value_namespace = name_space;
        request_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name = value;
        secure_domain_router_name.value_namespace = name_space;
        secure_domain_router_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Active::Summary::LocationLoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request-id")
    {
        request_id.yfilter = yfilter;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Active::Summary::LocationLoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-path" || name == "standby-load-path" || name == "request-id" || name == "secure-domain-router-name" || name == "node-name")
        return true;
    return false;
}

Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::LoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package>())
{
    package->parent = this;

    yang_name = "load-path"; yang_parent_name = "location-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/location-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/location-load-path/load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Active::Summary::LocationLoadPath::LoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::StandbyLoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package>())
{
    package->parent = this;

    yang_name = "standby-load-path"; yang_parent_name = "location-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::~StandbyLoadPath()
{
}

bool Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/location-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "standby-load-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/summary/location-load-path/standby-load-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Active::Summary::LocationLoadPath::StandbyLoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::SoftwareInventory::Active::Inventories::Inventories()
    :
    inventory(this, {"node_name"})
{

    yang_name = "inventories"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Active::Inventories::~Inventories()
{
}

bool Install::SoftwareInventory::Active::Inventories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<inventory.len(); index++)
    {
        if(inventory[index]->has_data())
            return true;
    }
    return false;
}

bool Install::SoftwareInventory::Active::Inventories::has_operation() const
{
    for (std::size_t index=0; index<inventory.len(); index++)
    {
        if(inventory[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Install::SoftwareInventory::Active::Inventories::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Active::Inventories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Active::Inventories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Active::Inventories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inventory")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Active::Inventories::Inventory>();
        ent_->parent = this;
        inventory.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Active::Inventories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : inventory.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::SoftwareInventory::Active::Inventories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::SoftwareInventory::Active::Inventories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::SoftwareInventory::Active::Inventories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inventory")
        return true;
    return false;
}

Install::SoftwareInventory::Active::Inventories::Inventory::Inventory()
    :
    node_name{YType::str, "node-name"},
    major_{YType::uint32, "major"},
    minor{YType::uint32, "minor"},
    boot_image_name{YType::str, "boot-image-name"},
    node_type{YType::uint64, "node-type"},
    secure_domain_router_name{YType::str, "secure-domain-router-name"}
        ,
    load_path(this, {})
{

    yang_name = "inventory"; yang_parent_name = "inventories"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::SoftwareInventory::Active::Inventories::Inventory::~Inventory()
{
}

bool Install::SoftwareInventory::Active::Inventories::Inventory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| major_.is_set
	|| minor.is_set
	|| boot_image_name.is_set
	|| node_type.is_set
	|| secure_domain_router_name.is_set;
}

bool Install::SoftwareInventory::Active::Inventories::Inventory::has_operation() const
{
    for (std::size_t index=0; index<load_path.len(); index++)
    {
        if(load_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(major_.yfilter)
	|| ydk::is_set(minor.yfilter)
	|| ydk::is_set(boot_image_name.yfilter)
	|| ydk::is_set(node_type.yfilter)
	|| ydk::is_set(secure_domain_router_name.yfilter);
}

std::string Install::SoftwareInventory::Active::Inventories::Inventory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/software-inventory/active/inventories/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::SoftwareInventory::Active::Inventories::Inventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventory";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Active::Inventories::Inventory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (major_.is_set || is_set(major_.yfilter)) leaf_name_data.push_back(major_.get_name_leafdata());
    if (minor.is_set || is_set(minor.yfilter)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (boot_image_name.is_set || is_set(boot_image_name.yfilter)) leaf_name_data.push_back(boot_image_name.get_name_leafdata());
    if (node_type.is_set || is_set(node_type.yfilter)) leaf_name_data.push_back(node_type.get_name_leafdata());
    if (secure_domain_router_name.is_set || is_set(secure_domain_router_name.yfilter)) leaf_name_data.push_back(secure_domain_router_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Active::Inventories::Inventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-path")
    {
        auto ent_ = std::make_shared<Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath>();
        ent_->parent = this;
        load_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Active::Inventories::Inventory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : load_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::SoftwareInventory::Active::Inventories::Inventory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "major")
    {
        major_ = value;
        major_.value_namespace = name_space;
        major_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor")
    {
        minor = value;
        minor.value_namespace = name_space;
        minor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-image-name")
    {
        boot_image_name = value;
        boot_image_name.value_namespace = name_space;
        boot_image_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-type")
    {
        node_type = value;
        node_type.value_namespace = name_space;
        node_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name = value;
        secure_domain_router_name.value_namespace = name_space;
        secure_domain_router_name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Active::Inventories::Inventory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "major")
    {
        major_.yfilter = yfilter;
    }
    if(value_path == "minor")
    {
        minor.yfilter = yfilter;
    }
    if(value_path == "boot-image-name")
    {
        boot_image_name.yfilter = yfilter;
    }
    if(value_path == "node-type")
    {
        node_type.yfilter = yfilter;
    }
    if(value_path == "secure-domain-router-name")
    {
        secure_domain_router_name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Active::Inventories::Inventory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-path" || name == "node-name" || name == "major" || name == "minor" || name == "boot-image-name" || name == "node-type" || name == "secure-domain-router-name")
        return true;
    return false;
}

Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::LoadPath()
    :
    version{YType::str, "version"},
    build_information{YType::str, "build-information"}
        ,
    package(std::make_shared<Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package>())
{
    package->parent = this;

    yang_name = "load-path"; yang_parent_name = "inventory"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| build_information.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(package != nullptr)
    {
        _children["package"] = package;
    }

    return _children;
}

void Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "version" || name == "build-information")
        return true;
    return false;
}

Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "load-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Active::Inventories::Inventory::LoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}

Install::Issu::Issu()
    :
    card_inventories(std::make_shared<Install::Issu::CardInventories>())
    , stage(std::make_shared<Install::Issu::Stage>())
{
    card_inventories->parent = this;
    stage->parent = this;

    yang_name = "issu"; yang_parent_name = "install"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Issu::~Issu()
{
}

bool Install::Issu::has_data() const
{
    if (is_presence_container) return true;
    return (card_inventories !=  nullptr && card_inventories->has_data())
	|| (stage !=  nullptr && stage->has_data());
}

bool Install::Issu::has_operation() const
{
    return is_set(yfilter)
	|| (card_inventories !=  nullptr && card_inventories->has_operation())
	|| (stage !=  nullptr && stage->has_operation());
}

std::string Install::Issu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Issu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card-inventories")
    {
        if(card_inventories == nullptr)
        {
            card_inventories = std::make_shared<Install::Issu::CardInventories>();
        }
        return card_inventories;
    }

    if(child_yang_name == "stage")
    {
        if(stage == nullptr)
        {
            stage = std::make_shared<Install::Issu::Stage>();
        }
        return stage;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Issu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(card_inventories != nullptr)
    {
        _children["card-inventories"] = card_inventories;
    }

    if(stage != nullptr)
    {
        _children["stage"] = stage;
    }

    return _children;
}

void Install::Issu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::Issu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::Issu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card-inventories" || name == "stage")
        return true;
    return false;
}

Install::Issu::CardInventories::CardInventories()
    :
    card_inventory(this, {"card_type_id"})
{

    yang_name = "card-inventories"; yang_parent_name = "issu"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Issu::CardInventories::~CardInventories()
{
}

bool Install::Issu::CardInventories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<card_inventory.len(); index++)
    {
        if(card_inventory[index]->has_data())
            return true;
    }
    return false;
}

bool Install::Issu::CardInventories::has_operation() const
{
    for (std::size_t index=0; index<card_inventory.len(); index++)
    {
        if(card_inventory[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Install::Issu::CardInventories::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/issu/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Issu::CardInventories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-inventories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Issu::CardInventories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Issu::CardInventories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card-inventory")
    {
        auto ent_ = std::make_shared<Install::Issu::CardInventories::CardInventory>();
        ent_->parent = this;
        card_inventory.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Issu::CardInventories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : card_inventory.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::Issu::CardInventories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::Issu::CardInventories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::Issu::CardInventories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card-inventory")
        return true;
    return false;
}

Install::Issu::CardInventories::CardInventory::CardInventory()
    :
    card_type_id{YType::enumeration, "card-type-id"}
        ,
    summary(this, {})
{

    yang_name = "card-inventory"; yang_parent_name = "card-inventories"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Issu::CardInventories::CardInventory::~CardInventory()
{
}

bool Install::Issu::CardInventories::CardInventory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<summary.len(); index++)
    {
        if(summary[index]->has_data())
            return true;
    }
    return card_type_id.is_set;
}

bool Install::Issu::CardInventories::CardInventory::has_operation() const
{
    for (std::size_t index=0; index<summary.len(); index++)
    {
        if(summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_type_id.yfilter);
}

std::string Install::Issu::CardInventories::CardInventory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/issu/card-inventories/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Issu::CardInventories::CardInventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-inventory";
    ADD_KEY_TOKEN(card_type_id, "card-type-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Issu::CardInventories::CardInventory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_type_id.is_set || is_set(card_type_id.yfilter)) leaf_name_data.push_back(card_type_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Issu::CardInventories::CardInventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        auto ent_ = std::make_shared<Install::Issu::CardInventories::CardInventory::Summary>();
        ent_->parent = this;
        summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Issu::CardInventories::CardInventory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::Issu::CardInventories::CardInventory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-type-id")
    {
        card_type_id = value;
        card_type_id.value_namespace = name_space;
        card_type_id.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Issu::CardInventories::CardInventory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-type-id")
    {
        card_type_id.yfilter = yfilter;
    }
}

bool Install::Issu::CardInventories::CardInventory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "card-type-id")
        return true;
    return false;
}

Install::Issu::CardInventories::CardInventory::Summary::Summary()
    :
    node_name{YType::str, "node-name"},
    partner_node_name{YType::str, "partner-node-name"},
    node_state{YType::enumeration, "node-state"},
    node_role{YType::enumeration, "node-role"},
    node_type_pi{YType::enumeration, "node-type-pi"},
    node_type_issu{YType::str, "node-type-issu"},
    node_current_state{YType::enumeration, "node-current-state"},
    node_expected_state{YType::enumeration, "node-expected-state"},
    node_failure_reason{YType::str, "node-failure-reason"},
    is_conforming_node{YType::enumeration, "is-conforming-node"},
    attempts{YType::uint32, "attempts"},
    is_node_upgraded{YType::boolean, "is-node-upgraded"}
{

    yang_name = "summary"; yang_parent_name = "card-inventory"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Issu::CardInventories::CardInventory::Summary::~Summary()
{
}

bool Install::Issu::CardInventories::CardInventory::Summary::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| partner_node_name.is_set
	|| node_state.is_set
	|| node_role.is_set
	|| node_type_pi.is_set
	|| node_type_issu.is_set
	|| node_current_state.is_set
	|| node_expected_state.is_set
	|| node_failure_reason.is_set
	|| is_conforming_node.is_set
	|| attempts.is_set
	|| is_node_upgraded.is_set;
}

bool Install::Issu::CardInventories::CardInventory::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(partner_node_name.yfilter)
	|| ydk::is_set(node_state.yfilter)
	|| ydk::is_set(node_role.yfilter)
	|| ydk::is_set(node_type_pi.yfilter)
	|| ydk::is_set(node_type_issu.yfilter)
	|| ydk::is_set(node_current_state.yfilter)
	|| ydk::is_set(node_expected_state.yfilter)
	|| ydk::is_set(node_failure_reason.yfilter)
	|| ydk::is_set(is_conforming_node.yfilter)
	|| ydk::is_set(attempts.yfilter)
	|| ydk::is_set(is_node_upgraded.yfilter);
}

std::string Install::Issu::CardInventories::CardInventory::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Issu::CardInventories::CardInventory::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (partner_node_name.is_set || is_set(partner_node_name.yfilter)) leaf_name_data.push_back(partner_node_name.get_name_leafdata());
    if (node_state.is_set || is_set(node_state.yfilter)) leaf_name_data.push_back(node_state.get_name_leafdata());
    if (node_role.is_set || is_set(node_role.yfilter)) leaf_name_data.push_back(node_role.get_name_leafdata());
    if (node_type_pi.is_set || is_set(node_type_pi.yfilter)) leaf_name_data.push_back(node_type_pi.get_name_leafdata());
    if (node_type_issu.is_set || is_set(node_type_issu.yfilter)) leaf_name_data.push_back(node_type_issu.get_name_leafdata());
    if (node_current_state.is_set || is_set(node_current_state.yfilter)) leaf_name_data.push_back(node_current_state.get_name_leafdata());
    if (node_expected_state.is_set || is_set(node_expected_state.yfilter)) leaf_name_data.push_back(node_expected_state.get_name_leafdata());
    if (node_failure_reason.is_set || is_set(node_failure_reason.yfilter)) leaf_name_data.push_back(node_failure_reason.get_name_leafdata());
    if (is_conforming_node.is_set || is_set(is_conforming_node.yfilter)) leaf_name_data.push_back(is_conforming_node.get_name_leafdata());
    if (attempts.is_set || is_set(attempts.yfilter)) leaf_name_data.push_back(attempts.get_name_leafdata());
    if (is_node_upgraded.is_set || is_set(is_node_upgraded.yfilter)) leaf_name_data.push_back(is_node_upgraded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Issu::CardInventories::CardInventory::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Issu::CardInventories::CardInventory::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::Issu::CardInventories::CardInventory::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-node-name")
    {
        partner_node_name = value;
        partner_node_name.value_namespace = name_space;
        partner_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-state")
    {
        node_state = value;
        node_state.value_namespace = name_space;
        node_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-role")
    {
        node_role = value;
        node_role.value_namespace = name_space;
        node_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-type-pi")
    {
        node_type_pi = value;
        node_type_pi.value_namespace = name_space;
        node_type_pi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-type-issu")
    {
        node_type_issu = value;
        node_type_issu.value_namespace = name_space;
        node_type_issu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-current-state")
    {
        node_current_state = value;
        node_current_state.value_namespace = name_space;
        node_current_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-expected-state")
    {
        node_expected_state = value;
        node_expected_state.value_namespace = name_space;
        node_expected_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-failure-reason")
    {
        node_failure_reason = value;
        node_failure_reason.value_namespace = name_space;
        node_failure_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-conforming-node")
    {
        is_conforming_node = value;
        is_conforming_node.value_namespace = name_space;
        is_conforming_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attempts")
    {
        attempts = value;
        attempts.value_namespace = name_space;
        attempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-upgraded")
    {
        is_node_upgraded = value;
        is_node_upgraded.value_namespace = name_space;
        is_node_upgraded.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Issu::CardInventories::CardInventory::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "partner-node-name")
    {
        partner_node_name.yfilter = yfilter;
    }
    if(value_path == "node-state")
    {
        node_state.yfilter = yfilter;
    }
    if(value_path == "node-role")
    {
        node_role.yfilter = yfilter;
    }
    if(value_path == "node-type-pi")
    {
        node_type_pi.yfilter = yfilter;
    }
    if(value_path == "node-type-issu")
    {
        node_type_issu.yfilter = yfilter;
    }
    if(value_path == "node-current-state")
    {
        node_current_state.yfilter = yfilter;
    }
    if(value_path == "node-expected-state")
    {
        node_expected_state.yfilter = yfilter;
    }
    if(value_path == "node-failure-reason")
    {
        node_failure_reason.yfilter = yfilter;
    }
    if(value_path == "is-conforming-node")
    {
        is_conforming_node.yfilter = yfilter;
    }
    if(value_path == "attempts")
    {
        attempts.yfilter = yfilter;
    }
    if(value_path == "is-node-upgraded")
    {
        is_node_upgraded.yfilter = yfilter;
    }
}

bool Install::Issu::CardInventories::CardInventory::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "partner-node-name" || name == "node-state" || name == "node-role" || name == "node-type-pi" || name == "node-type-issu" || name == "node-current-state" || name == "node-expected-state" || name == "node-failure-reason" || name == "is-conforming-node" || name == "attempts" || name == "is-node-upgraded")
        return true;
    return false;
}

Install::Issu::Stage::Stage()
    :
    issu_state{YType::str, "issu-state"},
    issu_op_id{YType::uint32, "issu-op-id"},
    percentage{YType::uint32, "percentage"},
    is_issu_aborted{YType::boolean, "is-issu-aborted"},
    is_issu_aborted_by_ism{YType::boolean, "is-issu-aborted-by-ism"},
    issu_manager_fsm_state{YType::enumeration, "issu-manager-fsm-state"},
    participating_node_all{YType::uint32, "participating-node-all"},
    num_nodes_in_progress{YType::uint32, "num-nodes-in-progress"},
    num_of_nodes_in_load{YType::uint32, "num-of-nodes-in-load"},
    num_of_nodes_in_run{YType::uint32, "num-of-nodes-in-run"},
    numof_nc_nodes{YType::uint32, "numof-nc-nodes"}
        ,
    node_in_progress(std::make_shared<Install::Issu::Stage::NodeInProgress>())
    , nodes_in_load(std::make_shared<Install::Issu::Stage::NodesInLoad>())
    , nodes_in_run(std::make_shared<Install::Issu::Stage::NodesInRun>())
    , nc_nodes(std::make_shared<Install::Issu::Stage::NcNodes>())
{
    node_in_progress->parent = this;
    nodes_in_load->parent = this;
    nodes_in_run->parent = this;
    nc_nodes->parent = this;

    yang_name = "stage"; yang_parent_name = "issu"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Issu::Stage::~Stage()
{
}

bool Install::Issu::Stage::has_data() const
{
    if (is_presence_container) return true;
    return issu_state.is_set
	|| issu_op_id.is_set
	|| percentage.is_set
	|| is_issu_aborted.is_set
	|| is_issu_aborted_by_ism.is_set
	|| issu_manager_fsm_state.is_set
	|| participating_node_all.is_set
	|| num_nodes_in_progress.is_set
	|| num_of_nodes_in_load.is_set
	|| num_of_nodes_in_run.is_set
	|| numof_nc_nodes.is_set
	|| (node_in_progress !=  nullptr && node_in_progress->has_data())
	|| (nodes_in_load !=  nullptr && nodes_in_load->has_data())
	|| (nodes_in_run !=  nullptr && nodes_in_run->has_data())
	|| (nc_nodes !=  nullptr && nc_nodes->has_data());
}

bool Install::Issu::Stage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(issu_state.yfilter)
	|| ydk::is_set(issu_op_id.yfilter)
	|| ydk::is_set(percentage.yfilter)
	|| ydk::is_set(is_issu_aborted.yfilter)
	|| ydk::is_set(is_issu_aborted_by_ism.yfilter)
	|| ydk::is_set(issu_manager_fsm_state.yfilter)
	|| ydk::is_set(participating_node_all.yfilter)
	|| ydk::is_set(num_nodes_in_progress.yfilter)
	|| ydk::is_set(num_of_nodes_in_load.yfilter)
	|| ydk::is_set(num_of_nodes_in_run.yfilter)
	|| ydk::is_set(numof_nc_nodes.yfilter)
	|| (node_in_progress !=  nullptr && node_in_progress->has_operation())
	|| (nodes_in_load !=  nullptr && nodes_in_load->has_operation())
	|| (nodes_in_run !=  nullptr && nodes_in_run->has_operation())
	|| (nc_nodes !=  nullptr && nc_nodes->has_operation());
}

std::string Install::Issu::Stage::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/issu/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Issu::Stage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stage";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Issu::Stage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (issu_state.is_set || is_set(issu_state.yfilter)) leaf_name_data.push_back(issu_state.get_name_leafdata());
    if (issu_op_id.is_set || is_set(issu_op_id.yfilter)) leaf_name_data.push_back(issu_op_id.get_name_leafdata());
    if (percentage.is_set || is_set(percentage.yfilter)) leaf_name_data.push_back(percentage.get_name_leafdata());
    if (is_issu_aborted.is_set || is_set(is_issu_aborted.yfilter)) leaf_name_data.push_back(is_issu_aborted.get_name_leafdata());
    if (is_issu_aborted_by_ism.is_set || is_set(is_issu_aborted_by_ism.yfilter)) leaf_name_data.push_back(is_issu_aborted_by_ism.get_name_leafdata());
    if (issu_manager_fsm_state.is_set || is_set(issu_manager_fsm_state.yfilter)) leaf_name_data.push_back(issu_manager_fsm_state.get_name_leafdata());
    if (participating_node_all.is_set || is_set(participating_node_all.yfilter)) leaf_name_data.push_back(participating_node_all.get_name_leafdata());
    if (num_nodes_in_progress.is_set || is_set(num_nodes_in_progress.yfilter)) leaf_name_data.push_back(num_nodes_in_progress.get_name_leafdata());
    if (num_of_nodes_in_load.is_set || is_set(num_of_nodes_in_load.yfilter)) leaf_name_data.push_back(num_of_nodes_in_load.get_name_leafdata());
    if (num_of_nodes_in_run.is_set || is_set(num_of_nodes_in_run.yfilter)) leaf_name_data.push_back(num_of_nodes_in_run.get_name_leafdata());
    if (numof_nc_nodes.is_set || is_set(numof_nc_nodes.yfilter)) leaf_name_data.push_back(numof_nc_nodes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Issu::Stage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-in-progress")
    {
        if(node_in_progress == nullptr)
        {
            node_in_progress = std::make_shared<Install::Issu::Stage::NodeInProgress>();
        }
        return node_in_progress;
    }

    if(child_yang_name == "nodes-in-load")
    {
        if(nodes_in_load == nullptr)
        {
            nodes_in_load = std::make_shared<Install::Issu::Stage::NodesInLoad>();
        }
        return nodes_in_load;
    }

    if(child_yang_name == "nodes-in-run")
    {
        if(nodes_in_run == nullptr)
        {
            nodes_in_run = std::make_shared<Install::Issu::Stage::NodesInRun>();
        }
        return nodes_in_run;
    }

    if(child_yang_name == "nc-nodes")
    {
        if(nc_nodes == nullptr)
        {
            nc_nodes = std::make_shared<Install::Issu::Stage::NcNodes>();
        }
        return nc_nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Issu::Stage::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_in_progress != nullptr)
    {
        _children["node-in-progress"] = node_in_progress;
    }

    if(nodes_in_load != nullptr)
    {
        _children["nodes-in-load"] = nodes_in_load;
    }

    if(nodes_in_run != nullptr)
    {
        _children["nodes-in-run"] = nodes_in_run;
    }

    if(nc_nodes != nullptr)
    {
        _children["nc-nodes"] = nc_nodes;
    }

    return _children;
}

void Install::Issu::Stage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "issu-state")
    {
        issu_state = value;
        issu_state.value_namespace = name_space;
        issu_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-op-id")
    {
        issu_op_id = value;
        issu_op_id.value_namespace = name_space;
        issu_op_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percentage")
    {
        percentage = value;
        percentage.value_namespace = name_space;
        percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-issu-aborted")
    {
        is_issu_aborted = value;
        is_issu_aborted.value_namespace = name_space;
        is_issu_aborted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-issu-aborted-by-ism")
    {
        is_issu_aborted_by_ism = value;
        is_issu_aborted_by_ism.value_namespace = name_space;
        is_issu_aborted_by_ism.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-manager-fsm-state")
    {
        issu_manager_fsm_state = value;
        issu_manager_fsm_state.value_namespace = name_space;
        issu_manager_fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "participating-node-all")
    {
        participating_node_all = value;
        participating_node_all.value_namespace = name_space;
        participating_node_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-nodes-in-progress")
    {
        num_nodes_in_progress = value;
        num_nodes_in_progress.value_namespace = name_space;
        num_nodes_in_progress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-nodes-in-load")
    {
        num_of_nodes_in_load = value;
        num_of_nodes_in_load.value_namespace = name_space;
        num_of_nodes_in_load.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-nodes-in-run")
    {
        num_of_nodes_in_run = value;
        num_of_nodes_in_run.value_namespace = name_space;
        num_of_nodes_in_run.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numof-nc-nodes")
    {
        numof_nc_nodes = value;
        numof_nc_nodes.value_namespace = name_space;
        numof_nc_nodes.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Issu::Stage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "issu-state")
    {
        issu_state.yfilter = yfilter;
    }
    if(value_path == "issu-op-id")
    {
        issu_op_id.yfilter = yfilter;
    }
    if(value_path == "percentage")
    {
        percentage.yfilter = yfilter;
    }
    if(value_path == "is-issu-aborted")
    {
        is_issu_aborted.yfilter = yfilter;
    }
    if(value_path == "is-issu-aborted-by-ism")
    {
        is_issu_aborted_by_ism.yfilter = yfilter;
    }
    if(value_path == "issu-manager-fsm-state")
    {
        issu_manager_fsm_state.yfilter = yfilter;
    }
    if(value_path == "participating-node-all")
    {
        participating_node_all.yfilter = yfilter;
    }
    if(value_path == "num-nodes-in-progress")
    {
        num_nodes_in_progress.yfilter = yfilter;
    }
    if(value_path == "num-of-nodes-in-load")
    {
        num_of_nodes_in_load.yfilter = yfilter;
    }
    if(value_path == "num-of-nodes-in-run")
    {
        num_of_nodes_in_run.yfilter = yfilter;
    }
    if(value_path == "numof-nc-nodes")
    {
        numof_nc_nodes.yfilter = yfilter;
    }
}

bool Install::Issu::Stage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-in-progress" || name == "nodes-in-load" || name == "nodes-in-run" || name == "nc-nodes" || name == "issu-state" || name == "issu-op-id" || name == "percentage" || name == "is-issu-aborted" || name == "is-issu-aborted-by-ism" || name == "issu-manager-fsm-state" || name == "participating-node-all" || name == "num-nodes-in-progress" || name == "num-of-nodes-in-load" || name == "num-of-nodes-in-run" || name == "numof-nc-nodes")
        return true;
    return false;
}

Install::Issu::Stage::NodeInProgress::NodeInProgress()
    :
    node{YType::str, "node"}
{

    yang_name = "node-in-progress"; yang_parent_name = "stage"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Issu::Stage::NodeInProgress::~NodeInProgress()
{
}

bool Install::Issu::Stage::NodeInProgress::has_data() const
{
    if (is_presence_container) return true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string Install::Issu::Stage::NodeInProgress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/issu/stage/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Issu::Stage::NodeInProgress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-in-progress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Issu::Stage::NodeInProgress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto node_name_datas = node.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), node_name_datas.begin(), node_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Issu::Stage::NodeInProgress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Issu::Stage::NodeInProgress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::Issu::Stage::NodeInProgress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node.append(value);
    }
}

void Install::Issu::Stage::NodeInProgress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool Install::Issu::Stage::NodeInProgress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Install::Issu::Stage::NodesInLoad::NodesInLoad()
    :
    node{YType::str, "node"}
{

    yang_name = "nodes-in-load"; yang_parent_name = "stage"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Issu::Stage::NodesInLoad::~NodesInLoad()
{
}

bool Install::Issu::Stage::NodesInLoad::has_data() const
{
    if (is_presence_container) return true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string Install::Issu::Stage::NodesInLoad::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/issu/stage/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Issu::Stage::NodesInLoad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes-in-load";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Issu::Stage::NodesInLoad::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto node_name_datas = node.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), node_name_datas.begin(), node_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Issu::Stage::NodesInLoad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Issu::Stage::NodesInLoad::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::Issu::Stage::NodesInLoad::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node.append(value);
    }
}

void Install::Issu::Stage::NodesInLoad::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool Install::Issu::Stage::NodesInLoad::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Install::Issu::Stage::NodesInRun::NodesInRun()
    :
    node{YType::str, "node"}
{

    yang_name = "nodes-in-run"; yang_parent_name = "stage"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Issu::Stage::NodesInRun::~NodesInRun()
{
}

bool Install::Issu::Stage::NodesInRun::has_data() const
{
    if (is_presence_container) return true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string Install::Issu::Stage::NodesInRun::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/issu/stage/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Issu::Stage::NodesInRun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes-in-run";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Issu::Stage::NodesInRun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto node_name_datas = node.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), node_name_datas.begin(), node_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Issu::Stage::NodesInRun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Issu::Stage::NodesInRun::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::Issu::Stage::NodesInRun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node.append(value);
    }
}

void Install::Issu::Stage::NodesInRun::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool Install::Issu::Stage::NodesInRun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Install::Issu::Stage::NcNodes::NcNodes()
    :
    node{YType::str, "node"}
{

    yang_name = "nc-nodes"; yang_parent_name = "stage"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Issu::Stage::NcNodes::~NcNodes()
{
}

bool Install::Issu::Stage::NcNodes::has_data() const
{
    if (is_presence_container) return true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string Install::Issu::Stage::NcNodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/issu/stage/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Issu::Stage::NcNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nc-nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Issu::Stage::NcNodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto node_name_datas = node.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), node_name_datas.begin(), node_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Issu::Stage::NcNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Issu::Stage::NcNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::Issu::Stage::NcNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node.append(value);
    }
}

void Install::Issu::Stage::NcNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool Install::Issu::Stage::NcNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Install::BootImage::BootImage()
    :
    system_image_file{YType::str, "system-image-file"}
{

    yang_name = "boot-image"; yang_parent_name = "install"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::BootImage::~BootImage()
{
}

bool Install::BootImage::has_data() const
{
    if (is_presence_container) return true;
    return system_image_file.is_set;
}

bool Install::BootImage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_image_file.yfilter);
}

std::string Install::BootImage::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::BootImage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot-image";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::BootImage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_image_file.is_set || is_set(system_image_file.yfilter)) leaf_name_data.push_back(system_image_file.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::BootImage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::BootImage::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::BootImage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-image-file")
    {
        system_image_file = value;
        system_image_file.value_namespace = name_space;
        system_image_file.value_namespace_prefix = name_space_prefix;
    }
}

void Install::BootImage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-image-file")
    {
        system_image_file.yfilter = yfilter;
    }
}

bool Install::BootImage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-image-file")
        return true;
    return false;
}

Install::Logs::Logs()
    :
    log(this, {"request_id"})
{

    yang_name = "logs"; yang_parent_name = "install"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Logs::~Logs()
{
}

bool Install::Logs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log.len(); index++)
    {
        if(log[index]->has_data())
            return true;
    }
    return false;
}

bool Install::Logs::has_operation() const
{
    for (std::size_t index=0; index<log.len(); index++)
    {
        if(log[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Install::Logs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Logs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Logs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Logs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log")
    {
        auto ent_ = std::make_shared<Install::Logs::Log>();
        ent_->parent = this;
        log.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Logs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : log.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::Logs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::Logs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::Logs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Install::Logs::Log::Log()
    :
    request_id{YType::uint32, "request-id"}
        ,
    header(this, {})
    , summary(this, {})
    , message(this, {})
    , change(this, {})
    , detail(this, {})
    , communication(this, {})
{

    yang_name = "log"; yang_parent_name = "logs"; is_top_level_class = false; has_list_ancestor = false; 
}

Install::Logs::Log::~Log()
{
}

bool Install::Logs::Log::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<header.len(); index++)
    {
        if(header[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<summary.len(); index++)
    {
        if(summary[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<message.len(); index++)
    {
        if(message[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<change.len(); index++)
    {
        if(change[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<detail.len(); index++)
    {
        if(detail[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<communication.len(); index++)
    {
        if(communication[index]->has_data())
            return true;
    }
    return request_id.is_set;
}

bool Install::Logs::Log::has_operation() const
{
    for (std::size_t index=0; index<header.len(); index++)
    {
        if(header[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<summary.len(); index++)
    {
        if(summary[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<message.len(); index++)
    {
        if(message[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<change.len(); index++)
    {
        if(change[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<detail.len(); index++)
    {
        if(detail[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<communication.len(); index++)
    {
        if(communication[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(request_id.yfilter);
}

std::string Install::Logs::Log::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-installmgr-admin-oper:install/logs/" << get_segment_path();
    return path_buffer.str();
}

std::string Install::Logs::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    ADD_KEY_TOKEN(request_id, "request-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Logs::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_id.is_set || is_set(request_id.yfilter)) leaf_name_data.push_back(request_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Logs::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        auto ent_ = std::make_shared<Install::Logs::Log::Header>();
        ent_->parent = this;
        header.append(ent_);
        return ent_;
    }

    if(child_yang_name == "summary")
    {
        auto ent_ = std::make_shared<Install::Logs::Log::Summary>();
        ent_->parent = this;
        summary.append(ent_);
        return ent_;
    }

    if(child_yang_name == "message")
    {
        auto ent_ = std::make_shared<Install::Logs::Log::Message>();
        ent_->parent = this;
        message.append(ent_);
        return ent_;
    }

    if(child_yang_name == "change")
    {
        auto ent_ = std::make_shared<Install::Logs::Log::Change>();
        ent_->parent = this;
        change.append(ent_);
        return ent_;
    }

    if(child_yang_name == "detail")
    {
        auto ent_ = std::make_shared<Install::Logs::Log::Detail>();
        ent_->parent = this;
        detail.append(ent_);
        return ent_;
    }

    if(child_yang_name == "communication")
    {
        auto ent_ = std::make_shared<Install::Logs::Log::Communication>();
        ent_->parent = this;
        communication.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Logs::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : header.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : message.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : change.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : communication.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Install::Logs::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request-id")
    {
        request_id = value;
        request_id.value_namespace = name_space;
        request_id.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Logs::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request-id")
    {
        request_id.yfilter = yfilter;
    }
}

bool Install::Logs::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "summary" || name == "message" || name == "change" || name == "detail" || name == "communication" || name == "request-id")
        return true;
    return false;
}

Install::Logs::Log::Header::Header()
    :
    log_contents(std::make_shared<Install::Logs::Log::Header::LogContents>())
{
    log_contents->parent = this;

    yang_name = "header"; yang_parent_name = "log"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Logs::Log::Header::~Header()
{
}

bool Install::Logs::Log::Header::has_data() const
{
    if (is_presence_container) return true;
    return (log_contents !=  nullptr && log_contents->has_data());
}

bool Install::Logs::Log::Header::has_operation() const
{
    return is_set(yfilter)
	|| (log_contents !=  nullptr && log_contents->has_operation());
}

std::string Install::Logs::Log::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Logs::Log::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Logs::Log::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-contents")
    {
        if(log_contents == nullptr)
        {
            log_contents = std::make_shared<Install::Logs::Log::Header::LogContents>();
        }
        return log_contents;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Logs::Log::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(log_contents != nullptr)
    {
        _children["log-contents"] = log_contents;
    }

    return _children;
}

void Install::Logs::Log::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::Logs::Log::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::Logs::Log::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-contents")
        return true;
    return false;
}

Install::Logs::Log::Header::LogContents::LogContents()
    :
    version{YType::uint32, "version"}
        ,
    v3(std::make_shared<Install::Logs::Log::Header::LogContents::V3>())
{
    v3->parent = this;

    yang_name = "log-contents"; yang_parent_name = "header"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Logs::Log::Header::LogContents::~LogContents()
{
}

bool Install::Logs::Log::Header::LogContents::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| (v3 !=  nullptr && v3->has_data());
}

bool Install::Logs::Log::Header::LogContents::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| (v3 !=  nullptr && v3->has_operation());
}

std::string Install::Logs::Log::Header::LogContents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-contents";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Logs::Log::Header::LogContents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Logs::Log::Header::LogContents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "v3")
    {
        if(v3 == nullptr)
        {
            v3 = std::make_shared<Install::Logs::Log::Header::LogContents::V3>();
        }
        return v3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Logs::Log::Header::LogContents::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(v3 != nullptr)
    {
        _children["v3"] = v3;
    }

    return _children;
}

void Install::Logs::Log::Header::LogContents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Logs::Log::Header::LogContents::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Install::Logs::Log::Header::LogContents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v3" || name == "version")
        return true;
    return false;
}

Install::Logs::Log::Header::LogContents::V3::V3()
    :
    category{YType::enumeration, "category"},
    message{YType::str, "message"}
        ,
    scope(std::make_shared<Install::Logs::Log::Header::LogContents::V3::Scope>())
{
    scope->parent = this;

    yang_name = "v3"; yang_parent_name = "log-contents"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Logs::Log::Header::LogContents::V3::~V3()
{
}

bool Install::Logs::Log::Header::LogContents::V3::has_data() const
{
    if (is_presence_container) return true;
    return category.is_set
	|| message.is_set
	|| (scope !=  nullptr && scope->has_data());
}

bool Install::Logs::Log::Header::LogContents::V3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(category.yfilter)
	|| ydk::is_set(message.yfilter)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Install::Logs::Log::Header::LogContents::V3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Logs::Log::Header::LogContents::V3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.yfilter)) leaf_name_data.push_back(category.get_name_leafdata());
    if (message.is_set || is_set(message.yfilter)) leaf_name_data.push_back(message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Logs::Log::Header::LogContents::V3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Install::Logs::Log::Header::LogContents::V3::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Logs::Log::Header::LogContents::V3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(scope != nullptr)
    {
        _children["scope"] = scope;
    }

    return _children;
}

void Install::Logs::Log::Header::LogContents::V3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "category")
    {
        category = value;
        category.value_namespace = name_space;
        category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message")
    {
        message = value;
        message.value_namespace = name_space;
        message.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Logs::Log::Header::LogContents::V3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "category")
    {
        category.yfilter = yfilter;
    }
    if(value_path == "message")
    {
        message.yfilter = yfilter;
    }
}

bool Install::Logs::Log::Header::LogContents::V3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope" || name == "category" || name == "message")
        return true;
    return false;
}

Install::Logs::Log::Header::LogContents::V3::Scope::Scope()
    :
    admin_read{YType::boolean, "admin-read"},
    affected_sd_rs{YType::uint32, "affected-sd-rs"}
{

    yang_name = "scope"; yang_parent_name = "v3"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Logs::Log::Header::LogContents::V3::Scope::~Scope()
{
}

bool Install::Logs::Log::Header::LogContents::V3::Scope::has_data() const
{
    if (is_presence_container) return true;
    return admin_read.is_set
	|| affected_sd_rs.is_set;
}

bool Install::Logs::Log::Header::LogContents::V3::Scope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_read.yfilter)
	|| ydk::is_set(affected_sd_rs.yfilter);
}

std::string Install::Logs::Log::Header::LogContents::V3::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Logs::Log::Header::LogContents::V3::Scope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_read.is_set || is_set(admin_read.yfilter)) leaf_name_data.push_back(admin_read.get_name_leafdata());
    if (affected_sd_rs.is_set || is_set(affected_sd_rs.yfilter)) leaf_name_data.push_back(affected_sd_rs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Logs::Log::Header::LogContents::V3::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Logs::Log::Header::LogContents::V3::Scope::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::Logs::Log::Header::LogContents::V3::Scope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-read")
    {
        admin_read = value;
        admin_read.value_namespace = name_space;
        admin_read.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affected-sd-rs")
    {
        affected_sd_rs = value;
        affected_sd_rs.value_namespace = name_space;
        affected_sd_rs.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Logs::Log::Header::LogContents::V3::Scope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-read")
    {
        admin_read.yfilter = yfilter;
    }
    if(value_path == "affected-sd-rs")
    {
        affected_sd_rs.yfilter = yfilter;
    }
}

bool Install::Logs::Log::Header::LogContents::V3::Scope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-read" || name == "affected-sd-rs")
        return true;
    return false;
}

Install::Logs::Log::Summary::Summary()
    :
    log_contents(std::make_shared<Install::Logs::Log::Summary::LogContents>())
{
    log_contents->parent = this;

    yang_name = "summary"; yang_parent_name = "log"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Logs::Log::Summary::~Summary()
{
}

bool Install::Logs::Log::Summary::has_data() const
{
    if (is_presence_container) return true;
    return (log_contents !=  nullptr && log_contents->has_data());
}

bool Install::Logs::Log::Summary::has_operation() const
{
    return is_set(yfilter)
	|| (log_contents !=  nullptr && log_contents->has_operation());
}

std::string Install::Logs::Log::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Logs::Log::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Logs::Log::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-contents")
    {
        if(log_contents == nullptr)
        {
            log_contents = std::make_shared<Install::Logs::Log::Summary::LogContents>();
        }
        return log_contents;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Logs::Log::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(log_contents != nullptr)
    {
        _children["log-contents"] = log_contents;
    }

    return _children;
}

void Install::Logs::Log::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::Logs::Log::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::Logs::Log::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-contents")
        return true;
    return false;
}

Install::Logs::Log::Summary::LogContents::LogContents()
    :
    version{YType::uint32, "version"}
        ,
    v3(std::make_shared<Install::Logs::Log::Summary::LogContents::V3>())
{
    v3->parent = this;

    yang_name = "log-contents"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Logs::Log::Summary::LogContents::~LogContents()
{
}

bool Install::Logs::Log::Summary::LogContents::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| (v3 !=  nullptr && v3->has_data());
}

bool Install::Logs::Log::Summary::LogContents::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| (v3 !=  nullptr && v3->has_operation());
}

std::string Install::Logs::Log::Summary::LogContents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-contents";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Logs::Log::Summary::LogContents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Logs::Log::Summary::LogContents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "v3")
    {
        if(v3 == nullptr)
        {
            v3 = std::make_shared<Install::Logs::Log::Summary::LogContents::V3>();
        }
        return v3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Logs::Log::Summary::LogContents::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(v3 != nullptr)
    {
        _children["v3"] = v3;
    }

    return _children;
}

void Install::Logs::Log::Summary::LogContents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Logs::Log::Summary::LogContents::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Install::Logs::Log::Summary::LogContents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v3" || name == "version")
        return true;
    return false;
}

Install::Logs::Log::Summary::LogContents::V3::V3()
    :
    category{YType::enumeration, "category"},
    message{YType::str, "message"}
        ,
    scope(std::make_shared<Install::Logs::Log::Summary::LogContents::V3::Scope>())
{
    scope->parent = this;

    yang_name = "v3"; yang_parent_name = "log-contents"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Logs::Log::Summary::LogContents::V3::~V3()
{
}

bool Install::Logs::Log::Summary::LogContents::V3::has_data() const
{
    if (is_presence_container) return true;
    return category.is_set
	|| message.is_set
	|| (scope !=  nullptr && scope->has_data());
}

bool Install::Logs::Log::Summary::LogContents::V3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(category.yfilter)
	|| ydk::is_set(message.yfilter)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Install::Logs::Log::Summary::LogContents::V3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Logs::Log::Summary::LogContents::V3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.yfilter)) leaf_name_data.push_back(category.get_name_leafdata());
    if (message.is_set || is_set(message.yfilter)) leaf_name_data.push_back(message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Logs::Log::Summary::LogContents::V3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Install::Logs::Log::Summary::LogContents::V3::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Logs::Log::Summary::LogContents::V3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(scope != nullptr)
    {
        _children["scope"] = scope;
    }

    return _children;
}

void Install::Logs::Log::Summary::LogContents::V3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "category")
    {
        category = value;
        category.value_namespace = name_space;
        category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message")
    {
        message = value;
        message.value_namespace = name_space;
        message.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Logs::Log::Summary::LogContents::V3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "category")
    {
        category.yfilter = yfilter;
    }
    if(value_path == "message")
    {
        message.yfilter = yfilter;
    }
}

bool Install::Logs::Log::Summary::LogContents::V3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope" || name == "category" || name == "message")
        return true;
    return false;
}

Install::Logs::Log::Summary::LogContents::V3::Scope::Scope()
    :
    admin_read{YType::boolean, "admin-read"},
    affected_sd_rs{YType::uint32, "affected-sd-rs"}
{

    yang_name = "scope"; yang_parent_name = "v3"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Logs::Log::Summary::LogContents::V3::Scope::~Scope()
{
}

bool Install::Logs::Log::Summary::LogContents::V3::Scope::has_data() const
{
    if (is_presence_container) return true;
    return admin_read.is_set
	|| affected_sd_rs.is_set;
}

bool Install::Logs::Log::Summary::LogContents::V3::Scope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_read.yfilter)
	|| ydk::is_set(affected_sd_rs.yfilter);
}

std::string Install::Logs::Log::Summary::LogContents::V3::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Logs::Log::Summary::LogContents::V3::Scope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_read.is_set || is_set(admin_read.yfilter)) leaf_name_data.push_back(admin_read.get_name_leafdata());
    if (affected_sd_rs.is_set || is_set(affected_sd_rs.yfilter)) leaf_name_data.push_back(affected_sd_rs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Logs::Log::Summary::LogContents::V3::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Logs::Log::Summary::LogContents::V3::Scope::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::Logs::Log::Summary::LogContents::V3::Scope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-read")
    {
        admin_read = value;
        admin_read.value_namespace = name_space;
        admin_read.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affected-sd-rs")
    {
        affected_sd_rs = value;
        affected_sd_rs.value_namespace = name_space;
        affected_sd_rs.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Logs::Log::Summary::LogContents::V3::Scope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-read")
    {
        admin_read.yfilter = yfilter;
    }
    if(value_path == "affected-sd-rs")
    {
        affected_sd_rs.yfilter = yfilter;
    }
}

bool Install::Logs::Log::Summary::LogContents::V3::Scope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-read" || name == "affected-sd-rs")
        return true;
    return false;
}

Install::Logs::Log::Message::Message()
    :
    log_contents(std::make_shared<Install::Logs::Log::Message::LogContents>())
{
    log_contents->parent = this;

    yang_name = "message"; yang_parent_name = "log"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Logs::Log::Message::~Message()
{
}

bool Install::Logs::Log::Message::has_data() const
{
    if (is_presence_container) return true;
    return (log_contents !=  nullptr && log_contents->has_data());
}

bool Install::Logs::Log::Message::has_operation() const
{
    return is_set(yfilter)
	|| (log_contents !=  nullptr && log_contents->has_operation());
}

std::string Install::Logs::Log::Message::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Logs::Log::Message::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Logs::Log::Message::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-contents")
    {
        if(log_contents == nullptr)
        {
            log_contents = std::make_shared<Install::Logs::Log::Message::LogContents>();
        }
        return log_contents;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Logs::Log::Message::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(log_contents != nullptr)
    {
        _children["log-contents"] = log_contents;
    }

    return _children;
}

void Install::Logs::Log::Message::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::Logs::Log::Message::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::Logs::Log::Message::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-contents")
        return true;
    return false;
}

Install::Logs::Log::Message::LogContents::LogContents()
    :
    version{YType::uint32, "version"}
        ,
    v3(std::make_shared<Install::Logs::Log::Message::LogContents::V3>())
{
    v3->parent = this;

    yang_name = "log-contents"; yang_parent_name = "message"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Logs::Log::Message::LogContents::~LogContents()
{
}

bool Install::Logs::Log::Message::LogContents::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| (v3 !=  nullptr && v3->has_data());
}

bool Install::Logs::Log::Message::LogContents::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| (v3 !=  nullptr && v3->has_operation());
}

std::string Install::Logs::Log::Message::LogContents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-contents";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Logs::Log::Message::LogContents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Logs::Log::Message::LogContents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "v3")
    {
        if(v3 == nullptr)
        {
            v3 = std::make_shared<Install::Logs::Log::Message::LogContents::V3>();
        }
        return v3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Logs::Log::Message::LogContents::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(v3 != nullptr)
    {
        _children["v3"] = v3;
    }

    return _children;
}

void Install::Logs::Log::Message::LogContents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Logs::Log::Message::LogContents::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Install::Logs::Log::Message::LogContents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v3" || name == "version")
        return true;
    return false;
}

Install::Logs::Log::Message::LogContents::V3::V3()
    :
    category{YType::enumeration, "category"},
    message{YType::str, "message"}
        ,
    scope(std::make_shared<Install::Logs::Log::Message::LogContents::V3::Scope>())
{
    scope->parent = this;

    yang_name = "v3"; yang_parent_name = "log-contents"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Logs::Log::Message::LogContents::V3::~V3()
{
}

bool Install::Logs::Log::Message::LogContents::V3::has_data() const
{
    if (is_presence_container) return true;
    return category.is_set
	|| message.is_set
	|| (scope !=  nullptr && scope->has_data());
}

bool Install::Logs::Log::Message::LogContents::V3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(category.yfilter)
	|| ydk::is_set(message.yfilter)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Install::Logs::Log::Message::LogContents::V3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Logs::Log::Message::LogContents::V3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.yfilter)) leaf_name_data.push_back(category.get_name_leafdata());
    if (message.is_set || is_set(message.yfilter)) leaf_name_data.push_back(message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Logs::Log::Message::LogContents::V3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Install::Logs::Log::Message::LogContents::V3::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Logs::Log::Message::LogContents::V3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(scope != nullptr)
    {
        _children["scope"] = scope;
    }

    return _children;
}

void Install::Logs::Log::Message::LogContents::V3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "category")
    {
        category = value;
        category.value_namespace = name_space;
        category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message")
    {
        message = value;
        message.value_namespace = name_space;
        message.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Logs::Log::Message::LogContents::V3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "category")
    {
        category.yfilter = yfilter;
    }
    if(value_path == "message")
    {
        message.yfilter = yfilter;
    }
}

bool Install::Logs::Log::Message::LogContents::V3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope" || name == "category" || name == "message")
        return true;
    return false;
}

Install::Logs::Log::Message::LogContents::V3::Scope::Scope()
    :
    admin_read{YType::boolean, "admin-read"},
    affected_sd_rs{YType::uint32, "affected-sd-rs"}
{

    yang_name = "scope"; yang_parent_name = "v3"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Logs::Log::Message::LogContents::V3::Scope::~Scope()
{
}

bool Install::Logs::Log::Message::LogContents::V3::Scope::has_data() const
{
    if (is_presence_container) return true;
    return admin_read.is_set
	|| affected_sd_rs.is_set;
}

bool Install::Logs::Log::Message::LogContents::V3::Scope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_read.yfilter)
	|| ydk::is_set(affected_sd_rs.yfilter);
}

std::string Install::Logs::Log::Message::LogContents::V3::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Logs::Log::Message::LogContents::V3::Scope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_read.is_set || is_set(admin_read.yfilter)) leaf_name_data.push_back(admin_read.get_name_leafdata());
    if (affected_sd_rs.is_set || is_set(affected_sd_rs.yfilter)) leaf_name_data.push_back(affected_sd_rs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Logs::Log::Message::LogContents::V3::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Logs::Log::Message::LogContents::V3::Scope::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::Logs::Log::Message::LogContents::V3::Scope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-read")
    {
        admin_read = value;
        admin_read.value_namespace = name_space;
        admin_read.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affected-sd-rs")
    {
        affected_sd_rs = value;
        affected_sd_rs.value_namespace = name_space;
        affected_sd_rs.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Logs::Log::Message::LogContents::V3::Scope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-read")
    {
        admin_read.yfilter = yfilter;
    }
    if(value_path == "affected-sd-rs")
    {
        affected_sd_rs.yfilter = yfilter;
    }
}

bool Install::Logs::Log::Message::LogContents::V3::Scope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-read" || name == "affected-sd-rs")
        return true;
    return false;
}

Install::Logs::Log::Change::Change()
    :
    log_contents(std::make_shared<Install::Logs::Log::Change::LogContents>())
{
    log_contents->parent = this;

    yang_name = "change"; yang_parent_name = "log"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Logs::Log::Change::~Change()
{
}

bool Install::Logs::Log::Change::has_data() const
{
    if (is_presence_container) return true;
    return (log_contents !=  nullptr && log_contents->has_data());
}

bool Install::Logs::Log::Change::has_operation() const
{
    return is_set(yfilter)
	|| (log_contents !=  nullptr && log_contents->has_operation());
}

std::string Install::Logs::Log::Change::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Logs::Log::Change::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Logs::Log::Change::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-contents")
    {
        if(log_contents == nullptr)
        {
            log_contents = std::make_shared<Install::Logs::Log::Change::LogContents>();
        }
        return log_contents;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Logs::Log::Change::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(log_contents != nullptr)
    {
        _children["log-contents"] = log_contents;
    }

    return _children;
}

void Install::Logs::Log::Change::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::Logs::Log::Change::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::Logs::Log::Change::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-contents")
        return true;
    return false;
}

Install::Logs::Log::Change::LogContents::LogContents()
    :
    version{YType::uint32, "version"}
        ,
    v3(std::make_shared<Install::Logs::Log::Change::LogContents::V3>())
{
    v3->parent = this;

    yang_name = "log-contents"; yang_parent_name = "change"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Logs::Log::Change::LogContents::~LogContents()
{
}

bool Install::Logs::Log::Change::LogContents::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| (v3 !=  nullptr && v3->has_data());
}

bool Install::Logs::Log::Change::LogContents::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| (v3 !=  nullptr && v3->has_operation());
}

std::string Install::Logs::Log::Change::LogContents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-contents";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Logs::Log::Change::LogContents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Logs::Log::Change::LogContents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "v3")
    {
        if(v3 == nullptr)
        {
            v3 = std::make_shared<Install::Logs::Log::Change::LogContents::V3>();
        }
        return v3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Logs::Log::Change::LogContents::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(v3 != nullptr)
    {
        _children["v3"] = v3;
    }

    return _children;
}

void Install::Logs::Log::Change::LogContents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Logs::Log::Change::LogContents::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Install::Logs::Log::Change::LogContents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v3" || name == "version")
        return true;
    return false;
}

Install::Logs::Log::Change::LogContents::V3::V3()
    :
    category{YType::enumeration, "category"},
    message{YType::str, "message"}
        ,
    scope(std::make_shared<Install::Logs::Log::Change::LogContents::V3::Scope>())
{
    scope->parent = this;

    yang_name = "v3"; yang_parent_name = "log-contents"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Logs::Log::Change::LogContents::V3::~V3()
{
}

bool Install::Logs::Log::Change::LogContents::V3::has_data() const
{
    if (is_presence_container) return true;
    return category.is_set
	|| message.is_set
	|| (scope !=  nullptr && scope->has_data());
}

bool Install::Logs::Log::Change::LogContents::V3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(category.yfilter)
	|| ydk::is_set(message.yfilter)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Install::Logs::Log::Change::LogContents::V3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Logs::Log::Change::LogContents::V3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.yfilter)) leaf_name_data.push_back(category.get_name_leafdata());
    if (message.is_set || is_set(message.yfilter)) leaf_name_data.push_back(message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Logs::Log::Change::LogContents::V3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Install::Logs::Log::Change::LogContents::V3::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Logs::Log::Change::LogContents::V3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(scope != nullptr)
    {
        _children["scope"] = scope;
    }

    return _children;
}

void Install::Logs::Log::Change::LogContents::V3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "category")
    {
        category = value;
        category.value_namespace = name_space;
        category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message")
    {
        message = value;
        message.value_namespace = name_space;
        message.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Logs::Log::Change::LogContents::V3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "category")
    {
        category.yfilter = yfilter;
    }
    if(value_path == "message")
    {
        message.yfilter = yfilter;
    }
}

bool Install::Logs::Log::Change::LogContents::V3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope" || name == "category" || name == "message")
        return true;
    return false;
}

Install::Logs::Log::Change::LogContents::V3::Scope::Scope()
    :
    admin_read{YType::boolean, "admin-read"},
    affected_sd_rs{YType::uint32, "affected-sd-rs"}
{

    yang_name = "scope"; yang_parent_name = "v3"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Logs::Log::Change::LogContents::V3::Scope::~Scope()
{
}

bool Install::Logs::Log::Change::LogContents::V3::Scope::has_data() const
{
    if (is_presence_container) return true;
    return admin_read.is_set
	|| affected_sd_rs.is_set;
}

bool Install::Logs::Log::Change::LogContents::V3::Scope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_read.yfilter)
	|| ydk::is_set(affected_sd_rs.yfilter);
}

std::string Install::Logs::Log::Change::LogContents::V3::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Logs::Log::Change::LogContents::V3::Scope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_read.is_set || is_set(admin_read.yfilter)) leaf_name_data.push_back(admin_read.get_name_leafdata());
    if (affected_sd_rs.is_set || is_set(affected_sd_rs.yfilter)) leaf_name_data.push_back(affected_sd_rs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Logs::Log::Change::LogContents::V3::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Logs::Log::Change::LogContents::V3::Scope::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::Logs::Log::Change::LogContents::V3::Scope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-read")
    {
        admin_read = value;
        admin_read.value_namespace = name_space;
        admin_read.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affected-sd-rs")
    {
        affected_sd_rs = value;
        affected_sd_rs.value_namespace = name_space;
        affected_sd_rs.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Logs::Log::Change::LogContents::V3::Scope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-read")
    {
        admin_read.yfilter = yfilter;
    }
    if(value_path == "affected-sd-rs")
    {
        affected_sd_rs.yfilter = yfilter;
    }
}

bool Install::Logs::Log::Change::LogContents::V3::Scope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-read" || name == "affected-sd-rs")
        return true;
    return false;
}

Install::Logs::Log::Detail::Detail()
    :
    log_contents(std::make_shared<Install::Logs::Log::Detail::LogContents>())
{
    log_contents->parent = this;

    yang_name = "detail"; yang_parent_name = "log"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Logs::Log::Detail::~Detail()
{
}

bool Install::Logs::Log::Detail::has_data() const
{
    if (is_presence_container) return true;
    return (log_contents !=  nullptr && log_contents->has_data());
}

bool Install::Logs::Log::Detail::has_operation() const
{
    return is_set(yfilter)
	|| (log_contents !=  nullptr && log_contents->has_operation());
}

std::string Install::Logs::Log::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Logs::Log::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Logs::Log::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-contents")
    {
        if(log_contents == nullptr)
        {
            log_contents = std::make_shared<Install::Logs::Log::Detail::LogContents>();
        }
        return log_contents;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Logs::Log::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(log_contents != nullptr)
    {
        _children["log-contents"] = log_contents;
    }

    return _children;
}

void Install::Logs::Log::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::Logs::Log::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::Logs::Log::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-contents")
        return true;
    return false;
}

Install::Logs::Log::Detail::LogContents::LogContents()
    :
    version{YType::uint32, "version"}
        ,
    v3(std::make_shared<Install::Logs::Log::Detail::LogContents::V3>())
{
    v3->parent = this;

    yang_name = "log-contents"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Logs::Log::Detail::LogContents::~LogContents()
{
}

bool Install::Logs::Log::Detail::LogContents::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| (v3 !=  nullptr && v3->has_data());
}

bool Install::Logs::Log::Detail::LogContents::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| (v3 !=  nullptr && v3->has_operation());
}

std::string Install::Logs::Log::Detail::LogContents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-contents";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Logs::Log::Detail::LogContents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Logs::Log::Detail::LogContents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "v3")
    {
        if(v3 == nullptr)
        {
            v3 = std::make_shared<Install::Logs::Log::Detail::LogContents::V3>();
        }
        return v3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Logs::Log::Detail::LogContents::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(v3 != nullptr)
    {
        _children["v3"] = v3;
    }

    return _children;
}

void Install::Logs::Log::Detail::LogContents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Logs::Log::Detail::LogContents::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Install::Logs::Log::Detail::LogContents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v3" || name == "version")
        return true;
    return false;
}

Install::Logs::Log::Detail::LogContents::V3::V3()
    :
    category{YType::enumeration, "category"},
    message{YType::str, "message"}
        ,
    scope(std::make_shared<Install::Logs::Log::Detail::LogContents::V3::Scope>())
{
    scope->parent = this;

    yang_name = "v3"; yang_parent_name = "log-contents"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Logs::Log::Detail::LogContents::V3::~V3()
{
}

bool Install::Logs::Log::Detail::LogContents::V3::has_data() const
{
    if (is_presence_container) return true;
    return category.is_set
	|| message.is_set
	|| (scope !=  nullptr && scope->has_data());
}

bool Install::Logs::Log::Detail::LogContents::V3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(category.yfilter)
	|| ydk::is_set(message.yfilter)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Install::Logs::Log::Detail::LogContents::V3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Logs::Log::Detail::LogContents::V3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (category.is_set || is_set(category.yfilter)) leaf_name_data.push_back(category.get_name_leafdata());
    if (message.is_set || is_set(message.yfilter)) leaf_name_data.push_back(message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Logs::Log::Detail::LogContents::V3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Install::Logs::Log::Detail::LogContents::V3::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Logs::Log::Detail::LogContents::V3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(scope != nullptr)
    {
        _children["scope"] = scope;
    }

    return _children;
}

void Install::Logs::Log::Detail::LogContents::V3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "category")
    {
        category = value;
        category.value_namespace = name_space;
        category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message")
    {
        message = value;
        message.value_namespace = name_space;
        message.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Logs::Log::Detail::LogContents::V3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "category")
    {
        category.yfilter = yfilter;
    }
    if(value_path == "message")
    {
        message.yfilter = yfilter;
    }
}

bool Install::Logs::Log::Detail::LogContents::V3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope" || name == "category" || name == "message")
        return true;
    return false;
}

Install::Logs::Log::Detail::LogContents::V3::Scope::Scope()
    :
    admin_read{YType::boolean, "admin-read"},
    affected_sd_rs{YType::uint32, "affected-sd-rs"}
{

    yang_name = "scope"; yang_parent_name = "v3"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Logs::Log::Detail::LogContents::V3::Scope::~Scope()
{
}

bool Install::Logs::Log::Detail::LogContents::V3::Scope::has_data() const
{
    if (is_presence_container) return true;
    return admin_read.is_set
	|| affected_sd_rs.is_set;
}

bool Install::Logs::Log::Detail::LogContents::V3::Scope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_read.yfilter)
	|| ydk::is_set(affected_sd_rs.yfilter);
}

std::string Install::Logs::Log::Detail::LogContents::V3::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Logs::Log::Detail::LogContents::V3::Scope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_read.is_set || is_set(admin_read.yfilter)) leaf_name_data.push_back(admin_read.get_name_leafdata());
    if (affected_sd_rs.is_set || is_set(affected_sd_rs.yfilter)) leaf_name_data.push_back(affected_sd_rs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Logs::Log::Detail::LogContents::V3::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Logs::Log::Detail::LogContents::V3::Scope::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Install::Logs::Log::Detail::LogContents::V3::Scope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-read")
    {
        admin_read = value;
        admin_read.value_namespace = name_space;
        admin_read.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affected-sd-rs")
    {
        affected_sd_rs = value;
        affected_sd_rs.value_namespace = name_space;
        affected_sd_rs.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Logs::Log::Detail::LogContents::V3::Scope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-read")
    {
        admin_read.yfilter = yfilter;
    }
    if(value_path == "affected-sd-rs")
    {
        affected_sd_rs.yfilter = yfilter;
    }
}

bool Install::Logs::Log::Detail::LogContents::V3::Scope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-read" || name == "affected-sd-rs")
        return true;
    return false;
}

Install::Logs::Log::Communication::Communication()
    :
    log_contents(std::make_shared<Install::Logs::Log::Communication::LogContents>())
{
    log_contents->parent = this;

    yang_name = "communication"; yang_parent_name = "log"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Logs::Log::Communication::~Communication()
{
}

bool Install::Logs::Log::Communication::has_data() const
{
    if (is_presence_container) return true;
    return (log_contents !=  nullptr && log_contents->has_data());
}

bool Install::Logs::Log::Communication::has_operation() const
{
    return is_set(yfilter)
	|| (log_contents !=  nullptr && log_contents->has_operation());
}

std::string Install::Logs::Log::Communication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "communication";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Logs::Log::Communication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Logs::Log::Communication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-contents")
    {
        if(log_contents == nullptr)
        {
            log_contents = std::make_shared<Install::Logs::Log::Communication::LogContents>();
        }
        return log_contents;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Logs::Log::Communication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(log_contents != nullptr)
    {
        _children["log-contents"] = log_contents;
    }

    return _children;
}

void Install::Logs::Log::Communication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Install::Logs::Log::Communication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Install::Logs::Log::Communication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-contents")
        return true;
    return false;
}

Install::Logs::Log::Communication::LogContents::LogContents()
    :
    version{YType::uint32, "version"}
        ,
    v3(std::make_shared<Install::Logs::Log::Communication::LogContents::V3>())
{
    v3->parent = this;

    yang_name = "log-contents"; yang_parent_name = "communication"; is_top_level_class = false; has_list_ancestor = true; 
}

Install::Logs::Log::Communication::LogContents::~LogContents()
{
}

bool Install::Logs::Log::Communication::LogContents::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| (v3 !=  nullptr && v3->has_data());
}

bool Install::Logs::Log::Communication::LogContents::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| (v3 !=  nullptr && v3->has_operation());
}

std::string Install::Logs::Log::Communication::LogContents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-contents";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::Logs::Log::Communication::LogContents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Install::Logs::Log::Communication::LogContents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "v3")
    {
        if(v3 == nullptr)
        {
            v3 = std::make_shared<Install::Logs::Log::Communication::LogContents::V3>();
        }
        return v3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Install::Logs::Log::Communication::LogContents::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(v3 != nullptr)
    {
        _children["v3"] = v3;
    }

    return _children;
}

void Install::Logs::Log::Communication::LogContents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Install::Logs::Log::Communication::LogContents::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Install::Logs::Log::Communication::LogContents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v3" || name == "version")
        return true;
    return false;
}

const Enum::YLeaf InstmgrIssuAbortMethod::method_undefined {0, "method-undefined"};
const Enum::YLeaf InstmgrIssuAbortMethod::method_no_operation {1, "method-no-operation"};
const Enum::YLeaf InstmgrIssuAbortMethod::method_standby_reload {2, "method-standby-reload"};
const Enum::YLeaf InstmgrIssuAbortMethod::method_system_reload {3, "method-system-reload"};
const Enum::YLeaf InstmgrIssuAbortMethod::method_rollback {4, "method-rollback"};
const Enum::YLeaf InstmgrIssuAbortMethod::method_not_possible {5, "method-not-possible"};
const Enum::YLeaf InstmgrIssuAbortMethod::method_admin_only {6, "method-admin-only"};

const Enum::YLeaf InstmgrBagRequestTrigger::cli {1, "cli"};
const Enum::YLeaf InstmgrBagRequestTrigger::xr_xml {2, "xr-xml"};

const Enum::YLeaf InstmgrGroup::inst_pkg_group_undefined {0, "inst-pkg-group-undefined"};
const Enum::YLeaf InstmgrGroup::inst_pkg_group_grouped {1, "inst-pkg-group-grouped"};
const Enum::YLeaf InstmgrGroup::inst_pkg_group_individual {2, "inst-pkg-group-individual"};

const Enum::YLeaf IsmCardTypeFamily::ndsc_active_rp {1, "ndsc-active-rp"};
const Enum::YLeaf IsmCardTypeFamily::ndsc_standby_rp {2, "ndsc-standby-rp"};
const Enum::YLeaf IsmCardTypeFamily::active_drp {3, "active-drp"};
const Enum::YLeaf IsmCardTypeFamily::standby_drp {4, "standby-drp"};
const Enum::YLeaf IsmCardTypeFamily::dsc_active_rp {5, "dsc-active-rp"};
const Enum::YLeaf IsmCardTypeFamily::dsc_standby_rp {6, "dsc-standby-rp"};
const Enum::YLeaf IsmCardTypeFamily::active_sc {7, "active-sc"};
const Enum::YLeaf IsmCardTypeFamily::standby_sc {8, "standby-sc"};
const Enum::YLeaf IsmCardTypeFamily::root_active_sc {9, "root-active-sc"};
const Enum::YLeaf IsmCardTypeFamily::root_standby_sc {10, "root-standby-sc"};
const Enum::YLeaf IsmCardTypeFamily::lc {11, "lc"};
const Enum::YLeaf IsmCardTypeFamily::sp {12, "sp"};
const Enum::YLeaf IsmCardTypeFamily::fabric_sp {13, "fabric-sp"};
const Enum::YLeaf IsmCardTypeFamily::spa {14, "spa"};

const Enum::YLeaf InstmgrBagUserMsgCategory::user_error {1, "user-error"};
const Enum::YLeaf InstmgrBagUserMsgCategory::non_specific {2, "non-specific"};
const Enum::YLeaf InstmgrBagUserMsgCategory::warning {3, "warning"};
const Enum::YLeaf InstmgrBagUserMsgCategory::information {4, "information"};
const Enum::YLeaf InstmgrBagUserMsgCategory::user_prompt {5, "user-prompt"};
const Enum::YLeaf InstmgrBagUserMsgCategory::log {6, "log"};
const Enum::YLeaf InstmgrBagUserMsgCategory::system_error {7, "system-error"};
const Enum::YLeaf InstmgrBagUserMsgCategory::user_response {8, "user-response"};

const Enum::YLeaf InstallmgrIsmNodeConforming::conforming {0, "conforming"};
const Enum::YLeaf InstallmgrIsmNodeConforming::none_conforming {1, "none-conforming"};
const Enum::YLeaf InstallmgrIsmNodeConforming::upgrade_fail {2, "upgrade-fail"};
const Enum::YLeaf InstallmgrIsmNodeConforming::none_conforming_spa {3, "none-conforming-spa"};
const Enum::YLeaf InstallmgrIsmNodeConforming::spa_upgrade_fail {4, "spa-upgrade-fail"};

const Enum::YLeaf InstmgrInstallPhase::inst_phase_unknown {0, "inst-phase-unknown"};
const Enum::YLeaf InstmgrInstallPhase::inst_phase_download {10, "inst-phase-download"};
const Enum::YLeaf InstmgrInstallPhase::inst_phase_sw_change {50, "inst-phase-sw-change"};
const Enum::YLeaf InstmgrInstallPhase::inst_phase_cleaning_up {1000, "inst-phase-cleaning-up"};

const Enum::YLeaf InstmgrIssuAbortImpact::undefined {0, "undefined"};
const Enum::YLeaf InstmgrIssuAbortImpact::hitless {1, "hitless"};
const Enum::YLeaf InstmgrIssuAbortImpact::traffic_outage {2, "traffic-outage"};
const Enum::YLeaf InstmgrIssuAbortImpact::not_applicable {3, "not-applicable"};

const Enum::YLeaf InstmgrIsmNodeState::none {0, "none"};
const Enum::YLeaf InstmgrIsmNodeState::issu_node_gsp_ready {1, "issu-node-gsp-ready"};
const Enum::YLeaf InstmgrIsmNodeState::load_shut_done {2, "load-shut-done"};
const Enum::YLeaf InstmgrIsmNodeState::standby_management_upgrade_done {3, "standby-management-upgrade-done"};
const Enum::YLeaf InstmgrIsmNodeState::fabric_upgrade_done {4, "fabric-upgrade-done"};
const Enum::YLeaf InstmgrIsmNodeState::imdr_preparation_ack_received {5, "imdr-preparation-ack-received"};
const Enum::YLeaf InstmgrIsmNodeState::imdr_preparation_failed {6, "imdr-preparation-failed"};
const Enum::YLeaf InstmgrIsmNodeState::imdr_start_ack_received {7, "imdr-start-ack-received"};
const Enum::YLeaf InstmgrIsmNodeState::imdr_start_failed {8, "imdr-start-failed"};
const Enum::YLeaf InstmgrIsmNodeState::imdr_complete_ack_received {9, "imdr-complete-ack-received"};
const Enum::YLeaf InstmgrIsmNodeState::imdr_complete_failed {10, "imdr-complete-failed"};
const Enum::YLeaf InstmgrIsmNodeState::standby_management_ready {11, "standby-management-ready"};
const Enum::YLeaf InstmgrIsmNodeState::fo_acknowledged {12, "fo-acknowledged"};
const Enum::YLeaf InstmgrIsmNodeState::fo_complete {13, "fo-complete"};
const Enum::YLeaf InstmgrIsmNodeState::standby_ready_after_fo {14, "standby-ready-after-fo"};
const Enum::YLeaf InstmgrIsmNodeState::iam_ready_afteri_mdr {15, "iam-ready-afteri-mdr"};
const Enum::YLeaf InstmgrIsmNodeState::nsf_ready {16, "nsf-ready"};
const Enum::YLeaf InstmgrIsmNodeState::nsf_begin_ack_received {17, "nsf-begin-ack-received"};
const Enum::YLeaf InstmgrIsmNodeState::imdr_done {18, "imdr-done"};
const Enum::YLeaf InstmgrIsmNodeState::unshut_done {19, "unshut-done"};
const Enum::YLeaf InstmgrIsmNodeState::run_done {20, "run-done"};
const Enum::YLeaf InstmgrIsmNodeState::imdr_abort_sent {21, "imdr-abort-sent"};
const Enum::YLeaf InstmgrIsmNodeState::imdr_abort_ack_received {22, "imdr-abort-ack-received"};
const Enum::YLeaf InstmgrIsmNodeState::imdr_abort_failed {23, "imdr-abort-failed"};
const Enum::YLeaf InstmgrIsmNodeState::standby_management_downgrade_done {24, "standby-management-downgrade-done"};
const Enum::YLeaf InstmgrIsmNodeState::fabric_downgrade_done {25, "fabric-downgrade-done"};
const Enum::YLeaf InstmgrIsmNodeState::reload_during_issu {26, "reload-during-issu"};
const Enum::YLeaf InstmgrIsmNodeState::timneout {27, "timneout"};
const Enum::YLeaf InstmgrIsmNodeState::fabric_upgrade_failed {28, "fabric-upgrade-failed"};
const Enum::YLeaf InstmgrIsmNodeState::unsupported_hw {29, "unsupported-hw"};
const Enum::YLeaf InstmgrIsmNodeState::not_reachable {30, "not-reachable"};
const Enum::YLeaf InstmgrIsmNodeState::max {32, "max"};

const Enum::YLeaf InstmgrPkg::inst_pkg_type_undefined {0, "inst-pkg-type-undefined"};
const Enum::YLeaf InstmgrPkg::inst_pkg_type_root {1, "inst-pkg-type-root"};
const Enum::YLeaf InstmgrPkg::inst_pkg_type_standard {2, "inst-pkg-type-standard"};
const Enum::YLeaf InstmgrPkg::inst_pkg_type_internal {3, "inst-pkg-type-internal"};

const Enum::YLeaf InstmgrCardState::instmgr_card_not_present {0, "instmgr-card-not-present"};
const Enum::YLeaf InstmgrCardState::instmgr_card_present {1, "instmgr-card-present"};
const Enum::YLeaf InstmgrCardState::instmgr_card_reset {2, "instmgr-card-reset"};
const Enum::YLeaf InstmgrCardState::instmgr_card_booting {3, "instmgr-card-booting"};
const Enum::YLeaf InstmgrCardState::instmgr_card_mbi_booting {4, "instmgr-card-mbi-booting"};
const Enum::YLeaf InstmgrCardState::instmgr_card_running_mbi {5, "instmgr-card-running-mbi"};
const Enum::YLeaf InstmgrCardState::instmgr_card_running_ena {6, "instmgr-card-running-ena"};
const Enum::YLeaf InstmgrCardState::instmgr_card_bring_down {7, "instmgr-card-bring-down"};
const Enum::YLeaf InstmgrCardState::instmgr_card_ena_failure {8, "instmgr-card-ena-failure"};
const Enum::YLeaf InstmgrCardState::instmgr_card_f_diag_run {9, "instmgr-card-f-diag-run"};
const Enum::YLeaf InstmgrCardState::instmgr_card_f_diag_failure {10, "instmgr-card-f-diag-failure"};
const Enum::YLeaf InstmgrCardState::instmgr_card_powered {11, "instmgr-card-powered"};
const Enum::YLeaf InstmgrCardState::instmgr_card_unpowered {12, "instmgr-card-unpowered"};
const Enum::YLeaf InstmgrCardState::instmgr_card_mdr {13, "instmgr-card-mdr"};
const Enum::YLeaf InstmgrCardState::instmgr_card_mdr_running_mbi {14, "instmgr-card-mdr-running-mbi"};
const Enum::YLeaf InstmgrCardState::instmgr_card_main_t_mode {15, "instmgr-card-main-t-mode"};
const Enum::YLeaf InstmgrCardState::instmgr_card_admin_down {16, "instmgr-card-admin-down"};
const Enum::YLeaf InstmgrCardState::instmgr_card_no_mon {17, "instmgr-card-no-mon"};
const Enum::YLeaf InstmgrCardState::instmgr_card_unknown {18, "instmgr-card-unknown"};
const Enum::YLeaf InstmgrCardState::instmgr_card_failed {19, "instmgr-card-failed"};
const Enum::YLeaf InstmgrCardState::instmgr_card_ok {20, "instmgr-card-ok"};
const Enum::YLeaf InstmgrCardState::instmgr_card_missing {21, "instmgr-card-missing"};
const Enum::YLeaf InstmgrCardState::instmgr_card_field_diag_downloading {22, "instmgr-card-field-diag-downloading"};
const Enum::YLeaf InstmgrCardState::instmgr_card_field_diag_unmonitor {23, "instmgr-card-field-diag-unmonitor"};
const Enum::YLeaf InstmgrCardState::instmgr_card_fabric_field_diag_unmonitor {24, "instmgr-card-fabric-field-diag-unmonitor"};
const Enum::YLeaf InstmgrCardState::instmgr_card_field_diag_rp_launching {25, "instmgr-card-field-diag-rp-launching"};
const Enum::YLeaf InstmgrCardState::instmgr_card_field_diag_running {26, "instmgr-card-field-diag-running"};
const Enum::YLeaf InstmgrCardState::instmgr_card_field_diag_pass {27, "instmgr-card-field-diag-pass"};
const Enum::YLeaf InstmgrCardState::instmgr_card_field_diag_fail {28, "instmgr-card-field-diag-fail"};
const Enum::YLeaf InstmgrCardState::instmgr_card_field_diag_timeout {29, "instmgr-card-field-diag-timeout"};
const Enum::YLeaf InstmgrCardState::instmgr_card_disabled {30, "instmgr-card-disabled"};
const Enum::YLeaf InstmgrCardState::instmgr_card_spa_booting {31, "instmgr-card-spa-booting"};
const Enum::YLeaf InstmgrCardState::instmgr_card_not_allowed_online {32, "instmgr-card-not-allowed-online"};
const Enum::YLeaf InstmgrCardState::instmgr_card_stopped {33, "instmgr-card-stopped"};
const Enum::YLeaf InstmgrCardState::instmgr_card_incompatible_fw_ver {34, "instmgr-card-incompatible-fw-ver"};
const Enum::YLeaf InstmgrCardState::instmgr_card_fpd_hold {35, "instmgr-card-fpd-hold"};
const Enum::YLeaf InstmgrCardState::instmgr_card_updating_fpd {37, "instmgr-card-updating-fpd"};
const Enum::YLeaf InstmgrCardState::instmgr_card_num_states {38, "instmgr-card-num-states"};

const Enum::YLeaf InstmgrNodeRole::redundency_unknown {0, "redundency-unknown"};
const Enum::YLeaf InstmgrNodeRole::redundency_active {1, "redundency-active"};
const Enum::YLeaf InstmgrNodeRole::redundency_standby {2, "redundency-standby"};
const Enum::YLeaf InstmgrNodeRole::redundency_unusable {3, "redundency-unusable"};

const Enum::YLeaf InstmgrRequest::add {1, "add"};
const Enum::YLeaf InstmgrRequest::accept {2, "accept"};
const Enum::YLeaf InstmgrRequest::clean {3, "clean"};
const Enum::YLeaf InstmgrRequest::activate {4, "activate"};
const Enum::YLeaf InstmgrRequest::deactivate {5, "deactivate"};
const Enum::YLeaf InstmgrRequest::commit {6, "commit"};
const Enum::YLeaf InstmgrRequest::verify {7, "verify"};
const Enum::YLeaf InstmgrRequest::rollback {8, "rollback"};
const Enum::YLeaf InstmgrRequest::clear_rollback {9, "clear-rollback"};
const Enum::YLeaf InstmgrRequest::clear_log {10, "clear-log"};
const Enum::YLeaf InstmgrRequest::health_check {11, "health-check"};
const Enum::YLeaf InstmgrRequest::operation_ {12, "operation"};
const Enum::YLeaf InstmgrRequest::stop_timer {13, "stop-timer"};
const Enum::YLeaf InstmgrRequest::label {14, "label"};
const Enum::YLeaf InstmgrRequest::clear_label {15, "clear-label"};
const Enum::YLeaf InstmgrRequest::extend {16, "extend"};

const Enum::YLeaf InstmgrIsmFsmState::idle {0, "idle"};
const Enum::YLeaf InstmgrIsmFsmState::init_done {1, "init-done"};
const Enum::YLeaf InstmgrIsmFsmState::load_shut {2, "load-shut"};
const Enum::YLeaf InstmgrIsmFsmState::load_wait {3, "load-wait"};
const Enum::YLeaf InstmgrIsmFsmState::load_stp_root_before {4, "load-stp-root-before"};
const Enum::YLeaf InstmgrIsmFsmState::load_standby_root_sc_upgrade {5, "load-standby-root-sc-upgrade"};
const Enum::YLeaf InstmgrIsmFsmState::load_standby_management_upgrade {6, "load-standby-management-upgrade"};
const Enum::YLeaf InstmgrIsmFsmState::load_stp_root_after {7, "load-stp-root-after"};
const Enum::YLeaf InstmgrIsmFsmState::load_fabric_upgrade {8, "load-fabric-upgrade"};
const Enum::YLeaf InstmgrIsmFsmState::load_management_issu_ready {9, "load-management-issu-ready"};
const Enum::YLeaf InstmgrIsmFsmState::load_done {10, "load-done"};
const Enum::YLeaf InstmgrIsmFsmState::run_prep {11, "run-prep"};
const Enum::YLeaf InstmgrIsmFsmState::run_wait {12, "run-wait"};
const Enum::YLeaf InstmgrIsmFsmState::runi_mdr_prep {13, "runi-mdr-prep"};
const Enum::YLeaf InstmgrIsmFsmState::runi_mdr_start {14, "runi-mdr-start"};
const Enum::YLeaf InstmgrIsmFsmState::runi_mdr_complete {15, "runi-mdr-complete"};
const Enum::YLeaf InstmgrIsmFsmState::run_make_standby_ready {16, "run-make-standby-ready"};
const Enum::YLeaf InstmgrIsmFsmState::run_root_scfo {17, "run-root-scfo"};
const Enum::YLeaf InstmgrIsmFsmState::run_ndscfo {18, "run-ndscfo"};
const Enum::YLeaf InstmgrIsmFsmState::run_transient1 {19, "run-transient1"};
const Enum::YLeaf InstmgrIsmFsmState::run_dscfo {20, "run-dscfo"};
const Enum::YLeaf InstmgrIsmFsmState::run_fo_complete {21, "run-fo-complete"};
const Enum::YLeaf InstmgrIsmFsmState::run_stp_root_return {22, "run-stp-root-return"};
const Enum::YLeaf InstmgrIsmFsmState::runi_mdr_continue {23, "runi-mdr-continue"};
const Enum::YLeaf InstmgrIsmFsmState::run_am_i_ready_afteri_mdr {24, "run-am-i-ready-afteri-mdr"};
const Enum::YLeaf InstmgrIsmFsmState::run_nsf_ready {25, "run-nsf-ready"};
const Enum::YLeaf InstmgrIsmFsmState::run_nsf_begin {26, "run-nsf-begin"};
const Enum::YLeaf InstmgrIsmFsmState::runi_mdr_done {27, "runi-mdr-done"};
const Enum::YLeaf InstmgrIsmFsmState::run_management_issu_ready {28, "run-management-issu-ready"};
const Enum::YLeaf InstmgrIsmFsmState::run_un_shut {29, "run-un-shut"};
const Enum::YLeaf InstmgrIsmFsmState::run_is_done {30, "run-is-done"};
const Enum::YLeaf InstmgrIsmFsmState::state_max {31, "state-max"};

const Enum::YLeaf InstmgrBagIiDirection::not_incremental {0, "not-incremental"};
const Enum::YLeaf InstmgrBagIiDirection::installing {1, "installing"};
const Enum::YLeaf InstmgrBagIiDirection::unwinding {2, "unwinding"};

const Enum::YLeaf InstmgrPiCard::type_rp {0, "type-rp"};
const Enum::YLeaf InstmgrPiCard::type_drp {1, "type-drp"};
const Enum::YLeaf InstmgrPiCard::type_lc {2, "type-lc"};
const Enum::YLeaf InstmgrPiCard::type_sc {3, "type-sc"};
const Enum::YLeaf InstmgrPiCard::type_sp {4, "type-sp"};
const Enum::YLeaf InstmgrPiCard::type_other {5, "type-other"};

const Enum::YLeaf InstmgrBagIiState::idle {1, "idle"};
const Enum::YLeaf InstmgrBagIiState::in_progress {2, "in-progress"};
const Enum::YLeaf InstmgrBagIiState::completed {3, "completed"};
const Enum::YLeaf InstmgrBagIiState::aborted {4, "aborted"};
const Enum::YLeaf InstmgrBagIiState::rebooted {5, "rebooted"};

const Enum::YLeaf InstmgrBagLogEntryUserMsgCategory::user_error {1, "user-error"};
const Enum::YLeaf InstmgrBagLogEntryUserMsgCategory::non_specific {2, "non-specific"};
const Enum::YLeaf InstmgrBagLogEntryUserMsgCategory::warning {3, "warning"};
const Enum::YLeaf InstmgrBagLogEntryUserMsgCategory::information {4, "information"};
const Enum::YLeaf InstmgrBagLogEntryUserMsgCategory::user_prompt {5, "user-prompt"};
const Enum::YLeaf InstmgrBagLogEntryUserMsgCategory::log {6, "log"};
const Enum::YLeaf InstmgrBagLogEntryUserMsgCategory::system_error {7, "system-error"};
const Enum::YLeaf InstmgrBagLogEntryUserMsgCategory::user_response {8, "user-response"};

const Enum::YLeaf InstmgrBagAbortState::abortable {1, "abortable"};
const Enum::YLeaf InstmgrBagAbortState::no_longer_abortable {2, "no-longer-abortable"};
const Enum::YLeaf InstmgrBagAbortState::never_abortable {3, "never-abortable"};
const Enum::YLeaf InstmgrBagAbortState::already_aborted {4, "already-aborted"};


}
}

