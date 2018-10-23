
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_issu.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_issu {

Issu::Issu()
    :
    status(std::make_shared<Issu::Status>())
    , clients(std::make_shared<Issu::Clients>())
    , internals(std::make_shared<Issu::Internals>())
{
    status->parent = this;
    clients->parent = this;
    internals->parent = this;

    yang_name = "issu"; yang_parent_name = "Cisco-IOS-XR-sysadmin-issu"; is_top_level_class = true; has_list_ancestor = false; 
}

Issu::~Issu()
{
}

bool Issu::has_data() const
{
    if (is_presence_container) return true;
    return (status !=  nullptr && status->has_data())
	|| (clients !=  nullptr && clients->has_data())
	|| (internals !=  nullptr && internals->has_data());
}

bool Issu::has_operation() const
{
    return is_set(yfilter)
	|| (status !=  nullptr && status->has_operation())
	|| (clients !=  nullptr && clients->has_operation())
	|| (internals !=  nullptr && internals->has_operation());
}

std::string Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Issu::Status>();
        }
        return status;
    }

    if(child_yang_name == "clients")
    {
        if(clients == nullptr)
        {
            clients = std::make_shared<Issu::Clients>();
        }
        return clients;
    }

    if(child_yang_name == "internals")
    {
        if(internals == nullptr)
        {
            internals = std::make_shared<Issu::Internals>();
        }
        return internals;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(status != nullptr)
    {
        _children["status"] = status;
    }

    if(clients != nullptr)
    {
        _children["clients"] = clients;
    }

    if(internals != nullptr)
    {
        _children["internals"] = internals;
    }

    return _children;
}

void Issu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Issu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Issu::clone_ptr() const
{
    return std::make_shared<Issu>();
}

std::string Issu::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Issu::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Issu::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Issu::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Issu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status" || name == "clients" || name == "internals")
        return true;
    return false;
}

Issu::Status::Status()
    :
    operation_type{YType::enumeration, "operation-type"},
    id{YType::uint32, "id"},
    prepare_id{YType::uint32, "prepare-id"},
    activate_id{YType::uint32, "activate-id"},
    sysadmin_packages{YType::str, "sysadmin-packages"},
    host_packages{YType::str, "host-packages"},
    complete{YType::boolean, "complete"},
    result{YType::enumeration, "result"},
    recover_result{YType::enumeration, "recover-result"}
        ,
    prepare(std::make_shared<Issu::Status::Prepare>())
    , activate(std::make_shared<Issu::Status::Activate>())
    , error(std::make_shared<Issu::Status::Error>())
{
    prepare->parent = this;
    activate->parent = this;
    error->parent = this;

    yang_name = "status"; yang_parent_name = "issu"; is_top_level_class = false; has_list_ancestor = false; 
}

Issu::Status::~Status()
{
}

bool Issu::Status::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : sysadmin_packages.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : host_packages.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return operation_type.is_set
	|| id.is_set
	|| prepare_id.is_set
	|| activate_id.is_set
	|| complete.is_set
	|| result.is_set
	|| recover_result.is_set
	|| (prepare !=  nullptr && prepare->has_data())
	|| (activate !=  nullptr && activate->has_data())
	|| (error !=  nullptr && error->has_data());
}

bool Issu::Status::has_operation() const
{
    for (auto const & leaf : sysadmin_packages.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : host_packages.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(operation_type.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(prepare_id.yfilter)
	|| ydk::is_set(activate_id.yfilter)
	|| ydk::is_set(sysadmin_packages.yfilter)
	|| ydk::is_set(host_packages.yfilter)
	|| ydk::is_set(complete.yfilter)
	|| ydk::is_set(result.yfilter)
	|| ydk::is_set(recover_result.yfilter)
	|| (prepare !=  nullptr && prepare->has_operation())
	|| (activate !=  nullptr && activate->has_operation())
	|| (error !=  nullptr && error->has_operation());
}

std::string Issu::Status::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu/" << get_segment_path();
    return path_buffer.str();
}

std::string Issu::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_type.is_set || is_set(operation_type.yfilter)) leaf_name_data.push_back(operation_type.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (prepare_id.is_set || is_set(prepare_id.yfilter)) leaf_name_data.push_back(prepare_id.get_name_leafdata());
    if (activate_id.is_set || is_set(activate_id.yfilter)) leaf_name_data.push_back(activate_id.get_name_leafdata());
    if (complete.is_set || is_set(complete.yfilter)) leaf_name_data.push_back(complete.get_name_leafdata());
    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());
    if (recover_result.is_set || is_set(recover_result.yfilter)) leaf_name_data.push_back(recover_result.get_name_leafdata());

    auto sysadmin_packages_name_datas = sysadmin_packages.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sysadmin_packages_name_datas.begin(), sysadmin_packages_name_datas.end());
    auto host_packages_name_datas = host_packages.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), host_packages_name_datas.begin(), host_packages_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prepare")
    {
        if(prepare == nullptr)
        {
            prepare = std::make_shared<Issu::Status::Prepare>();
        }
        return prepare;
    }

    if(child_yang_name == "activate")
    {
        if(activate == nullptr)
        {
            activate = std::make_shared<Issu::Status::Activate>();
        }
        return activate;
    }

    if(child_yang_name == "error")
    {
        if(error == nullptr)
        {
            error = std::make_shared<Issu::Status::Error>();
        }
        return error;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prepare != nullptr)
    {
        _children["prepare"] = prepare;
    }

    if(activate != nullptr)
    {
        _children["activate"] = activate;
    }

    if(error != nullptr)
    {
        _children["error"] = error;
    }

    return _children;
}

void Issu::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operation-type")
    {
        operation_type = value;
        operation_type.value_namespace = name_space;
        operation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepare-id")
    {
        prepare_id = value;
        prepare_id.value_namespace = name_space;
        prepare_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate-id")
    {
        activate_id = value;
        activate_id.value_namespace = name_space;
        activate_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysadmin-packages")
    {
        sysadmin_packages.append(value);
    }
    if(value_path == "host-packages")
    {
        host_packages.append(value);
    }
    if(value_path == "complete")
    {
        complete = value;
        complete.value_namespace = name_space;
        complete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recover-result")
    {
        recover_result = value;
        recover_result.value_namespace = name_space;
        recover_result.value_namespace_prefix = name_space_prefix;
    }
}

void Issu::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operation-type")
    {
        operation_type.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "prepare-id")
    {
        prepare_id.yfilter = yfilter;
    }
    if(value_path == "activate-id")
    {
        activate_id.yfilter = yfilter;
    }
    if(value_path == "sysadmin-packages")
    {
        sysadmin_packages.yfilter = yfilter;
    }
    if(value_path == "host-packages")
    {
        host_packages.yfilter = yfilter;
    }
    if(value_path == "complete")
    {
        complete.yfilter = yfilter;
    }
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
    if(value_path == "recover-result")
    {
        recover_result.yfilter = yfilter;
    }
}

bool Issu::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prepare" || name == "activate" || name == "error" || name == "operation-type" || name == "id" || name == "prepare-id" || name == "activate-id" || name == "sysadmin-packages" || name == "host-packages" || name == "complete" || name == "result" || name == "recover-result")
        return true;
    return false;
}

Issu::Status::Prepare::Prepare()
    :
    stage{YType::enumeration, "stage"},
    start_time{YType::str, "start-time"},
    activity{YType::str, "activity"},
    activity_start_time{YType::str, "activity-start-time"}
{

    yang_name = "prepare"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false; 
}

Issu::Status::Prepare::~Prepare()
{
}

bool Issu::Status::Prepare::has_data() const
{
    if (is_presence_container) return true;
    return stage.is_set
	|| start_time.is_set
	|| activity.is_set
	|| activity_start_time.is_set;
}

bool Issu::Status::Prepare::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stage.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(activity.yfilter)
	|| ydk::is_set(activity_start_time.yfilter);
}

std::string Issu::Status::Prepare::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu/status/" << get_segment_path();
    return path_buffer.str();
}

std::string Issu::Status::Prepare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepare";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Status::Prepare::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stage.is_set || is_set(stage.yfilter)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (activity.is_set || is_set(activity.yfilter)) leaf_name_data.push_back(activity.get_name_leafdata());
    if (activity_start_time.is_set || is_set(activity_start_time.yfilter)) leaf_name_data.push_back(activity_start_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Status::Prepare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Status::Prepare::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Issu::Status::Prepare::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stage")
    {
        stage = value;
        stage.value_namespace = name_space;
        stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activity")
    {
        activity = value;
        activity.value_namespace = name_space;
        activity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activity-start-time")
    {
        activity_start_time = value;
        activity_start_time.value_namespace = name_space;
        activity_start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Issu::Status::Prepare::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stage")
    {
        stage.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "activity")
    {
        activity.yfilter = yfilter;
    }
    if(value_path == "activity-start-time")
    {
        activity_start_time.yfilter = yfilter;
    }
}

bool Issu::Status::Prepare::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stage" || name == "start-time" || name == "activity" || name == "activity-start-time")
        return true;
    return false;
}

Issu::Status::Activate::Activate()
    :
    stage{YType::enumeration, "stage"},
    start_time{YType::str, "start-time"},
    activity{YType::str, "activity"},
    activity_nodes{YType::str, "activity-nodes"},
    activity_waiting_for{YType::str, "activity-waiting-for"},
    activity_start_time{YType::str, "activity-start-time"}
{

    yang_name = "activate"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false; 
}

Issu::Status::Activate::~Activate()
{
}

bool Issu::Status::Activate::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : activity_nodes.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return stage.is_set
	|| start_time.is_set
	|| activity.is_set
	|| activity_waiting_for.is_set
	|| activity_start_time.is_set;
}

bool Issu::Status::Activate::has_operation() const
{
    for (auto const & leaf : activity_nodes.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(stage.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(activity.yfilter)
	|| ydk::is_set(activity_nodes.yfilter)
	|| ydk::is_set(activity_waiting_for.yfilter)
	|| ydk::is_set(activity_start_time.yfilter);
}

std::string Issu::Status::Activate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu/status/" << get_segment_path();
    return path_buffer.str();
}

std::string Issu::Status::Activate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "activate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Status::Activate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stage.is_set || is_set(stage.yfilter)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (activity.is_set || is_set(activity.yfilter)) leaf_name_data.push_back(activity.get_name_leafdata());
    if (activity_waiting_for.is_set || is_set(activity_waiting_for.yfilter)) leaf_name_data.push_back(activity_waiting_for.get_name_leafdata());
    if (activity_start_time.is_set || is_set(activity_start_time.yfilter)) leaf_name_data.push_back(activity_start_time.get_name_leafdata());

    auto activity_nodes_name_datas = activity_nodes.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), activity_nodes_name_datas.begin(), activity_nodes_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Status::Activate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Status::Activate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Issu::Status::Activate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stage")
    {
        stage = value;
        stage.value_namespace = name_space;
        stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activity")
    {
        activity = value;
        activity.value_namespace = name_space;
        activity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activity-nodes")
    {
        activity_nodes.append(value);
    }
    if(value_path == "activity-waiting-for")
    {
        activity_waiting_for = value;
        activity_waiting_for.value_namespace = name_space;
        activity_waiting_for.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activity-start-time")
    {
        activity_start_time = value;
        activity_start_time.value_namespace = name_space;
        activity_start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Issu::Status::Activate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stage")
    {
        stage.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "activity")
    {
        activity.yfilter = yfilter;
    }
    if(value_path == "activity-nodes")
    {
        activity_nodes.yfilter = yfilter;
    }
    if(value_path == "activity-waiting-for")
    {
        activity_waiting_for.yfilter = yfilter;
    }
    if(value_path == "activity-start-time")
    {
        activity_start_time.yfilter = yfilter;
    }
}

bool Issu::Status::Activate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stage" || name == "start-time" || name == "activity" || name == "activity-nodes" || name == "activity-waiting-for" || name == "activity-start-time")
        return true;
    return false;
}

Issu::Status::Error::Error()
    :
    result{YType::enumeration, "result"},
    stage{YType::enumeration, "stage"},
    error_message{YType::str, "error-message"}
        ,
    details(std::make_shared<Issu::Status::Error::Details>())
{
    details->parent = this;

    yang_name = "error"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false; 
}

Issu::Status::Error::~Error()
{
}

bool Issu::Status::Error::has_data() const
{
    if (is_presence_container) return true;
    return result.is_set
	|| stage.is_set
	|| error_message.is_set
	|| (details !=  nullptr && details->has_data());
}

bool Issu::Status::Error::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter)
	|| ydk::is_set(stage.yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| (details !=  nullptr && details->has_operation());
}

std::string Issu::Status::Error::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu/status/" << get_segment_path();
    return path_buffer.str();
}

std::string Issu::Status::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Status::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());
    if (stage.is_set || is_set(stage.yfilter)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Status::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "details")
    {
        if(details == nullptr)
        {
            details = std::make_shared<Issu::Status::Error::Details>();
        }
        return details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Status::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(details != nullptr)
    {
        _children["details"] = details;
    }

    return _children;
}

void Issu::Status::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage")
    {
        stage = value;
        stage.value_namespace = name_space;
        stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
}

void Issu::Status::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
    if(value_path == "stage")
    {
        stage.yfilter = yfilter;
    }
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
}

bool Issu::Status::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details" || name == "result" || name == "stage" || name == "error-message")
        return true;
    return false;
}

Issu::Status::Error::Details::Details()
    :
    nodes{YType::str, "nodes"},
    clients{YType::str, "clients"},
    packages{YType::str, "packages"},
    operation_ids{YType::uint32, "operation-ids"}
{

    yang_name = "details"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = false; 
}

Issu::Status::Error::Details::~Details()
{
}

bool Issu::Status::Error::Details::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : nodes.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : clients.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : packages.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : operation_ids.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Issu::Status::Error::Details::has_operation() const
{
    for (auto const & leaf : nodes.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : clients.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : packages.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : operation_ids.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nodes.yfilter)
	|| ydk::is_set(clients.yfilter)
	|| ydk::is_set(packages.yfilter)
	|| ydk::is_set(operation_ids.yfilter);
}

std::string Issu::Status::Error::Details::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu/status/error/" << get_segment_path();
    return path_buffer.str();
}

std::string Issu::Status::Error::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Status::Error::Details::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto nodes_name_datas = nodes.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nodes_name_datas.begin(), nodes_name_datas.end());
    auto clients_name_datas = clients.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), clients_name_datas.begin(), clients_name_datas.end());
    auto packages_name_datas = packages.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packages_name_datas.begin(), packages_name_datas.end());
    auto operation_ids_name_datas = operation_ids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), operation_ids_name_datas.begin(), operation_ids_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Status::Error::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Status::Error::Details::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Issu::Status::Error::Details::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nodes")
    {
        nodes.append(value);
    }
    if(value_path == "clients")
    {
        clients.append(value);
    }
    if(value_path == "packages")
    {
        packages.append(value);
    }
    if(value_path == "operation-ids")
    {
        operation_ids.append(value);
    }
}

void Issu::Status::Error::Details::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nodes")
    {
        nodes.yfilter = yfilter;
    }
    if(value_path == "clients")
    {
        clients.yfilter = yfilter;
    }
    if(value_path == "packages")
    {
        packages.yfilter = yfilter;
    }
    if(value_path == "operation-ids")
    {
        operation_ids.yfilter = yfilter;
    }
}

bool Issu::Status::Error::Details::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes" || name == "clients" || name == "packages" || name == "operation-ids")
        return true;
    return false;
}

Issu::Clients::Clients()
    :
    announcement{YType::enumeration, "announcement"},
    announcement_status{YType::enumeration, "announcement-status"}
        ,
    client(this, {"name", "location"})
{

    yang_name = "clients"; yang_parent_name = "issu"; is_top_level_class = false; has_list_ancestor = false; 
}

Issu::Clients::~Clients()
{
}

bool Issu::Clients::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return announcement.is_set
	|| announcement_status.is_set;
}

bool Issu::Clients::has_operation() const
{
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(announcement.yfilter)
	|| ydk::is_set(announcement_status.yfilter);
}

std::string Issu::Clients::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu/" << get_segment_path();
    return path_buffer.str();
}

std::string Issu::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Clients::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announcement.is_set || is_set(announcement.yfilter)) leaf_name_data.push_back(announcement.get_name_leafdata());
    if (announcement_status.is_set || is_set(announcement_status.yfilter)) leaf_name_data.push_back(announcement_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        auto ent_ = std::make_shared<Issu::Clients::Client>();
        ent_->parent = this;
        client.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Clients::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : client.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Issu::Clients::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "announcement")
    {
        announcement = value;
        announcement.value_namespace = name_space;
        announcement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announcement-status")
    {
        announcement_status = value;
        announcement_status.value_namespace = name_space;
        announcement_status.value_namespace_prefix = name_space_prefix;
    }
}

void Issu::Clients::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "announcement")
    {
        announcement.yfilter = yfilter;
    }
    if(value_path == "announcement-status")
    {
        announcement_status.yfilter = yfilter;
    }
}

bool Issu::Clients::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "announcement" || name == "announcement-status")
        return true;
    return false;
}

Issu::Clients::Client::Client()
    :
    name{YType::str, "name"},
    location{YType::str, "location"},
    registered_for{YType::enumeration, "registered-for"},
    notif{YType::enumeration, "notif"},
    response{YType::enumeration, "response"},
    aborted{YType::boolean, "aborted"},
    abort_reason{YType::str, "abort-reason"}
{

    yang_name = "client"; yang_parent_name = "clients"; is_top_level_class = false; has_list_ancestor = false; 
}

Issu::Clients::Client::~Client()
{
}

bool Issu::Clients::Client::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : registered_for.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| location.is_set
	|| notif.is_set
	|| response.is_set
	|| aborted.is_set
	|| abort_reason.is_set;
}

bool Issu::Clients::Client::has_operation() const
{
    for (auto const & leaf : registered_for.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(registered_for.yfilter)
	|| ydk::is_set(notif.yfilter)
	|| ydk::is_set(response.yfilter)
	|| ydk::is_set(aborted.yfilter)
	|| ydk::is_set(abort_reason.yfilter);
}

std::string Issu::Clients::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu/clients/" << get_segment_path();
    return path_buffer.str();
}

std::string Issu::Clients::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    ADD_KEY_TOKEN(name, "name");
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Clients::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (notif.is_set || is_set(notif.yfilter)) leaf_name_data.push_back(notif.get_name_leafdata());
    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());
    if (aborted.is_set || is_set(aborted.yfilter)) leaf_name_data.push_back(aborted.get_name_leafdata());
    if (abort_reason.is_set || is_set(abort_reason.yfilter)) leaf_name_data.push_back(abort_reason.get_name_leafdata());

    auto registered_for_name_datas = registered_for.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), registered_for_name_datas.begin(), registered_for_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Clients::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Clients::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Issu::Clients::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "registered-for")
    {
        registered_for.append(value);
    }
    if(value_path == "notif")
    {
        notif = value;
        notif.value_namespace = name_space;
        notif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aborted")
    {
        aborted = value;
        aborted.value_namespace = name_space;
        aborted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abort-reason")
    {
        abort_reason = value;
        abort_reason.value_namespace = name_space;
        abort_reason.value_namespace_prefix = name_space_prefix;
    }
}

void Issu::Clients::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "registered-for")
    {
        registered_for.yfilter = yfilter;
    }
    if(value_path == "notif")
    {
        notif.yfilter = yfilter;
    }
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
    if(value_path == "aborted")
    {
        aborted.yfilter = yfilter;
    }
    if(value_path == "abort-reason")
    {
        abort_reason.yfilter = yfilter;
    }
}

bool Issu::Clients::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "location" || name == "registered-for" || name == "notif" || name == "response" || name == "aborted" || name == "abort-reason")
        return true;
    return false;
}

Issu::Internals::Internals()
    :
    orchestrator(std::make_shared<Issu::Internals::Orchestrator>())
    , agents(std::make_shared<Issu::Internals::Agents>())
    , inventory_monitor(std::make_shared<Issu::Internals::InventoryMonitor>())
{
    orchestrator->parent = this;
    agents->parent = this;
    inventory_monitor->parent = this;

    yang_name = "internals"; yang_parent_name = "issu"; is_top_level_class = false; has_list_ancestor = false; 
}

Issu::Internals::~Internals()
{
}

bool Issu::Internals::has_data() const
{
    if (is_presence_container) return true;
    return (orchestrator !=  nullptr && orchestrator->has_data())
	|| (agents !=  nullptr && agents->has_data())
	|| (inventory_monitor !=  nullptr && inventory_monitor->has_data());
}

bool Issu::Internals::has_operation() const
{
    return is_set(yfilter)
	|| (orchestrator !=  nullptr && orchestrator->has_operation())
	|| (agents !=  nullptr && agents->has_operation())
	|| (inventory_monitor !=  nullptr && inventory_monitor->has_operation());
}

std::string Issu::Internals::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu/" << get_segment_path();
    return path_buffer.str();
}

std::string Issu::Internals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Internals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Internals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "orchestrator")
    {
        if(orchestrator == nullptr)
        {
            orchestrator = std::make_shared<Issu::Internals::Orchestrator>();
        }
        return orchestrator;
    }

    if(child_yang_name == "agents")
    {
        if(agents == nullptr)
        {
            agents = std::make_shared<Issu::Internals::Agents>();
        }
        return agents;
    }

    if(child_yang_name == "inventory-monitor")
    {
        if(inventory_monitor == nullptr)
        {
            inventory_monitor = std::make_shared<Issu::Internals::InventoryMonitor>();
        }
        return inventory_monitor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Internals::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(orchestrator != nullptr)
    {
        _children["orchestrator"] = orchestrator;
    }

    if(agents != nullptr)
    {
        _children["agents"] = agents;
    }

    if(inventory_monitor != nullptr)
    {
        _children["inventory-monitor"] = inventory_monitor;
    }

    return _children;
}

void Issu::Internals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Issu::Internals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Issu::Internals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "orchestrator" || name == "agents" || name == "inventory-monitor")
        return true;
    return false;
}

Issu::Internals::Orchestrator::Orchestrator()
    :
    command{YType::enumeration, "command"},
    operation_type{YType::enumeration, "operation-type"},
    current_operation{YType::enumeration, "current-operation"},
    issu_completed{YType::boolean, "issu-completed"},
    operation_id{YType::uint32, "operation-id"},
    in_progress{YType::boolean, "in-progress"}
        ,
    operation_start_details(std::make_shared<Issu::Internals::Orchestrator::OperationStartDetails>())
    , internal_prepare(std::make_shared<Issu::Internals::Orchestrator::InternalPrepare>())
    , internal_activate(std::make_shared<Issu::Internals::Orchestrator::InternalActivate>())
    , error(std::make_shared<Issu::Internals::Orchestrator::Error>())
{
    operation_start_details->parent = this;
    internal_prepare->parent = this;
    internal_activate->parent = this;
    error->parent = this;

    yang_name = "orchestrator"; yang_parent_name = "internals"; is_top_level_class = false; has_list_ancestor = false; 
}

Issu::Internals::Orchestrator::~Orchestrator()
{
}

bool Issu::Internals::Orchestrator::has_data() const
{
    if (is_presence_container) return true;
    return command.is_set
	|| operation_type.is_set
	|| current_operation.is_set
	|| issu_completed.is_set
	|| operation_id.is_set
	|| in_progress.is_set
	|| (operation_start_details !=  nullptr && operation_start_details->has_data())
	|| (internal_prepare !=  nullptr && internal_prepare->has_data())
	|| (internal_activate !=  nullptr && internal_activate->has_data())
	|| (error !=  nullptr && error->has_data());
}

bool Issu::Internals::Orchestrator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter)
	|| ydk::is_set(operation_type.yfilter)
	|| ydk::is_set(current_operation.yfilter)
	|| ydk::is_set(issu_completed.yfilter)
	|| ydk::is_set(operation_id.yfilter)
	|| ydk::is_set(in_progress.yfilter)
	|| (operation_start_details !=  nullptr && operation_start_details->has_operation())
	|| (internal_prepare !=  nullptr && internal_prepare->has_operation())
	|| (internal_activate !=  nullptr && internal_activate->has_operation())
	|| (error !=  nullptr && error->has_operation());
}

std::string Issu::Internals::Orchestrator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu/internals/" << get_segment_path();
    return path_buffer.str();
}

std::string Issu::Internals::Orchestrator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "orchestrator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Internals::Orchestrator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());
    if (operation_type.is_set || is_set(operation_type.yfilter)) leaf_name_data.push_back(operation_type.get_name_leafdata());
    if (current_operation.is_set || is_set(current_operation.yfilter)) leaf_name_data.push_back(current_operation.get_name_leafdata());
    if (issu_completed.is_set || is_set(issu_completed.yfilter)) leaf_name_data.push_back(issu_completed.get_name_leafdata());
    if (operation_id.is_set || is_set(operation_id.yfilter)) leaf_name_data.push_back(operation_id.get_name_leafdata());
    if (in_progress.is_set || is_set(in_progress.yfilter)) leaf_name_data.push_back(in_progress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Internals::Orchestrator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operation-start-details")
    {
        if(operation_start_details == nullptr)
        {
            operation_start_details = std::make_shared<Issu::Internals::Orchestrator::OperationStartDetails>();
        }
        return operation_start_details;
    }

    if(child_yang_name == "internal-prepare")
    {
        if(internal_prepare == nullptr)
        {
            internal_prepare = std::make_shared<Issu::Internals::Orchestrator::InternalPrepare>();
        }
        return internal_prepare;
    }

    if(child_yang_name == "internal-activate")
    {
        if(internal_activate == nullptr)
        {
            internal_activate = std::make_shared<Issu::Internals::Orchestrator::InternalActivate>();
        }
        return internal_activate;
    }

    if(child_yang_name == "error")
    {
        if(error == nullptr)
        {
            error = std::make_shared<Issu::Internals::Orchestrator::Error>();
        }
        return error;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Internals::Orchestrator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(operation_start_details != nullptr)
    {
        _children["operation-start-details"] = operation_start_details;
    }

    if(internal_prepare != nullptr)
    {
        _children["internal-prepare"] = internal_prepare;
    }

    if(internal_activate != nullptr)
    {
        _children["internal-activate"] = internal_activate;
    }

    if(error != nullptr)
    {
        _children["error"] = error;
    }

    return _children;
}

void Issu::Internals::Orchestrator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-type")
    {
        operation_type = value;
        operation_type.value_namespace = name_space;
        operation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-operation")
    {
        current_operation = value;
        current_operation.value_namespace = name_space;
        current_operation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-completed")
    {
        issu_completed = value;
        issu_completed.value_namespace = name_space;
        issu_completed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-id")
    {
        operation_id = value;
        operation_id.value_namespace = name_space;
        operation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-progress")
    {
        in_progress = value;
        in_progress.value_namespace = name_space;
        in_progress.value_namespace_prefix = name_space_prefix;
    }
}

void Issu::Internals::Orchestrator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
    if(value_path == "operation-type")
    {
        operation_type.yfilter = yfilter;
    }
    if(value_path == "current-operation")
    {
        current_operation.yfilter = yfilter;
    }
    if(value_path == "issu-completed")
    {
        issu_completed.yfilter = yfilter;
    }
    if(value_path == "operation-id")
    {
        operation_id.yfilter = yfilter;
    }
    if(value_path == "in-progress")
    {
        in_progress.yfilter = yfilter;
    }
}

bool Issu::Internals::Orchestrator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation-start-details" || name == "internal-prepare" || name == "internal-activate" || name == "error" || name == "command" || name == "operation-type" || name == "current-operation" || name == "issu-completed" || name == "operation-id" || name == "in-progress")
        return true;
    return false;
}

Issu::Internals::Orchestrator::OperationStartDetails::OperationStartDetails()
    :
    input_package{YType::str, "input-package"},
    input_operation_id{YType::uint32, "input-operation-id"}
{

    yang_name = "operation-start-details"; yang_parent_name = "orchestrator"; is_top_level_class = false; has_list_ancestor = false; 
}

Issu::Internals::Orchestrator::OperationStartDetails::~OperationStartDetails()
{
}

bool Issu::Internals::Orchestrator::OperationStartDetails::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : input_package.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : input_operation_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Issu::Internals::Orchestrator::OperationStartDetails::has_operation() const
{
    for (auto const & leaf : input_package.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : input_operation_id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(input_package.yfilter)
	|| ydk::is_set(input_operation_id.yfilter);
}

std::string Issu::Internals::Orchestrator::OperationStartDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu/internals/orchestrator/" << get_segment_path();
    return path_buffer.str();
}

std::string Issu::Internals::Orchestrator::OperationStartDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operation-start-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Internals::Orchestrator::OperationStartDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto input_package_name_datas = input_package.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), input_package_name_datas.begin(), input_package_name_datas.end());
    auto input_operation_id_name_datas = input_operation_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), input_operation_id_name_datas.begin(), input_operation_id_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Internals::Orchestrator::OperationStartDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Internals::Orchestrator::OperationStartDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Issu::Internals::Orchestrator::OperationStartDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input-package")
    {
        input_package.append(value);
    }
    if(value_path == "input-operation-id")
    {
        input_operation_id.append(value);
    }
}

void Issu::Internals::Orchestrator::OperationStartDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input-package")
    {
        input_package.yfilter = yfilter;
    }
    if(value_path == "input-operation-id")
    {
        input_operation_id.yfilter = yfilter;
    }
}

bool Issu::Internals::Orchestrator::OperationStartDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input-package" || name == "input-operation-id")
        return true;
    return false;
}

Issu::Internals::Orchestrator::InternalPrepare::InternalPrepare()
    :
    operation_id{YType::uint32, "operation-id"},
    complete{YType::boolean, "complete"},
    current_stage{YType::enumeration, "current-stage"},
    host_package{YType::str, "host-package"},
    calvados_package{YType::str, "calvados-package"}
        ,
    prepare_stage_history(std::make_shared<Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory>())
{
    prepare_stage_history->parent = this;

    yang_name = "internal-prepare"; yang_parent_name = "orchestrator"; is_top_level_class = false; has_list_ancestor = false; 
}

Issu::Internals::Orchestrator::InternalPrepare::~InternalPrepare()
{
}

bool Issu::Internals::Orchestrator::InternalPrepare::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : host_package.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : calvados_package.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return operation_id.is_set
	|| complete.is_set
	|| current_stage.is_set
	|| (prepare_stage_history !=  nullptr && prepare_stage_history->has_data());
}

bool Issu::Internals::Orchestrator::InternalPrepare::has_operation() const
{
    for (auto const & leaf : host_package.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : calvados_package.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(operation_id.yfilter)
	|| ydk::is_set(complete.yfilter)
	|| ydk::is_set(current_stage.yfilter)
	|| ydk::is_set(host_package.yfilter)
	|| ydk::is_set(calvados_package.yfilter)
	|| (prepare_stage_history !=  nullptr && prepare_stage_history->has_operation());
}

std::string Issu::Internals::Orchestrator::InternalPrepare::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu/internals/orchestrator/" << get_segment_path();
    return path_buffer.str();
}

std::string Issu::Internals::Orchestrator::InternalPrepare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-prepare";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Internals::Orchestrator::InternalPrepare::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_id.is_set || is_set(operation_id.yfilter)) leaf_name_data.push_back(operation_id.get_name_leafdata());
    if (complete.is_set || is_set(complete.yfilter)) leaf_name_data.push_back(complete.get_name_leafdata());
    if (current_stage.is_set || is_set(current_stage.yfilter)) leaf_name_data.push_back(current_stage.get_name_leafdata());

    auto host_package_name_datas = host_package.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), host_package_name_datas.begin(), host_package_name_datas.end());
    auto calvados_package_name_datas = calvados_package.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), calvados_package_name_datas.begin(), calvados_package_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Internals::Orchestrator::InternalPrepare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prepare-stage-history")
    {
        if(prepare_stage_history == nullptr)
        {
            prepare_stage_history = std::make_shared<Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory>();
        }
        return prepare_stage_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Internals::Orchestrator::InternalPrepare::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prepare_stage_history != nullptr)
    {
        _children["prepare-stage-history"] = prepare_stage_history;
    }

    return _children;
}

void Issu::Internals::Orchestrator::InternalPrepare::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operation-id")
    {
        operation_id = value;
        operation_id.value_namespace = name_space;
        operation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete")
    {
        complete = value;
        complete.value_namespace = name_space;
        complete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-stage")
    {
        current_stage = value;
        current_stage.value_namespace = name_space;
        current_stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-package")
    {
        host_package.append(value);
    }
    if(value_path == "calvados-package")
    {
        calvados_package.append(value);
    }
}

void Issu::Internals::Orchestrator::InternalPrepare::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operation-id")
    {
        operation_id.yfilter = yfilter;
    }
    if(value_path == "complete")
    {
        complete.yfilter = yfilter;
    }
    if(value_path == "current-stage")
    {
        current_stage.yfilter = yfilter;
    }
    if(value_path == "host-package")
    {
        host_package.yfilter = yfilter;
    }
    if(value_path == "calvados-package")
    {
        calvados_package.yfilter = yfilter;
    }
}

bool Issu::Internals::Orchestrator::InternalPrepare::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prepare-stage-history" || name == "operation-id" || name == "complete" || name == "current-stage" || name == "host-package" || name == "calvados-package")
        return true;
    return false;
}

Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::PrepareStageHistory()
    :
    historical_stage(this, {"stage_index"})
{

    yang_name = "prepare-stage-history"; yang_parent_name = "internal-prepare"; is_top_level_class = false; has_list_ancestor = false; 
}

Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::~PrepareStageHistory()
{
}

bool Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<historical_stage.len(); index++)
    {
        if(historical_stage[index]->has_data())
            return true;
    }
    return false;
}

bool Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::has_operation() const
{
    for (std::size_t index=0; index<historical_stage.len(); index++)
    {
        if(historical_stage[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu/internals/orchestrator/internal-prepare/" << get_segment_path();
    return path_buffer.str();
}

std::string Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepare-stage-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "historical-stage")
    {
        auto ent_ = std::make_shared<Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::HistoricalStage>();
        ent_->parent = this;
        historical_stage.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : historical_stage.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "historical-stage")
        return true;
    return false;
}

Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::HistoricalStage::HistoricalStage()
    :
    stage_index{YType::uint32, "stage-index"},
    external_stage{YType::enumeration, "external-stage"},
    internal_stage_details{YType::str, "internal-stage-details"},
    status{YType::str, "status"},
    error_details{YType::str, "error-details"},
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    complete{YType::boolean, "complete"}
{

    yang_name = "historical-stage"; yang_parent_name = "prepare-stage-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::HistoricalStage::~HistoricalStage()
{
}

bool Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::HistoricalStage::has_data() const
{
    if (is_presence_container) return true;
    return stage_index.is_set
	|| external_stage.is_set
	|| internal_stage_details.is_set
	|| status.is_set
	|| error_details.is_set
	|| start_time.is_set
	|| end_time.is_set
	|| complete.is_set;
}

bool Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::HistoricalStage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stage_index.yfilter)
	|| ydk::is_set(external_stage.yfilter)
	|| ydk::is_set(internal_stage_details.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(error_details.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(complete.yfilter);
}

std::string Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::HistoricalStage::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu/internals/orchestrator/internal-prepare/prepare-stage-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::HistoricalStage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "historical-stage";
    ADD_KEY_TOKEN(stage_index, "stage-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::HistoricalStage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stage_index.is_set || is_set(stage_index.yfilter)) leaf_name_data.push_back(stage_index.get_name_leafdata());
    if (external_stage.is_set || is_set(external_stage.yfilter)) leaf_name_data.push_back(external_stage.get_name_leafdata());
    if (internal_stage_details.is_set || is_set(internal_stage_details.yfilter)) leaf_name_data.push_back(internal_stage_details.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (error_details.is_set || is_set(error_details.yfilter)) leaf_name_data.push_back(error_details.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (complete.is_set || is_set(complete.yfilter)) leaf_name_data.push_back(complete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::HistoricalStage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::HistoricalStage::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::HistoricalStage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stage-index")
    {
        stage_index = value;
        stage_index.value_namespace = name_space;
        stage_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-stage")
    {
        external_stage = value;
        external_stage.value_namespace = name_space;
        external_stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-stage-details")
    {
        internal_stage_details = value;
        internal_stage_details.value_namespace = name_space;
        internal_stage_details.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-details")
    {
        error_details = value;
        error_details.value_namespace = name_space;
        error_details.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete")
    {
        complete = value;
        complete.value_namespace = name_space;
        complete.value_namespace_prefix = name_space_prefix;
    }
}

void Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::HistoricalStage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stage-index")
    {
        stage_index.yfilter = yfilter;
    }
    if(value_path == "external-stage")
    {
        external_stage.yfilter = yfilter;
    }
    if(value_path == "internal-stage-details")
    {
        internal_stage_details.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "error-details")
    {
        error_details.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "complete")
    {
        complete.yfilter = yfilter;
    }
}

bool Issu::Internals::Orchestrator::InternalPrepare::PrepareStageHistory::HistoricalStage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stage-index" || name == "external-stage" || name == "internal-stage-details" || name == "status" || name == "error-details" || name == "start-time" || name == "end-time" || name == "complete")
        return true;
    return false;
}

Issu::Internals::Orchestrator::InternalActivate::InternalActivate()
    :
    operation_id{YType::uint32, "operation-id"},
    complete{YType::boolean, "complete"},
    current_stage{YType::enumeration, "current-stage"},
    current_phase{YType::enumeration, "current-phase"},
    host_prepared{YType::boolean, "host-prepared"},
    calvados_prepared{YType::boolean, "calvados-prepared"},
    host_node{YType::str, "host-node"},
    calvados_phase_one_node{YType::str, "calvados-phase-one-node"},
    calvados_phase_two_node{YType::str, "calvados-phase-two-node"}
        ,
    activate_stage_history(std::make_shared<Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory>())
{
    activate_stage_history->parent = this;

    yang_name = "internal-activate"; yang_parent_name = "orchestrator"; is_top_level_class = false; has_list_ancestor = false; 
}

Issu::Internals::Orchestrator::InternalActivate::~InternalActivate()
{
}

bool Issu::Internals::Orchestrator::InternalActivate::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : host_node.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : calvados_phase_one_node.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : calvados_phase_two_node.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return operation_id.is_set
	|| complete.is_set
	|| current_stage.is_set
	|| current_phase.is_set
	|| host_prepared.is_set
	|| calvados_prepared.is_set
	|| (activate_stage_history !=  nullptr && activate_stage_history->has_data());
}

bool Issu::Internals::Orchestrator::InternalActivate::has_operation() const
{
    for (auto const & leaf : host_node.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : calvados_phase_one_node.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : calvados_phase_two_node.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(operation_id.yfilter)
	|| ydk::is_set(complete.yfilter)
	|| ydk::is_set(current_stage.yfilter)
	|| ydk::is_set(current_phase.yfilter)
	|| ydk::is_set(host_prepared.yfilter)
	|| ydk::is_set(calvados_prepared.yfilter)
	|| ydk::is_set(host_node.yfilter)
	|| ydk::is_set(calvados_phase_one_node.yfilter)
	|| ydk::is_set(calvados_phase_two_node.yfilter)
	|| (activate_stage_history !=  nullptr && activate_stage_history->has_operation());
}

std::string Issu::Internals::Orchestrator::InternalActivate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu/internals/orchestrator/" << get_segment_path();
    return path_buffer.str();
}

std::string Issu::Internals::Orchestrator::InternalActivate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-activate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Internals::Orchestrator::InternalActivate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_id.is_set || is_set(operation_id.yfilter)) leaf_name_data.push_back(operation_id.get_name_leafdata());
    if (complete.is_set || is_set(complete.yfilter)) leaf_name_data.push_back(complete.get_name_leafdata());
    if (current_stage.is_set || is_set(current_stage.yfilter)) leaf_name_data.push_back(current_stage.get_name_leafdata());
    if (current_phase.is_set || is_set(current_phase.yfilter)) leaf_name_data.push_back(current_phase.get_name_leafdata());
    if (host_prepared.is_set || is_set(host_prepared.yfilter)) leaf_name_data.push_back(host_prepared.get_name_leafdata());
    if (calvados_prepared.is_set || is_set(calvados_prepared.yfilter)) leaf_name_data.push_back(calvados_prepared.get_name_leafdata());

    auto host_node_name_datas = host_node.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), host_node_name_datas.begin(), host_node_name_datas.end());
    auto calvados_phase_one_node_name_datas = calvados_phase_one_node.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), calvados_phase_one_node_name_datas.begin(), calvados_phase_one_node_name_datas.end());
    auto calvados_phase_two_node_name_datas = calvados_phase_two_node.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), calvados_phase_two_node_name_datas.begin(), calvados_phase_two_node_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Internals::Orchestrator::InternalActivate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "activate-stage-history")
    {
        if(activate_stage_history == nullptr)
        {
            activate_stage_history = std::make_shared<Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory>();
        }
        return activate_stage_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Internals::Orchestrator::InternalActivate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(activate_stage_history != nullptr)
    {
        _children["activate-stage-history"] = activate_stage_history;
    }

    return _children;
}

void Issu::Internals::Orchestrator::InternalActivate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operation-id")
    {
        operation_id = value;
        operation_id.value_namespace = name_space;
        operation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete")
    {
        complete = value;
        complete.value_namespace = name_space;
        complete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-stage")
    {
        current_stage = value;
        current_stage.value_namespace = name_space;
        current_stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-phase")
    {
        current_phase = value;
        current_phase.value_namespace = name_space;
        current_phase.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-prepared")
    {
        host_prepared = value;
        host_prepared.value_namespace = name_space;
        host_prepared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "calvados-prepared")
    {
        calvados_prepared = value;
        calvados_prepared.value_namespace = name_space;
        calvados_prepared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-node")
    {
        host_node.append(value);
    }
    if(value_path == "calvados-phase-one-node")
    {
        calvados_phase_one_node.append(value);
    }
    if(value_path == "calvados-phase-two-node")
    {
        calvados_phase_two_node.append(value);
    }
}

void Issu::Internals::Orchestrator::InternalActivate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operation-id")
    {
        operation_id.yfilter = yfilter;
    }
    if(value_path == "complete")
    {
        complete.yfilter = yfilter;
    }
    if(value_path == "current-stage")
    {
        current_stage.yfilter = yfilter;
    }
    if(value_path == "current-phase")
    {
        current_phase.yfilter = yfilter;
    }
    if(value_path == "host-prepared")
    {
        host_prepared.yfilter = yfilter;
    }
    if(value_path == "calvados-prepared")
    {
        calvados_prepared.yfilter = yfilter;
    }
    if(value_path == "host-node")
    {
        host_node.yfilter = yfilter;
    }
    if(value_path == "calvados-phase-one-node")
    {
        calvados_phase_one_node.yfilter = yfilter;
    }
    if(value_path == "calvados-phase-two-node")
    {
        calvados_phase_two_node.yfilter = yfilter;
    }
}

bool Issu::Internals::Orchestrator::InternalActivate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activate-stage-history" || name == "operation-id" || name == "complete" || name == "current-stage" || name == "current-phase" || name == "host-prepared" || name == "calvados-prepared" || name == "host-node" || name == "calvados-phase-one-node" || name == "calvados-phase-two-node")
        return true;
    return false;
}

Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::ActivateStageHistory()
    :
    historical_stage(this, {"stage_index"})
{

    yang_name = "activate-stage-history"; yang_parent_name = "internal-activate"; is_top_level_class = false; has_list_ancestor = false; 
}

Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::~ActivateStageHistory()
{
}

bool Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<historical_stage.len(); index++)
    {
        if(historical_stage[index]->has_data())
            return true;
    }
    return false;
}

bool Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::has_operation() const
{
    for (std::size_t index=0; index<historical_stage.len(); index++)
    {
        if(historical_stage[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu/internals/orchestrator/internal-activate/" << get_segment_path();
    return path_buffer.str();
}

std::string Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "activate-stage-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "historical-stage")
    {
        auto ent_ = std::make_shared<Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::HistoricalStage>();
        ent_->parent = this;
        historical_stage.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : historical_stage.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "historical-stage")
        return true;
    return false;
}

Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::HistoricalStage::HistoricalStage()
    :
    stage_index{YType::uint32, "stage-index"},
    external_stage{YType::enumeration, "external-stage"},
    internal_stage_details{YType::str, "internal-stage-details"},
    status{YType::str, "status"},
    error_details{YType::str, "error-details"},
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    complete{YType::boolean, "complete"}
{

    yang_name = "historical-stage"; yang_parent_name = "activate-stage-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::HistoricalStage::~HistoricalStage()
{
}

bool Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::HistoricalStage::has_data() const
{
    if (is_presence_container) return true;
    return stage_index.is_set
	|| external_stage.is_set
	|| internal_stage_details.is_set
	|| status.is_set
	|| error_details.is_set
	|| start_time.is_set
	|| end_time.is_set
	|| complete.is_set;
}

bool Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::HistoricalStage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stage_index.yfilter)
	|| ydk::is_set(external_stage.yfilter)
	|| ydk::is_set(internal_stage_details.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(error_details.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(complete.yfilter);
}

std::string Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::HistoricalStage::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu/internals/orchestrator/internal-activate/activate-stage-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::HistoricalStage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "historical-stage";
    ADD_KEY_TOKEN(stage_index, "stage-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::HistoricalStage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stage_index.is_set || is_set(stage_index.yfilter)) leaf_name_data.push_back(stage_index.get_name_leafdata());
    if (external_stage.is_set || is_set(external_stage.yfilter)) leaf_name_data.push_back(external_stage.get_name_leafdata());
    if (internal_stage_details.is_set || is_set(internal_stage_details.yfilter)) leaf_name_data.push_back(internal_stage_details.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (error_details.is_set || is_set(error_details.yfilter)) leaf_name_data.push_back(error_details.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (complete.is_set || is_set(complete.yfilter)) leaf_name_data.push_back(complete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::HistoricalStage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::HistoricalStage::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::HistoricalStage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stage-index")
    {
        stage_index = value;
        stage_index.value_namespace = name_space;
        stage_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-stage")
    {
        external_stage = value;
        external_stage.value_namespace = name_space;
        external_stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-stage-details")
    {
        internal_stage_details = value;
        internal_stage_details.value_namespace = name_space;
        internal_stage_details.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-details")
    {
        error_details = value;
        error_details.value_namespace = name_space;
        error_details.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete")
    {
        complete = value;
        complete.value_namespace = name_space;
        complete.value_namespace_prefix = name_space_prefix;
    }
}

void Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::HistoricalStage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stage-index")
    {
        stage_index.yfilter = yfilter;
    }
    if(value_path == "external-stage")
    {
        external_stage.yfilter = yfilter;
    }
    if(value_path == "internal-stage-details")
    {
        internal_stage_details.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "error-details")
    {
        error_details.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "complete")
    {
        complete.yfilter = yfilter;
    }
}

bool Issu::Internals::Orchestrator::InternalActivate::ActivateStageHistory::HistoricalStage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stage-index" || name == "external-stage" || name == "internal-stage-details" || name == "status" || name == "error-details" || name == "start-time" || name == "end-time" || name == "complete")
        return true;
    return false;
}

Issu::Internals::Orchestrator::Error::Error()
    :
    operation_status{YType::str, "operation-status"},
    failure_operation{YType::enumeration, "failure-operation"},
    failure_external_stage{YType::enumeration, "failure-external-stage"},
    failure_internal_stage_details{YType::str, "failure-internal-stage-details"},
    error_details{YType::str, "error-details"},
    failed_node{YType::str, "failed-node"},
    failed_package{YType::str, "failed-package"},
    failed_operation_id{YType::uint32, "failed-operation-id"},
    failed_client{YType::str, "failed-client"},
    recovery_attempted{YType::boolean, "recovery-attempted"},
    recovery_status{YType::str, "recovery-status"}
{

    yang_name = "error"; yang_parent_name = "orchestrator"; is_top_level_class = false; has_list_ancestor = false; 
}

Issu::Internals::Orchestrator::Error::~Error()
{
}

bool Issu::Internals::Orchestrator::Error::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : failed_node.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : failed_package.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : failed_operation_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : failed_client.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return operation_status.is_set
	|| failure_operation.is_set
	|| failure_external_stage.is_set
	|| failure_internal_stage_details.is_set
	|| error_details.is_set
	|| recovery_attempted.is_set
	|| recovery_status.is_set;
}

bool Issu::Internals::Orchestrator::Error::has_operation() const
{
    for (auto const & leaf : failed_node.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : failed_package.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : failed_operation_id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : failed_client.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(operation_status.yfilter)
	|| ydk::is_set(failure_operation.yfilter)
	|| ydk::is_set(failure_external_stage.yfilter)
	|| ydk::is_set(failure_internal_stage_details.yfilter)
	|| ydk::is_set(error_details.yfilter)
	|| ydk::is_set(failed_node.yfilter)
	|| ydk::is_set(failed_package.yfilter)
	|| ydk::is_set(failed_operation_id.yfilter)
	|| ydk::is_set(failed_client.yfilter)
	|| ydk::is_set(recovery_attempted.yfilter)
	|| ydk::is_set(recovery_status.yfilter);
}

std::string Issu::Internals::Orchestrator::Error::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu/internals/orchestrator/" << get_segment_path();
    return path_buffer.str();
}

std::string Issu::Internals::Orchestrator::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Internals::Orchestrator::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operation_status.is_set || is_set(operation_status.yfilter)) leaf_name_data.push_back(operation_status.get_name_leafdata());
    if (failure_operation.is_set || is_set(failure_operation.yfilter)) leaf_name_data.push_back(failure_operation.get_name_leafdata());
    if (failure_external_stage.is_set || is_set(failure_external_stage.yfilter)) leaf_name_data.push_back(failure_external_stage.get_name_leafdata());
    if (failure_internal_stage_details.is_set || is_set(failure_internal_stage_details.yfilter)) leaf_name_data.push_back(failure_internal_stage_details.get_name_leafdata());
    if (error_details.is_set || is_set(error_details.yfilter)) leaf_name_data.push_back(error_details.get_name_leafdata());
    if (recovery_attempted.is_set || is_set(recovery_attempted.yfilter)) leaf_name_data.push_back(recovery_attempted.get_name_leafdata());
    if (recovery_status.is_set || is_set(recovery_status.yfilter)) leaf_name_data.push_back(recovery_status.get_name_leafdata());

    auto failed_node_name_datas = failed_node.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), failed_node_name_datas.begin(), failed_node_name_datas.end());
    auto failed_package_name_datas = failed_package.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), failed_package_name_datas.begin(), failed_package_name_datas.end());
    auto failed_operation_id_name_datas = failed_operation_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), failed_operation_id_name_datas.begin(), failed_operation_id_name_datas.end());
    auto failed_client_name_datas = failed_client.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), failed_client_name_datas.begin(), failed_client_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Internals::Orchestrator::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Internals::Orchestrator::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Issu::Internals::Orchestrator::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operation-status")
    {
        operation_status = value;
        operation_status.value_namespace = name_space;
        operation_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure-operation")
    {
        failure_operation = value;
        failure_operation.value_namespace = name_space;
        failure_operation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure-external-stage")
    {
        failure_external_stage = value;
        failure_external_stage.value_namespace = name_space;
        failure_external_stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure-internal-stage-details")
    {
        failure_internal_stage_details = value;
        failure_internal_stage_details.value_namespace = name_space;
        failure_internal_stage_details.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-details")
    {
        error_details = value;
        error_details.value_namespace = name_space;
        error_details.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed-node")
    {
        failed_node.append(value);
    }
    if(value_path == "failed-package")
    {
        failed_package.append(value);
    }
    if(value_path == "failed-operation-id")
    {
        failed_operation_id.append(value);
    }
    if(value_path == "failed-client")
    {
        failed_client.append(value);
    }
    if(value_path == "recovery-attempted")
    {
        recovery_attempted = value;
        recovery_attempted.value_namespace = name_space;
        recovery_attempted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-status")
    {
        recovery_status = value;
        recovery_status.value_namespace = name_space;
        recovery_status.value_namespace_prefix = name_space_prefix;
    }
}

void Issu::Internals::Orchestrator::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operation-status")
    {
        operation_status.yfilter = yfilter;
    }
    if(value_path == "failure-operation")
    {
        failure_operation.yfilter = yfilter;
    }
    if(value_path == "failure-external-stage")
    {
        failure_external_stage.yfilter = yfilter;
    }
    if(value_path == "failure-internal-stage-details")
    {
        failure_internal_stage_details.yfilter = yfilter;
    }
    if(value_path == "error-details")
    {
        error_details.yfilter = yfilter;
    }
    if(value_path == "failed-node")
    {
        failed_node.yfilter = yfilter;
    }
    if(value_path == "failed-package")
    {
        failed_package.yfilter = yfilter;
    }
    if(value_path == "failed-operation-id")
    {
        failed_operation_id.yfilter = yfilter;
    }
    if(value_path == "failed-client")
    {
        failed_client.yfilter = yfilter;
    }
    if(value_path == "recovery-attempted")
    {
        recovery_attempted.yfilter = yfilter;
    }
    if(value_path == "recovery-status")
    {
        recovery_status.yfilter = yfilter;
    }
}

bool Issu::Internals::Orchestrator::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation-status" || name == "failure-operation" || name == "failure-external-stage" || name == "failure-internal-stage-details" || name == "error-details" || name == "failed-node" || name == "failed-package" || name == "failed-operation-id" || name == "failed-client" || name == "recovery-attempted" || name == "recovery-status")
        return true;
    return false;
}

Issu::Internals::Agents::Agents()
    :
    requests(std::make_shared<Issu::Internals::Agents::Requests>())
    , inventory(std::make_shared<Issu::Internals::Agents::Inventory>())
    , reload_tracking(std::make_shared<Issu::Internals::Agents::ReloadTracking>())
{
    requests->parent = this;
    inventory->parent = this;
    reload_tracking->parent = this;

    yang_name = "agents"; yang_parent_name = "internals"; is_top_level_class = false; has_list_ancestor = false; 
}

Issu::Internals::Agents::~Agents()
{
}

bool Issu::Internals::Agents::has_data() const
{
    if (is_presence_container) return true;
    return (requests !=  nullptr && requests->has_data())
	|| (inventory !=  nullptr && inventory->has_data())
	|| (reload_tracking !=  nullptr && reload_tracking->has_data());
}

bool Issu::Internals::Agents::has_operation() const
{
    return is_set(yfilter)
	|| (requests !=  nullptr && requests->has_operation())
	|| (inventory !=  nullptr && inventory->has_operation())
	|| (reload_tracking !=  nullptr && reload_tracking->has_operation());
}

std::string Issu::Internals::Agents::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu/internals/" << get_segment_path();
    return path_buffer.str();
}

std::string Issu::Internals::Agents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agents";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Internals::Agents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Internals::Agents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "requests")
    {
        if(requests == nullptr)
        {
            requests = std::make_shared<Issu::Internals::Agents::Requests>();
        }
        return requests;
    }

    if(child_yang_name == "inventory")
    {
        if(inventory == nullptr)
        {
            inventory = std::make_shared<Issu::Internals::Agents::Inventory>();
        }
        return inventory;
    }

    if(child_yang_name == "reload-tracking")
    {
        if(reload_tracking == nullptr)
        {
            reload_tracking = std::make_shared<Issu::Internals::Agents::ReloadTracking>();
        }
        return reload_tracking;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Internals::Agents::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(requests != nullptr)
    {
        _children["requests"] = requests;
    }

    if(inventory != nullptr)
    {
        _children["inventory"] = inventory;
    }

    if(reload_tracking != nullptr)
    {
        _children["reload-tracking"] = reload_tracking;
    }

    return _children;
}

void Issu::Internals::Agents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Issu::Internals::Agents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Issu::Internals::Agents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "requests" || name == "inventory" || name == "reload-tracking")
        return true;
    return false;
}

Issu::Internals::Agents::Requests::Requests()
    :
    request(this, {"request_index"})
{

    yang_name = "requests"; yang_parent_name = "agents"; is_top_level_class = false; has_list_ancestor = false; 
}

Issu::Internals::Agents::Requests::~Requests()
{
}

bool Issu::Internals::Agents::Requests::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<request.len(); index++)
    {
        if(request[index]->has_data())
            return true;
    }
    return false;
}

bool Issu::Internals::Agents::Requests::has_operation() const
{
    for (std::size_t index=0; index<request.len(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Issu::Internals::Agents::Requests::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu/internals/agents/" << get_segment_path();
    return path_buffer.str();
}

std::string Issu::Internals::Agents::Requests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Internals::Agents::Requests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Internals::Agents::Requests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request")
    {
        auto ent_ = std::make_shared<Issu::Internals::Agents::Requests::Request>();
        ent_->parent = this;
        request.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Internals::Agents::Requests::get_children() const
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

void Issu::Internals::Agents::Requests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Issu::Internals::Agents::Requests::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Issu::Internals::Agents::Requests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request")
        return true;
    return false;
}

Issu::Internals::Agents::Requests::Request::Request()
    :
    request_index{YType::uint32, "request-index"},
    request_type{YType::enumeration, "request-type"},
    requests_sent{YType::uint32, "requests-sent"},
    responses_received{YType::uint32, "responses-received"}
        ,
    checkpoint(std::make_shared<Issu::Internals::Agents::Requests::Request::Checkpoint>())
    , agents(std::make_shared<Issu::Internals::Agents::Requests::Request::Agents_>())
{
    checkpoint->parent = this;
    agents->parent = this;

    yang_name = "request"; yang_parent_name = "requests"; is_top_level_class = false; has_list_ancestor = false; 
}

Issu::Internals::Agents::Requests::Request::~Request()
{
}

bool Issu::Internals::Agents::Requests::Request::has_data() const
{
    if (is_presence_container) return true;
    return request_index.is_set
	|| request_type.is_set
	|| requests_sent.is_set
	|| responses_received.is_set
	|| (checkpoint !=  nullptr && checkpoint->has_data())
	|| (agents !=  nullptr && agents->has_data());
}

bool Issu::Internals::Agents::Requests::Request::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(request_index.yfilter)
	|| ydk::is_set(request_type.yfilter)
	|| ydk::is_set(requests_sent.yfilter)
	|| ydk::is_set(responses_received.yfilter)
	|| (checkpoint !=  nullptr && checkpoint->has_operation())
	|| (agents !=  nullptr && agents->has_operation());
}

std::string Issu::Internals::Agents::Requests::Request::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu/internals/agents/requests/" << get_segment_path();
    return path_buffer.str();
}

std::string Issu::Internals::Agents::Requests::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    ADD_KEY_TOKEN(request_index, "request-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Internals::Agents::Requests::Request::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_index.is_set || is_set(request_index.yfilter)) leaf_name_data.push_back(request_index.get_name_leafdata());
    if (request_type.is_set || is_set(request_type.yfilter)) leaf_name_data.push_back(request_type.get_name_leafdata());
    if (requests_sent.is_set || is_set(requests_sent.yfilter)) leaf_name_data.push_back(requests_sent.get_name_leafdata());
    if (responses_received.is_set || is_set(responses_received.yfilter)) leaf_name_data.push_back(responses_received.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Internals::Agents::Requests::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "checkpoint")
    {
        if(checkpoint == nullptr)
        {
            checkpoint = std::make_shared<Issu::Internals::Agents::Requests::Request::Checkpoint>();
        }
        return checkpoint;
    }

    if(child_yang_name == "agents")
    {
        if(agents == nullptr)
        {
            agents = std::make_shared<Issu::Internals::Agents::Requests::Request::Agents_>();
        }
        return agents;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Internals::Agents::Requests::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(checkpoint != nullptr)
    {
        _children["checkpoint"] = checkpoint;
    }

    if(agents != nullptr)
    {
        _children["agents"] = agents;
    }

    return _children;
}

void Issu::Internals::Agents::Requests::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request-index")
    {
        request_index = value;
        request_index.value_namespace = name_space;
        request_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-type")
    {
        request_type = value;
        request_type.value_namespace = name_space;
        request_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requests-sent")
    {
        requests_sent = value;
        requests_sent.value_namespace = name_space;
        requests_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "responses-received")
    {
        responses_received = value;
        responses_received.value_namespace = name_space;
        responses_received.value_namespace_prefix = name_space_prefix;
    }
}

void Issu::Internals::Agents::Requests::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request-index")
    {
        request_index.yfilter = yfilter;
    }
    if(value_path == "request-type")
    {
        request_type.yfilter = yfilter;
    }
    if(value_path == "requests-sent")
    {
        requests_sent.yfilter = yfilter;
    }
    if(value_path == "responses-received")
    {
        responses_received.yfilter = yfilter;
    }
}

bool Issu::Internals::Agents::Requests::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint" || name == "agents" || name == "request-index" || name == "request-type" || name == "requests-sent" || name == "responses-received")
        return true;
    return false;
}

Issu::Internals::Agents::Requests::Request::Checkpoint::Checkpoint()
    :
    message_type{YType::enumeration, "message-type"},
    data_length{YType::uint32, "data-length"},
    filename{YType::str, "filename"}
{

    yang_name = "checkpoint"; yang_parent_name = "request"; is_top_level_class = false; has_list_ancestor = true; 
}

Issu::Internals::Agents::Requests::Request::Checkpoint::~Checkpoint()
{
}

bool Issu::Internals::Agents::Requests::Request::Checkpoint::has_data() const
{
    if (is_presence_container) return true;
    return message_type.is_set
	|| data_length.is_set
	|| filename.is_set;
}

bool Issu::Internals::Agents::Requests::Request::Checkpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message_type.yfilter)
	|| ydk::is_set(data_length.yfilter)
	|| ydk::is_set(filename.yfilter);
}

std::string Issu::Internals::Agents::Requests::Request::Checkpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Internals::Agents::Requests::Request::Checkpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_type.is_set || is_set(message_type.yfilter)) leaf_name_data.push_back(message_type.get_name_leafdata());
    if (data_length.is_set || is_set(data_length.yfilter)) leaf_name_data.push_back(data_length.get_name_leafdata());
    if (filename.is_set || is_set(filename.yfilter)) leaf_name_data.push_back(filename.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Internals::Agents::Requests::Request::Checkpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Internals::Agents::Requests::Request::Checkpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Issu::Internals::Agents::Requests::Request::Checkpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message-type")
    {
        message_type = value;
        message_type.value_namespace = name_space;
        message_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-length")
    {
        data_length = value;
        data_length.value_namespace = name_space;
        data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filename")
    {
        filename = value;
        filename.value_namespace = name_space;
        filename.value_namespace_prefix = name_space_prefix;
    }
}

void Issu::Internals::Agents::Requests::Request::Checkpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message-type")
    {
        message_type.yfilter = yfilter;
    }
    if(value_path == "data-length")
    {
        data_length.yfilter = yfilter;
    }
    if(value_path == "filename")
    {
        filename.yfilter = yfilter;
    }
}

bool Issu::Internals::Agents::Requests::Request::Checkpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-type" || name == "data-length" || name == "filename")
        return true;
    return false;
}

Issu::Internals::Agents::Requests::Request::Agents_::Agents_()
    :
    agent(this, {"agent_index"})
{

    yang_name = "agents"; yang_parent_name = "request"; is_top_level_class = false; has_list_ancestor = true; 
}

Issu::Internals::Agents::Requests::Request::Agents_::~Agents_()
{
}

bool Issu::Internals::Agents::Requests::Request::Agents_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<agent.len(); index++)
    {
        if(agent[index]->has_data())
            return true;
    }
    return false;
}

bool Issu::Internals::Agents::Requests::Request::Agents_::has_operation() const
{
    for (std::size_t index=0; index<agent.len(); index++)
    {
        if(agent[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Issu::Internals::Agents::Requests::Request::Agents_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agents";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Internals::Agents::Requests::Request::Agents_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Internals::Agents::Requests::Request::Agents_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "agent")
    {
        auto ent_ = std::make_shared<Issu::Internals::Agents::Requests::Request::Agents_::Agent>();
        ent_->parent = this;
        agent.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Internals::Agents::Requests::Request::Agents_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : agent.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Issu::Internals::Agents::Requests::Request::Agents_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Issu::Internals::Agents::Requests::Request::Agents_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Issu::Internals::Agents::Requests::Request::Agents_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agent")
        return true;
    return false;
}

Issu::Internals::Agents::Requests::Request::Agents_::Agent::Agent()
    :
    agent_index{YType::uint32, "agent-index"},
    node{YType::str, "node"},
    waiting_for_response{YType::boolean, "waiting-for-response"}
        ,
    response_contents(std::make_shared<Issu::Internals::Agents::Requests::Request::Agents_::Agent::ResponseContents>())
{
    response_contents->parent = this;

    yang_name = "agent"; yang_parent_name = "agents"; is_top_level_class = false; has_list_ancestor = true; 
}

Issu::Internals::Agents::Requests::Request::Agents_::Agent::~Agent()
{
}

bool Issu::Internals::Agents::Requests::Request::Agents_::Agent::has_data() const
{
    if (is_presence_container) return true;
    return agent_index.is_set
	|| node.is_set
	|| waiting_for_response.is_set
	|| (response_contents !=  nullptr && response_contents->has_data());
}

bool Issu::Internals::Agents::Requests::Request::Agents_::Agent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(agent_index.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(waiting_for_response.yfilter)
	|| (response_contents !=  nullptr && response_contents->has_operation());
}

std::string Issu::Internals::Agents::Requests::Request::Agents_::Agent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agent";
    ADD_KEY_TOKEN(agent_index, "agent-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Internals::Agents::Requests::Request::Agents_::Agent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (agent_index.is_set || is_set(agent_index.yfilter)) leaf_name_data.push_back(agent_index.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (waiting_for_response.is_set || is_set(waiting_for_response.yfilter)) leaf_name_data.push_back(waiting_for_response.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Internals::Agents::Requests::Request::Agents_::Agent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "response-contents")
    {
        if(response_contents == nullptr)
        {
            response_contents = std::make_shared<Issu::Internals::Agents::Requests::Request::Agents_::Agent::ResponseContents>();
        }
        return response_contents;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Internals::Agents::Requests::Request::Agents_::Agent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(response_contents != nullptr)
    {
        _children["response-contents"] = response_contents;
    }

    return _children;
}

void Issu::Internals::Agents::Requests::Request::Agents_::Agent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "agent-index")
    {
        agent_index = value;
        agent_index.value_namespace = name_space;
        agent_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waiting-for-response")
    {
        waiting_for_response = value;
        waiting_for_response.value_namespace = name_space;
        waiting_for_response.value_namespace_prefix = name_space_prefix;
    }
}

void Issu::Internals::Agents::Requests::Request::Agents_::Agent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "agent-index")
    {
        agent_index.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "waiting-for-response")
    {
        waiting_for_response.yfilter = yfilter;
    }
}

bool Issu::Internals::Agents::Requests::Request::Agents_::Agent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "response-contents" || name == "agent-index" || name == "node" || name == "waiting-for-response")
        return true;
    return false;
}

Issu::Internals::Agents::Requests::Request::Agents_::Agent::ResponseContents::ResponseContents()
    :
    agent_status{YType::enumeration, "agent-status"},
    error_details{YType::str, "error-details"}
{

    yang_name = "response-contents"; yang_parent_name = "agent"; is_top_level_class = false; has_list_ancestor = true; 
}

Issu::Internals::Agents::Requests::Request::Agents_::Agent::ResponseContents::~ResponseContents()
{
}

bool Issu::Internals::Agents::Requests::Request::Agents_::Agent::ResponseContents::has_data() const
{
    if (is_presence_container) return true;
    return agent_status.is_set
	|| error_details.is_set;
}

bool Issu::Internals::Agents::Requests::Request::Agents_::Agent::ResponseContents::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(agent_status.yfilter)
	|| ydk::is_set(error_details.yfilter);
}

std::string Issu::Internals::Agents::Requests::Request::Agents_::Agent::ResponseContents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "response-contents";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Internals::Agents::Requests::Request::Agents_::Agent::ResponseContents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (agent_status.is_set || is_set(agent_status.yfilter)) leaf_name_data.push_back(agent_status.get_name_leafdata());
    if (error_details.is_set || is_set(error_details.yfilter)) leaf_name_data.push_back(error_details.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Internals::Agents::Requests::Request::Agents_::Agent::ResponseContents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Internals::Agents::Requests::Request::Agents_::Agent::ResponseContents::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Issu::Internals::Agents::Requests::Request::Agents_::Agent::ResponseContents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "agent-status")
    {
        agent_status = value;
        agent_status.value_namespace = name_space;
        agent_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-details")
    {
        error_details = value;
        error_details.value_namespace = name_space;
        error_details.value_namespace_prefix = name_space_prefix;
    }
}

void Issu::Internals::Agents::Requests::Request::Agents_::Agent::ResponseContents::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "agent-status")
    {
        agent_status.yfilter = yfilter;
    }
    if(value_path == "error-details")
    {
        error_details.yfilter = yfilter;
    }
}

bool Issu::Internals::Agents::Requests::Request::Agents_::Agent::ResponseContents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agent-status" || name == "error-details")
        return true;
    return false;
}

Issu::Internals::Agents::Inventory::Inventory()
    :
    agent(this, {"agent_index"})
{

    yang_name = "inventory"; yang_parent_name = "agents"; is_top_level_class = false; has_list_ancestor = false; 
}

Issu::Internals::Agents::Inventory::~Inventory()
{
}

bool Issu::Internals::Agents::Inventory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<agent.len(); index++)
    {
        if(agent[index]->has_data())
            return true;
    }
    return false;
}

bool Issu::Internals::Agents::Inventory::has_operation() const
{
    for (std::size_t index=0; index<agent.len(); index++)
    {
        if(agent[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Issu::Internals::Agents::Inventory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu/internals/agents/" << get_segment_path();
    return path_buffer.str();
}

std::string Issu::Internals::Agents::Inventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Internals::Agents::Inventory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Internals::Agents::Inventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "agent")
    {
        auto ent_ = std::make_shared<Issu::Internals::Agents::Inventory::Agent>();
        ent_->parent = this;
        agent.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Internals::Agents::Inventory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : agent.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Issu::Internals::Agents::Inventory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Issu::Internals::Agents::Inventory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Issu::Internals::Agents::Inventory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agent")
        return true;
    return false;
}

Issu::Internals::Agents::Inventory::Agent::Agent()
    :
    agent_index{YType::uint32, "agent-index"},
    agent_node{YType::str, "agent-node"},
    reloaded{YType::boolean, "reloaded"}
{

    yang_name = "agent"; yang_parent_name = "inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

Issu::Internals::Agents::Inventory::Agent::~Agent()
{
}

bool Issu::Internals::Agents::Inventory::Agent::has_data() const
{
    if (is_presence_container) return true;
    return agent_index.is_set
	|| agent_node.is_set
	|| reloaded.is_set;
}

bool Issu::Internals::Agents::Inventory::Agent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(agent_index.yfilter)
	|| ydk::is_set(agent_node.yfilter)
	|| ydk::is_set(reloaded.yfilter);
}

std::string Issu::Internals::Agents::Inventory::Agent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu/internals/agents/inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string Issu::Internals::Agents::Inventory::Agent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agent";
    ADD_KEY_TOKEN(agent_index, "agent-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Internals::Agents::Inventory::Agent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (agent_index.is_set || is_set(agent_index.yfilter)) leaf_name_data.push_back(agent_index.get_name_leafdata());
    if (agent_node.is_set || is_set(agent_node.yfilter)) leaf_name_data.push_back(agent_node.get_name_leafdata());
    if (reloaded.is_set || is_set(reloaded.yfilter)) leaf_name_data.push_back(reloaded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Internals::Agents::Inventory::Agent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Internals::Agents::Inventory::Agent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Issu::Internals::Agents::Inventory::Agent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "agent-index")
    {
        agent_index = value;
        agent_index.value_namespace = name_space;
        agent_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-node")
    {
        agent_node = value;
        agent_node.value_namespace = name_space;
        agent_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reloaded")
    {
        reloaded = value;
        reloaded.value_namespace = name_space;
        reloaded.value_namespace_prefix = name_space_prefix;
    }
}

void Issu::Internals::Agents::Inventory::Agent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "agent-index")
    {
        agent_index.yfilter = yfilter;
    }
    if(value_path == "agent-node")
    {
        agent_node.yfilter = yfilter;
    }
    if(value_path == "reloaded")
    {
        reloaded.yfilter = yfilter;
    }
}

bool Issu::Internals::Agents::Inventory::Agent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agent-index" || name == "agent-node" || name == "reloaded")
        return true;
    return false;
}

Issu::Internals::Agents::ReloadTracking::ReloadTracking()
    :
    in_progress{YType::boolean, "in-progress"},
    remaining_nodes_count{YType::uint32, "remaining-nodes-count"}
        ,
    node(this, {"node_index"})
{

    yang_name = "reload-tracking"; yang_parent_name = "agents"; is_top_level_class = false; has_list_ancestor = false; 
}

Issu::Internals::Agents::ReloadTracking::~ReloadTracking()
{
}

bool Issu::Internals::Agents::ReloadTracking::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return in_progress.is_set
	|| remaining_nodes_count.is_set;
}

bool Issu::Internals::Agents::ReloadTracking::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(in_progress.yfilter)
	|| ydk::is_set(remaining_nodes_count.yfilter);
}

std::string Issu::Internals::Agents::ReloadTracking::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu/internals/agents/" << get_segment_path();
    return path_buffer.str();
}

std::string Issu::Internals::Agents::ReloadTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reload-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Internals::Agents::ReloadTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_progress.is_set || is_set(in_progress.yfilter)) leaf_name_data.push_back(in_progress.get_name_leafdata());
    if (remaining_nodes_count.is_set || is_set(remaining_nodes_count.yfilter)) leaf_name_data.push_back(remaining_nodes_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Internals::Agents::ReloadTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<Issu::Internals::Agents::ReloadTracking::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Internals::Agents::ReloadTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Issu::Internals::Agents::ReloadTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-progress")
    {
        in_progress = value;
        in_progress.value_namespace = name_space;
        in_progress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-nodes-count")
    {
        remaining_nodes_count = value;
        remaining_nodes_count.value_namespace = name_space;
        remaining_nodes_count.value_namespace_prefix = name_space_prefix;
    }
}

void Issu::Internals::Agents::ReloadTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-progress")
    {
        in_progress.yfilter = yfilter;
    }
    if(value_path == "remaining-nodes-count")
    {
        remaining_nodes_count.yfilter = yfilter;
    }
}

bool Issu::Internals::Agents::ReloadTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "in-progress" || name == "remaining-nodes-count")
        return true;
    return false;
}

Issu::Internals::Agents::ReloadTracking::Node::Node()
    :
    node_index{YType::uint32, "node-index"},
    id{YType::str, "id"},
    reloaded{YType::boolean, "reloaded"}
{

    yang_name = "node"; yang_parent_name = "reload-tracking"; is_top_level_class = false; has_list_ancestor = false; 
}

Issu::Internals::Agents::ReloadTracking::Node::~Node()
{
}

bool Issu::Internals::Agents::ReloadTracking::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_index.is_set
	|| id.is_set
	|| reloaded.is_set;
}

bool Issu::Internals::Agents::ReloadTracking::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_index.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(reloaded.yfilter);
}

std::string Issu::Internals::Agents::ReloadTracking::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu/internals/agents/reload-tracking/" << get_segment_path();
    return path_buffer.str();
}

std::string Issu::Internals::Agents::ReloadTracking::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_index, "node-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Internals::Agents::ReloadTracking::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_index.is_set || is_set(node_index.yfilter)) leaf_name_data.push_back(node_index.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (reloaded.is_set || is_set(reloaded.yfilter)) leaf_name_data.push_back(reloaded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Internals::Agents::ReloadTracking::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Internals::Agents::ReloadTracking::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Issu::Internals::Agents::ReloadTracking::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-index")
    {
        node_index = value;
        node_index.value_namespace = name_space;
        node_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reloaded")
    {
        reloaded = value;
        reloaded.value_namespace = name_space;
        reloaded.value_namespace_prefix = name_space_prefix;
    }
}

void Issu::Internals::Agents::ReloadTracking::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-index")
    {
        node_index.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "reloaded")
    {
        reloaded.yfilter = yfilter;
    }
}

bool Issu::Internals::Agents::ReloadTracking::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-index" || name == "id" || name == "reloaded")
        return true;
    return false;
}

Issu::Internals::InventoryMonitor::InventoryMonitor()
    :
    inventory(std::make_shared<Issu::Internals::InventoryMonitor::Inventory>())
{
    inventory->parent = this;

    yang_name = "inventory-monitor"; yang_parent_name = "internals"; is_top_level_class = false; has_list_ancestor = false; 
}

Issu::Internals::InventoryMonitor::~InventoryMonitor()
{
}

bool Issu::Internals::InventoryMonitor::has_data() const
{
    if (is_presence_container) return true;
    return (inventory !=  nullptr && inventory->has_data());
}

bool Issu::Internals::InventoryMonitor::has_operation() const
{
    return is_set(yfilter)
	|| (inventory !=  nullptr && inventory->has_operation());
}

std::string Issu::Internals::InventoryMonitor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu/internals/" << get_segment_path();
    return path_buffer.str();
}

std::string Issu::Internals::InventoryMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventory-monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Internals::InventoryMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Internals::InventoryMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inventory")
    {
        if(inventory == nullptr)
        {
            inventory = std::make_shared<Issu::Internals::InventoryMonitor::Inventory>();
        }
        return inventory;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Internals::InventoryMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inventory != nullptr)
    {
        _children["inventory"] = inventory;
    }

    return _children;
}

void Issu::Internals::InventoryMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Issu::Internals::InventoryMonitor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Issu::Internals::InventoryMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inventory")
        return true;
    return false;
}

Issu::Internals::InventoryMonitor::Inventory::Inventory()
    :
    node(this, {"node"})
{

    yang_name = "inventory"; yang_parent_name = "inventory-monitor"; is_top_level_class = false; has_list_ancestor = false; 
}

Issu::Internals::InventoryMonitor::Inventory::~Inventory()
{
}

bool Issu::Internals::InventoryMonitor::Inventory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Issu::Internals::InventoryMonitor::Inventory::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Issu::Internals::InventoryMonitor::Inventory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu/internals/inventory-monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Issu::Internals::InventoryMonitor::Inventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Internals::InventoryMonitor::Inventory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Internals::InventoryMonitor::Inventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<Issu::Internals::InventoryMonitor::Inventory::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Internals::InventoryMonitor::Inventory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Issu::Internals::InventoryMonitor::Inventory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Issu::Internals::InventoryMonitor::Inventory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Issu::Internals::InventoryMonitor::Inventory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Issu::Internals::InventoryMonitor::Inventory::Node::Node()
    :
    node{YType::str, "node"},
    ip{YType::str, "ip"}
{

    yang_name = "node"; yang_parent_name = "inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

Issu::Internals::InventoryMonitor::Inventory::Node::~Node()
{
}

bool Issu::Internals::InventoryMonitor::Inventory::Node::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| ip.is_set;
}

bool Issu::Internals::InventoryMonitor::Inventory::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Issu::Internals::InventoryMonitor::Inventory::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-issu:issu/internals/inventory-monitor/inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string Issu::Internals::InventoryMonitor::Inventory::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node, "node");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Issu::Internals::InventoryMonitor::Inventory::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Issu::Internals::InventoryMonitor::Inventory::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Issu::Internals::InventoryMonitor::Inventory::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Issu::Internals::InventoryMonitor::Inventory::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Issu::Internals::InventoryMonitor::Inventory::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Issu::Internals::InventoryMonitor::Inventory::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "ip")
        return true;
    return false;
}

const Enum::YLeaf OpStage::prepare_preamble {0, "prepare-preamble"};
const Enum::YLeaf OpStage::prepare_host {1, "prepare-host"};
const Enum::YLeaf OpStage::prepare_sysadmin {2, "prepare-sysadmin"};
const Enum::YLeaf OpStage::prepare_aborting {3, "prepare-aborting"};
const Enum::YLeaf OpStage::prepare_postamble {4, "prepare-postamble"};
const Enum::YLeaf OpStage::prepare_complete {5, "prepare-complete"};
const Enum::YLeaf OpStage::activate_preamble {6, "activate-preamble"};
const Enum::YLeaf OpStage::activate_sysadmin_phase_one {7, "activate-sysadmin-phase-one"};
const Enum::YLeaf OpStage::activate_sysadmin_phase_two {8, "activate-sysadmin-phase-two"};
const Enum::YLeaf OpStage::activate_host {9, "activate-host"};
const Enum::YLeaf OpStage::activate_aborting {10, "activate-aborting"};
const Enum::YLeaf OpStage::activate_paused {11, "activate-paused"};
const Enum::YLeaf OpStage::activate_postamble {12, "activate-postamble"};
const Enum::YLeaf OpStage::activate_complete {13, "activate-complete"};

const Enum::YLeaf IssuNotif::notif_sysadmin_op_start {0, "notif-sysadmin-op-start"};
const Enum::YLeaf IssuNotif::notif_sysadmin_phase_start {1, "notif-sysadmin-phase-start"};
const Enum::YLeaf IssuNotif::notif_sysadmin_op_end {2, "notif-sysadmin-op-end"};

const Enum::YLeaf OpResult::success {0, "success"};
const Enum::YLeaf OpResult::error_input {1, "error-input"};
const Enum::YLeaf OpResult::error_orchestration {2, "error-orchestration"};
const Enum::YLeaf OpResult::error_install {3, "error-install"};
const Enum::YLeaf OpResult::error_node_redundancy {4, "error-node-redundancy"};

const Enum::YLeaf OpStartResult::start_success {0, "start-success"};
const Enum::YLeaf OpStartResult::error_operation_in_progress {1, "error-operation-in-progress"};
const Enum::YLeaf OpStartResult::activate_error_no_prepare {2, "activate-error-no-prepare"};
const Enum::YLeaf OpStartResult::prepare_error_previous_prepare {3, "prepare-error-previous-prepare"};
const Enum::YLeaf OpStartResult::recover_error_unrecoverable {4, "recover-error-unrecoverable"};
const Enum::YLeaf OpStartResult::start_error_internal {5, "start-error-internal"};

const Enum::YLeaf Issu::Status::OperationType::no_operation {0, "no-operation"};
const Enum::YLeaf Issu::Status::OperationType::activate_operation {1, "activate-operation"};
const Enum::YLeaf Issu::Status::OperationType::deactivate_operation {2, "deactivate-operation"};

const Enum::YLeaf Issu::Clients::AnnouncementStatus::announce_no_notif {0, "announce-no-notif"};
const Enum::YLeaf Issu::Clients::AnnouncementStatus::announce_in_progress {1, "announce-in-progress"};
const Enum::YLeaf Issu::Clients::AnnouncementStatus::announce_success {2, "announce-success"};
const Enum::YLeaf Issu::Clients::AnnouncementStatus::announce_veto {3, "announce-veto"};
const Enum::YLeaf Issu::Clients::AnnouncementStatus::announce_disconnect {4, "announce-disconnect"};
const Enum::YLeaf Issu::Clients::AnnouncementStatus::announce_timeout {5, "announce-timeout"};
const Enum::YLeaf Issu::Clients::AnnouncementStatus::announce_send_error {6, "announce-send-error"};
const Enum::YLeaf Issu::Clients::AnnouncementStatus::announce_client_error {7, "announce-client-error"};

const Enum::YLeaf Issu::Clients::Client::Response::notif_resp_no_notif {0, "notif-resp-no-notif"};
const Enum::YLeaf Issu::Clients::Client::Response::notif_resp_pending {1, "notif-resp-pending"};
const Enum::YLeaf Issu::Clients::Client::Response::notif_resp_ack {2, "notif-resp-ack"};
const Enum::YLeaf Issu::Clients::Client::Response::notif_resp_veto {3, "notif-resp-veto"};
const Enum::YLeaf Issu::Clients::Client::Response::notif_resp_disconnect {4, "notif-resp-disconnect"};
const Enum::YLeaf Issu::Clients::Client::Response::notif_resp_timeout {5, "notif-resp-timeout"};
const Enum::YLeaf Issu::Clients::Client::Response::notif_resp_send_error {6, "notif-resp-send-error"};
const Enum::YLeaf Issu::Clients::Client::Response::notif_resp_client_error {7, "notif-resp-client-error"};
const Enum::YLeaf Issu::Clients::Client::Response::notif_resp_client_abort {8, "notif-resp-client-abort"};

const Enum::YLeaf Issu::Internals::PhaseType::calvados_activate_phase_one {0, "calvados-activate-phase-one"};
const Enum::YLeaf Issu::Internals::PhaseType::calvados_activate_phase_two {1, "calvados-activate-phase-two"};

const Enum::YLeaf Issu::Internals::OpRequestType::operation_request_prepare {0, "operation-request-prepare"};
const Enum::YLeaf Issu::Internals::OpRequestType::operation_request_activate {1, "operation-request-activate"};
const Enum::YLeaf Issu::Internals::OpRequestType::operation_request_deactivate {2, "operation-request-deactivate"};
const Enum::YLeaf Issu::Internals::OpRequestType::operation_request_recover {3, "operation-request-recover"};

const Enum::YLeaf Issu::Internals::StageType::start {0, "start"};
const Enum::YLeaf Issu::Internals::StageType::end {1, "end"};
const Enum::YLeaf Issu::Internals::StageType::prepare_inventory_precheck {2, "prepare-inventory-precheck"};
const Enum::YLeaf Issu::Internals::StageType::prepare_expand_operation_ids {3, "prepare-expand-operation-ids"};
const Enum::YLeaf Issu::Internals::StageType::prepare_get_metadata {4, "prepare-get-metadata"};
const Enum::YLeaf Issu::Internals::StageType::prepare_extract_composite {5, "prepare-extract-composite"};
const Enum::YLeaf Issu::Internals::StageType::prepare_verify_packages {6, "prepare-verify-packages"};
const Enum::YLeaf Issu::Internals::StageType::prepare_host {7, "prepare-host"};
const Enum::YLeaf Issu::Internals::StageType::prepare_calvados {8, "prepare-calvados"};
const Enum::YLeaf Issu::Internals::StageType::prepare_deactivate_verify_packages {9, "prepare-deactivate-verify-packages"};
const Enum::YLeaf Issu::Internals::StageType::prepare_deactivate_calvados {10, "prepare-deactivate-calvados"};
const Enum::YLeaf Issu::Internals::StageType::prepare_abort {11, "prepare-abort"};
const Enum::YLeaf Issu::Internals::StageType::prepare_clean {12, "prepare-clean"};
const Enum::YLeaf Issu::Internals::StageType::activate_preamble {13, "activate-preamble"};
const Enum::YLeaf Issu::Internals::StageType::deactivate_preamble {14, "deactivate-preamble"};
const Enum::YLeaf Issu::Internals::StageType::activate_calvados_preamble {15, "activate-calvados-preamble"};
const Enum::YLeaf Issu::Internals::StageType::activate_calvados_phase {16, "activate-calvados-phase"};
const Enum::YLeaf Issu::Internals::StageType::activate_calvados_phase_reload {17, "activate-calvados-phase-reload"};
const Enum::YLeaf Issu::Internals::StageType::activate_calvados_phase_postamble {18, "activate-calvados-phase-postamble"};
const Enum::YLeaf Issu::Internals::StageType::activate_calvados_postamble {19, "activate-calvados-postamble"};
const Enum::YLeaf Issu::Internals::StageType::activate_host {20, "activate-host"};
const Enum::YLeaf Issu::Internals::StageType::activate_postamble {21, "activate-postamble"};
const Enum::YLeaf Issu::Internals::StageType::deactivate_calvados {22, "deactivate-calvados"};
const Enum::YLeaf Issu::Internals::StageType::activate_abort_no_recovery {23, "activate-abort-no-recovery"};
const Enum::YLeaf Issu::Internals::StageType::activate_abort_unrecoverable {24, "activate-abort-unrecoverable"};
const Enum::YLeaf Issu::Internals::StageType::activate_error_pause {25, "activate-error-pause"};
const Enum::YLeaf Issu::Internals::StageType::activate_calvados_recovery {26, "activate-calvados-recovery"};
const Enum::YLeaf Issu::Internals::StageType::activate_recovery_postamble {27, "activate-recovery-postamble"};

const Enum::YLeaf Issu::Internals::Agents::Requests::Request::RequestType::requests_node_ready {0, "requests-node-ready"};
const Enum::YLeaf Issu::Internals::Agents::Requests::Request::RequestType::requests_checkpoint {1, "requests-checkpoint"};
const Enum::YLeaf Issu::Internals::Agents::Requests::Request::RequestType::requests_post_upgrade_cleanup {2, "requests-post-upgrade-cleanup"};

const Enum::YLeaf Issu::Internals::Agents::Requests::Request::Checkpoint::MessageType::requests_checkpoint_start {0, "requests-checkpoint-start"};
const Enum::YLeaf Issu::Internals::Agents::Requests::Request::Checkpoint::MessageType::requests_checkpoint_end {1, "requests-checkpoint-end"};
const Enum::YLeaf Issu::Internals::Agents::Requests::Request::Checkpoint::MessageType::requests_checkpoint_update {2, "requests-checkpoint-update"};

const Enum::YLeaf Issu::Internals::Agents::Requests::Request::Agents_::Agent::ResponseContents::AgentStatus::agent_response_ok {0, "agent-response-ok"};
const Enum::YLeaf Issu::Internals::Agents::Requests::Request::Agents_::Agent::ResponseContents::AgentStatus::agent_response_error {1, "agent-response-error"};
const Enum::YLeaf Issu::Internals::Agents::Requests::Request::Agents_::Agent::ResponseContents::AgentStatus::agent_response_timeout {2, "agent-response-timeout"};
const Enum::YLeaf Issu::Internals::Agents::Requests::Request::Agents_::Agent::ResponseContents::AgentStatus::agent_response_send_failure {3, "agent-response-send-failure"};


}
}

