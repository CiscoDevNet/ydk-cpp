
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_spirit_install_instmgr_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_spirit_install_instmgr_oper {

SoftwareInstall::SoftwareInstall()
    :
    superseded(std::make_shared<SoftwareInstall::Superseded>())
    , committed_summary(std::make_shared<SoftwareInstall::CommittedSummary>())
    , active_summary(std::make_shared<SoftwareInstall::ActiveSummary>())
    , inactive_summary(std::make_shared<SoftwareInstall::InactiveSummary>())
    , prepare(std::make_shared<SoftwareInstall::Prepare>())
    , active(std::make_shared<SoftwareInstall::Active>())
    , version(std::make_shared<SoftwareInstall::Version>())
    , inactive(std::make_shared<SoftwareInstall::Inactive>())
    , request(std::make_shared<SoftwareInstall::Request>())
    , superseded_summary(std::make_shared<SoftwareInstall::SupersededSummary>())
    , issu(std::make_shared<SoftwareInstall::Issu>())
    , committed(std::make_shared<SoftwareInstall::Committed>())
    , all_operations_log(std::make_shared<SoftwareInstall::AllOperationsLog>())
    , packages(std::make_shared<SoftwareInstall::Packages>())
    , operation_logs(std::make_shared<SoftwareInstall::OperationLogs>())
    , repository(std::make_shared<SoftwareInstall::Repository>())
{
    superseded->parent = this;
    committed_summary->parent = this;
    active_summary->parent = this;
    inactive_summary->parent = this;
    prepare->parent = this;
    active->parent = this;
    version->parent = this;
    inactive->parent = this;
    request->parent = this;
    superseded_summary->parent = this;
    issu->parent = this;
    committed->parent = this;
    all_operations_log->parent = this;
    packages->parent = this;
    operation_logs->parent = this;
    repository->parent = this;

    yang_name = "software-install"; yang_parent_name = "Cisco-IOS-XR-spirit-install-instmgr-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

SoftwareInstall::~SoftwareInstall()
{
}

bool SoftwareInstall::has_data() const
{
    if (is_presence_container) return true;
    return (superseded !=  nullptr && superseded->has_data())
	|| (committed_summary !=  nullptr && committed_summary->has_data())
	|| (active_summary !=  nullptr && active_summary->has_data())
	|| (inactive_summary !=  nullptr && inactive_summary->has_data())
	|| (prepare !=  nullptr && prepare->has_data())
	|| (active !=  nullptr && active->has_data())
	|| (version !=  nullptr && version->has_data())
	|| (inactive !=  nullptr && inactive->has_data())
	|| (request !=  nullptr && request->has_data())
	|| (superseded_summary !=  nullptr && superseded_summary->has_data())
	|| (issu !=  nullptr && issu->has_data())
	|| (committed !=  nullptr && committed->has_data())
	|| (all_operations_log !=  nullptr && all_operations_log->has_data())
	|| (packages !=  nullptr && packages->has_data())
	|| (operation_logs !=  nullptr && operation_logs->has_data())
	|| (repository !=  nullptr && repository->has_data());
}

bool SoftwareInstall::has_operation() const
{
    return is_set(yfilter)
	|| (superseded !=  nullptr && superseded->has_operation())
	|| (committed_summary !=  nullptr && committed_summary->has_operation())
	|| (active_summary !=  nullptr && active_summary->has_operation())
	|| (inactive_summary !=  nullptr && inactive_summary->has_operation())
	|| (prepare !=  nullptr && prepare->has_operation())
	|| (active !=  nullptr && active->has_operation())
	|| (version !=  nullptr && version->has_operation())
	|| (inactive !=  nullptr && inactive->has_operation())
	|| (request !=  nullptr && request->has_operation())
	|| (superseded_summary !=  nullptr && superseded_summary->has_operation())
	|| (issu !=  nullptr && issu->has_operation())
	|| (committed !=  nullptr && committed->has_operation())
	|| (all_operations_log !=  nullptr && all_operations_log->has_operation())
	|| (packages !=  nullptr && packages->has_operation())
	|| (operation_logs !=  nullptr && operation_logs->has_operation())
	|| (repository !=  nullptr && repository->has_operation());
}

std::string SoftwareInstall::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "superseded")
    {
        if(superseded == nullptr)
        {
            superseded = std::make_shared<SoftwareInstall::Superseded>();
        }
        return superseded;
    }

    if(child_yang_name == "committed-summary")
    {
        if(committed_summary == nullptr)
        {
            committed_summary = std::make_shared<SoftwareInstall::CommittedSummary>();
        }
        return committed_summary;
    }

    if(child_yang_name == "active-summary")
    {
        if(active_summary == nullptr)
        {
            active_summary = std::make_shared<SoftwareInstall::ActiveSummary>();
        }
        return active_summary;
    }

    if(child_yang_name == "inactive-summary")
    {
        if(inactive_summary == nullptr)
        {
            inactive_summary = std::make_shared<SoftwareInstall::InactiveSummary>();
        }
        return inactive_summary;
    }

    if(child_yang_name == "prepare")
    {
        if(prepare == nullptr)
        {
            prepare = std::make_shared<SoftwareInstall::Prepare>();
        }
        return prepare;
    }

    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<SoftwareInstall::Active>();
        }
        return active;
    }

    if(child_yang_name == "version")
    {
        if(version == nullptr)
        {
            version = std::make_shared<SoftwareInstall::Version>();
        }
        return version;
    }

    if(child_yang_name == "inactive")
    {
        if(inactive == nullptr)
        {
            inactive = std::make_shared<SoftwareInstall::Inactive>();
        }
        return inactive;
    }

    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<SoftwareInstall::Request>();
        }
        return request;
    }

    if(child_yang_name == "superseded-summary")
    {
        if(superseded_summary == nullptr)
        {
            superseded_summary = std::make_shared<SoftwareInstall::SupersededSummary>();
        }
        return superseded_summary;
    }

    if(child_yang_name == "issu")
    {
        if(issu == nullptr)
        {
            issu = std::make_shared<SoftwareInstall::Issu>();
        }
        return issu;
    }

    if(child_yang_name == "committed")
    {
        if(committed == nullptr)
        {
            committed = std::make_shared<SoftwareInstall::Committed>();
        }
        return committed;
    }

    if(child_yang_name == "all-operations-log")
    {
        if(all_operations_log == nullptr)
        {
            all_operations_log = std::make_shared<SoftwareInstall::AllOperationsLog>();
        }
        return all_operations_log;
    }

    if(child_yang_name == "packages")
    {
        if(packages == nullptr)
        {
            packages = std::make_shared<SoftwareInstall::Packages>();
        }
        return packages;
    }

    if(child_yang_name == "operation-logs")
    {
        if(operation_logs == nullptr)
        {
            operation_logs = std::make_shared<SoftwareInstall::OperationLogs>();
        }
        return operation_logs;
    }

    if(child_yang_name == "repository")
    {
        if(repository == nullptr)
        {
            repository = std::make_shared<SoftwareInstall::Repository>();
        }
        return repository;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(superseded != nullptr)
    {
        _children["superseded"] = superseded;
    }

    if(committed_summary != nullptr)
    {
        _children["committed-summary"] = committed_summary;
    }

    if(active_summary != nullptr)
    {
        _children["active-summary"] = active_summary;
    }

    if(inactive_summary != nullptr)
    {
        _children["inactive-summary"] = inactive_summary;
    }

    if(prepare != nullptr)
    {
        _children["prepare"] = prepare;
    }

    if(active != nullptr)
    {
        _children["active"] = active;
    }

    if(version != nullptr)
    {
        _children["version"] = version;
    }

    if(inactive != nullptr)
    {
        _children["inactive"] = inactive;
    }

    if(request != nullptr)
    {
        _children["request"] = request;
    }

    if(superseded_summary != nullptr)
    {
        _children["superseded-summary"] = superseded_summary;
    }

    if(issu != nullptr)
    {
        _children["issu"] = issu;
    }

    if(committed != nullptr)
    {
        _children["committed"] = committed;
    }

    if(all_operations_log != nullptr)
    {
        _children["all-operations-log"] = all_operations_log;
    }

    if(packages != nullptr)
    {
        _children["packages"] = packages;
    }

    if(operation_logs != nullptr)
    {
        _children["operation-logs"] = operation_logs;
    }

    if(repository != nullptr)
    {
        _children["repository"] = repository;
    }

    return _children;
}

void SoftwareInstall::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SoftwareInstall::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> SoftwareInstall::clone_ptr() const
{
    return std::make_shared<SoftwareInstall>();
}

std::string SoftwareInstall::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SoftwareInstall::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SoftwareInstall::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SoftwareInstall::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SoftwareInstall::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "superseded" || name == "committed-summary" || name == "active-summary" || name == "inactive-summary" || name == "prepare" || name == "active" || name == "version" || name == "inactive" || name == "request" || name == "superseded-summary" || name == "issu" || name == "committed" || name == "all-operations-log" || name == "packages" || name == "operation-logs" || name == "repository")
        return true;
    return false;
}

SoftwareInstall::Superseded::Superseded()
    :
    superseded_package_info(this, {})
{

    yang_name = "superseded"; yang_parent_name = "software-install"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::Superseded::~Superseded()
{
}

bool SoftwareInstall::Superseded::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<superseded_package_info.len(); index++)
    {
        if(superseded_package_info[index]->has_data())
            return true;
    }
    return false;
}

bool SoftwareInstall::Superseded::has_operation() const
{
    for (std::size_t index=0; index<superseded_package_info.len(); index++)
    {
        if(superseded_package_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SoftwareInstall::Superseded::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::Superseded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "superseded";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::Superseded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::Superseded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "superseded-package-info")
    {
        auto ent_ = std::make_shared<SoftwareInstall::Superseded::SupersededPackageInfo>();
        ent_->parent = this;
        superseded_package_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::Superseded::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : superseded_package_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SoftwareInstall::Superseded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SoftwareInstall::Superseded::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SoftwareInstall::Superseded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "superseded-package-info")
        return true;
    return false;
}

SoftwareInstall::Superseded::SupersededPackageInfo::SupersededPackageInfo()
    :
    error_message{YType::str, "error-message"},
    location{YType::str, "location"},
    node_type{YType::str, "node-type"},
    boot_partition_name{YType::str, "boot-partition-name"},
    superseded_packages{YType::str, "superseded-packages"}
{

    yang_name = "superseded-package-info"; yang_parent_name = "superseded"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::Superseded::SupersededPackageInfo::~SupersededPackageInfo()
{
}

bool SoftwareInstall::Superseded::SupersededPackageInfo::has_data() const
{
    if (is_presence_container) return true;
    return error_message.is_set
	|| location.is_set
	|| node_type.is_set
	|| boot_partition_name.is_set
	|| superseded_packages.is_set;
}

bool SoftwareInstall::Superseded::SupersededPackageInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(node_type.yfilter)
	|| ydk::is_set(boot_partition_name.yfilter)
	|| ydk::is_set(superseded_packages.yfilter);
}

std::string SoftwareInstall::Superseded::SupersededPackageInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/superseded/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::Superseded::SupersededPackageInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "superseded-package-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::Superseded::SupersededPackageInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_type.is_set || is_set(node_type.yfilter)) leaf_name_data.push_back(node_type.get_name_leafdata());
    if (boot_partition_name.is_set || is_set(boot_partition_name.yfilter)) leaf_name_data.push_back(boot_partition_name.get_name_leafdata());
    if (superseded_packages.is_set || is_set(superseded_packages.yfilter)) leaf_name_data.push_back(superseded_packages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::Superseded::SupersededPackageInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::Superseded::SupersededPackageInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SoftwareInstall::Superseded::SupersededPackageInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-type")
    {
        node_type = value;
        node_type.value_namespace = name_space;
        node_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-partition-name")
    {
        boot_partition_name = value;
        boot_partition_name.value_namespace = name_space;
        boot_partition_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "superseded-packages")
    {
        superseded_packages = value;
        superseded_packages.value_namespace = name_space;
        superseded_packages.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Superseded::SupersededPackageInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "node-type")
    {
        node_type.yfilter = yfilter;
    }
    if(value_path == "boot-partition-name")
    {
        boot_partition_name.yfilter = yfilter;
    }
    if(value_path == "superseded-packages")
    {
        superseded_packages.yfilter = yfilter;
    }
}

bool SoftwareInstall::Superseded::SupersededPackageInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-message" || name == "location" || name == "node-type" || name == "boot-partition-name" || name == "superseded-packages")
        return true;
    return false;
}

SoftwareInstall::CommittedSummary::CommittedSummary()
    :
    committed_package_info(this, {})
{

    yang_name = "committed-summary"; yang_parent_name = "software-install"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::CommittedSummary::~CommittedSummary()
{
}

bool SoftwareInstall::CommittedSummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<committed_package_info.len(); index++)
    {
        if(committed_package_info[index]->has_data())
            return true;
    }
    return false;
}

bool SoftwareInstall::CommittedSummary::has_operation() const
{
    for (std::size_t index=0; index<committed_package_info.len(); index++)
    {
        if(committed_package_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SoftwareInstall::CommittedSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::CommittedSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "committed-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::CommittedSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::CommittedSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "committed-package-info")
    {
        auto ent_ = std::make_shared<SoftwareInstall::CommittedSummary::CommittedPackageInfo>();
        ent_->parent = this;
        committed_package_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::CommittedSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : committed_package_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SoftwareInstall::CommittedSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SoftwareInstall::CommittedSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SoftwareInstall::CommittedSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "committed-package-info")
        return true;
    return false;
}

SoftwareInstall::CommittedSummary::CommittedPackageInfo::CommittedPackageInfo()
    :
    error_message{YType::str, "error-message"},
    location{YType::str, "location"},
    node_type{YType::str, "node-type"},
    boot_partition_name{YType::str, "boot-partition-name"},
    number_of_committed_packages{YType::uint32, "number-of-committed-packages"},
    committed_packages{YType::str, "committed-packages"}
{

    yang_name = "committed-package-info"; yang_parent_name = "committed-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::CommittedSummary::CommittedPackageInfo::~CommittedPackageInfo()
{
}

bool SoftwareInstall::CommittedSummary::CommittedPackageInfo::has_data() const
{
    if (is_presence_container) return true;
    return error_message.is_set
	|| location.is_set
	|| node_type.is_set
	|| boot_partition_name.is_set
	|| number_of_committed_packages.is_set
	|| committed_packages.is_set;
}

bool SoftwareInstall::CommittedSummary::CommittedPackageInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(node_type.yfilter)
	|| ydk::is_set(boot_partition_name.yfilter)
	|| ydk::is_set(number_of_committed_packages.yfilter)
	|| ydk::is_set(committed_packages.yfilter);
}

std::string SoftwareInstall::CommittedSummary::CommittedPackageInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/committed-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::CommittedSummary::CommittedPackageInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "committed-package-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::CommittedSummary::CommittedPackageInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_type.is_set || is_set(node_type.yfilter)) leaf_name_data.push_back(node_type.get_name_leafdata());
    if (boot_partition_name.is_set || is_set(boot_partition_name.yfilter)) leaf_name_data.push_back(boot_partition_name.get_name_leafdata());
    if (number_of_committed_packages.is_set || is_set(number_of_committed_packages.yfilter)) leaf_name_data.push_back(number_of_committed_packages.get_name_leafdata());
    if (committed_packages.is_set || is_set(committed_packages.yfilter)) leaf_name_data.push_back(committed_packages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::CommittedSummary::CommittedPackageInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::CommittedSummary::CommittedPackageInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SoftwareInstall::CommittedSummary::CommittedPackageInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-type")
    {
        node_type = value;
        node_type.value_namespace = name_space;
        node_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-partition-name")
    {
        boot_partition_name = value;
        boot_partition_name.value_namespace = name_space;
        boot_partition_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-committed-packages")
    {
        number_of_committed_packages = value;
        number_of_committed_packages.value_namespace = name_space;
        number_of_committed_packages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "committed-packages")
    {
        committed_packages = value;
        committed_packages.value_namespace = name_space;
        committed_packages.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::CommittedSummary::CommittedPackageInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "node-type")
    {
        node_type.yfilter = yfilter;
    }
    if(value_path == "boot-partition-name")
    {
        boot_partition_name.yfilter = yfilter;
    }
    if(value_path == "number-of-committed-packages")
    {
        number_of_committed_packages.yfilter = yfilter;
    }
    if(value_path == "committed-packages")
    {
        committed_packages.yfilter = yfilter;
    }
}

bool SoftwareInstall::CommittedSummary::CommittedPackageInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-message" || name == "location" || name == "node-type" || name == "boot-partition-name" || name == "number-of-committed-packages" || name == "committed-packages")
        return true;
    return false;
}

SoftwareInstall::ActiveSummary::ActiveSummary()
    :
    active_package_info(this, {})
{

    yang_name = "active-summary"; yang_parent_name = "software-install"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::ActiveSummary::~ActiveSummary()
{
}

bool SoftwareInstall::ActiveSummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<active_package_info.len(); index++)
    {
        if(active_package_info[index]->has_data())
            return true;
    }
    return false;
}

bool SoftwareInstall::ActiveSummary::has_operation() const
{
    for (std::size_t index=0; index<active_package_info.len(); index++)
    {
        if(active_package_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SoftwareInstall::ActiveSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::ActiveSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::ActiveSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::ActiveSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-package-info")
    {
        auto ent_ = std::make_shared<SoftwareInstall::ActiveSummary::ActivePackageInfo>();
        ent_->parent = this;
        active_package_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::ActiveSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : active_package_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SoftwareInstall::ActiveSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SoftwareInstall::ActiveSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SoftwareInstall::ActiveSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-package-info")
        return true;
    return false;
}

SoftwareInstall::ActiveSummary::ActivePackageInfo::ActivePackageInfo()
    :
    error_message{YType::str, "error-message"},
    location{YType::str, "location"},
    node_type{YType::str, "node-type"},
    boot_partition_name{YType::str, "boot-partition-name"},
    number_of_active_packages{YType::uint32, "number-of-active-packages"},
    active_packages{YType::str, "active-packages"}
{

    yang_name = "active-package-info"; yang_parent_name = "active-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::ActiveSummary::ActivePackageInfo::~ActivePackageInfo()
{
}

bool SoftwareInstall::ActiveSummary::ActivePackageInfo::has_data() const
{
    if (is_presence_container) return true;
    return error_message.is_set
	|| location.is_set
	|| node_type.is_set
	|| boot_partition_name.is_set
	|| number_of_active_packages.is_set
	|| active_packages.is_set;
}

bool SoftwareInstall::ActiveSummary::ActivePackageInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(node_type.yfilter)
	|| ydk::is_set(boot_partition_name.yfilter)
	|| ydk::is_set(number_of_active_packages.yfilter)
	|| ydk::is_set(active_packages.yfilter);
}

std::string SoftwareInstall::ActiveSummary::ActivePackageInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/active-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::ActiveSummary::ActivePackageInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-package-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::ActiveSummary::ActivePackageInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_type.is_set || is_set(node_type.yfilter)) leaf_name_data.push_back(node_type.get_name_leafdata());
    if (boot_partition_name.is_set || is_set(boot_partition_name.yfilter)) leaf_name_data.push_back(boot_partition_name.get_name_leafdata());
    if (number_of_active_packages.is_set || is_set(number_of_active_packages.yfilter)) leaf_name_data.push_back(number_of_active_packages.get_name_leafdata());
    if (active_packages.is_set || is_set(active_packages.yfilter)) leaf_name_data.push_back(active_packages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::ActiveSummary::ActivePackageInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::ActiveSummary::ActivePackageInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SoftwareInstall::ActiveSummary::ActivePackageInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-type")
    {
        node_type = value;
        node_type.value_namespace = name_space;
        node_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-partition-name")
    {
        boot_partition_name = value;
        boot_partition_name.value_namespace = name_space;
        boot_partition_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-active-packages")
    {
        number_of_active_packages = value;
        number_of_active_packages.value_namespace = name_space;
        number_of_active_packages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-packages")
    {
        active_packages = value;
        active_packages.value_namespace = name_space;
        active_packages.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::ActiveSummary::ActivePackageInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "node-type")
    {
        node_type.yfilter = yfilter;
    }
    if(value_path == "boot-partition-name")
    {
        boot_partition_name.yfilter = yfilter;
    }
    if(value_path == "number-of-active-packages")
    {
        number_of_active_packages.yfilter = yfilter;
    }
    if(value_path == "active-packages")
    {
        active_packages.yfilter = yfilter;
    }
}

bool SoftwareInstall::ActiveSummary::ActivePackageInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-message" || name == "location" || name == "node-type" || name == "boot-partition-name" || name == "number-of-active-packages" || name == "active-packages")
        return true;
    return false;
}

SoftwareInstall::InactiveSummary::InactiveSummary()
    :
    log{YType::str, "log"}
{

    yang_name = "inactive-summary"; yang_parent_name = "software-install"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::InactiveSummary::~InactiveSummary()
{
}

bool SoftwareInstall::InactiveSummary::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool SoftwareInstall::InactiveSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::InactiveSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::InactiveSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::InactiveSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::InactiveSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::InactiveSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SoftwareInstall::InactiveSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::InactiveSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::InactiveSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::Prepare::Prepare()
    :
    no_prepare_done{YType::str, "no-prepare-done"},
    prepared_boot_image{YType::str, "prepared-boot-image"},
    prepared_boot_partition{YType::str, "prepared-boot-partition"},
    restart_type{YType::str, "restart-type"},
    activate_message{YType::str, "activate-message"},
    prepare_clean_message{YType::str, "prepare-clean-message"}
        ,
    rpm(this, {})
    , package(this, {})
{

    yang_name = "prepare"; yang_parent_name = "software-install"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::Prepare::~Prepare()
{
}

bool SoftwareInstall::Prepare::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpm.len(); index++)
    {
        if(rpm[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<package.len(); index++)
    {
        if(package[index]->has_data())
            return true;
    }
    return no_prepare_done.is_set
	|| prepared_boot_image.is_set
	|| prepared_boot_partition.is_set
	|| restart_type.is_set
	|| activate_message.is_set
	|| prepare_clean_message.is_set;
}

bool SoftwareInstall::Prepare::has_operation() const
{
    for (std::size_t index=0; index<rpm.len(); index++)
    {
        if(rpm[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<package.len(); index++)
    {
        if(package[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(no_prepare_done.yfilter)
	|| ydk::is_set(prepared_boot_image.yfilter)
	|| ydk::is_set(prepared_boot_partition.yfilter)
	|| ydk::is_set(restart_type.yfilter)
	|| ydk::is_set(activate_message.yfilter)
	|| ydk::is_set(prepare_clean_message.yfilter);
}

std::string SoftwareInstall::Prepare::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::Prepare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepare";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::Prepare::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_prepare_done.is_set || is_set(no_prepare_done.yfilter)) leaf_name_data.push_back(no_prepare_done.get_name_leafdata());
    if (prepared_boot_image.is_set || is_set(prepared_boot_image.yfilter)) leaf_name_data.push_back(prepared_boot_image.get_name_leafdata());
    if (prepared_boot_partition.is_set || is_set(prepared_boot_partition.yfilter)) leaf_name_data.push_back(prepared_boot_partition.get_name_leafdata());
    if (restart_type.is_set || is_set(restart_type.yfilter)) leaf_name_data.push_back(restart_type.get_name_leafdata());
    if (activate_message.is_set || is_set(activate_message.yfilter)) leaf_name_data.push_back(activate_message.get_name_leafdata());
    if (prepare_clean_message.is_set || is_set(prepare_clean_message.yfilter)) leaf_name_data.push_back(prepare_clean_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::Prepare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpm")
    {
        auto ent_ = std::make_shared<SoftwareInstall::Prepare::Rpm>();
        ent_->parent = this;
        rpm.append(ent_);
        return ent_;
    }

    if(child_yang_name == "package")
    {
        auto ent_ = std::make_shared<SoftwareInstall::Prepare::Package>();
        ent_->parent = this;
        package.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::Prepare::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rpm.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

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

void SoftwareInstall::Prepare::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-prepare-done")
    {
        no_prepare_done = value;
        no_prepare_done.value_namespace = name_space;
        no_prepare_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepared-boot-image")
    {
        prepared_boot_image = value;
        prepared_boot_image.value_namespace = name_space;
        prepared_boot_image.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepared-boot-partition")
    {
        prepared_boot_partition = value;
        prepared_boot_partition.value_namespace = name_space;
        prepared_boot_partition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-type")
    {
        restart_type = value;
        restart_type.value_namespace = name_space;
        restart_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate-message")
    {
        activate_message = value;
        activate_message.value_namespace = name_space;
        activate_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepare-clean-message")
    {
        prepare_clean_message = value;
        prepare_clean_message.value_namespace = name_space;
        prepare_clean_message.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Prepare::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-prepare-done")
    {
        no_prepare_done.yfilter = yfilter;
    }
    if(value_path == "prepared-boot-image")
    {
        prepared_boot_image.yfilter = yfilter;
    }
    if(value_path == "prepared-boot-partition")
    {
        prepared_boot_partition.yfilter = yfilter;
    }
    if(value_path == "restart-type")
    {
        restart_type.yfilter = yfilter;
    }
    if(value_path == "activate-message")
    {
        activate_message.yfilter = yfilter;
    }
    if(value_path == "prepare-clean-message")
    {
        prepare_clean_message.yfilter = yfilter;
    }
}

bool SoftwareInstall::Prepare::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpm" || name == "package" || name == "no-prepare-done" || name == "prepared-boot-image" || name == "prepared-boot-partition" || name == "restart-type" || name == "activate-message" || name == "prepare-clean-message")
        return true;
    return false;
}

SoftwareInstall::Prepare::Rpm::Rpm()
    :
    package{YType::str, "package"}
{

    yang_name = "rpm"; yang_parent_name = "prepare"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::Prepare::Rpm::~Rpm()
{
}

bool SoftwareInstall::Prepare::Rpm::has_data() const
{
    if (is_presence_container) return true;
    return package.is_set;
}

bool SoftwareInstall::Prepare::Rpm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(package.yfilter);
}

std::string SoftwareInstall::Prepare::Rpm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/prepare/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::Prepare::Rpm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::Prepare::Rpm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (package.is_set || is_set(package.yfilter)) leaf_name_data.push_back(package.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::Prepare::Rpm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::Prepare::Rpm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SoftwareInstall::Prepare::Rpm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "package")
    {
        package = value;
        package.value_namespace = name_space;
        package.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Prepare::Rpm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "package")
    {
        package.yfilter = yfilter;
    }
}

bool SoftwareInstall::Prepare::Rpm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package")
        return true;
    return false;
}

SoftwareInstall::Prepare::Package::Package()
    :
    package{YType::str, "package"}
{

    yang_name = "package"; yang_parent_name = "prepare"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::Prepare::Package::~Package()
{
}

bool SoftwareInstall::Prepare::Package::has_data() const
{
    if (is_presence_container) return true;
    return package.is_set;
}

bool SoftwareInstall::Prepare::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(package.yfilter);
}

std::string SoftwareInstall::Prepare::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/prepare/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::Prepare::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::Prepare::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (package.is_set || is_set(package.yfilter)) leaf_name_data.push_back(package.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::Prepare::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::Prepare::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SoftwareInstall::Prepare::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "package")
    {
        package = value;
        package.value_namespace = name_space;
        package.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Prepare::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "package")
    {
        package.yfilter = yfilter;
    }
}

bool SoftwareInstall::Prepare::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package")
        return true;
    return false;
}

SoftwareInstall::Active::Active()
    :
    active_package_info(this, {})
{

    yang_name = "active"; yang_parent_name = "software-install"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::Active::~Active()
{
}

bool SoftwareInstall::Active::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<active_package_info.len(); index++)
    {
        if(active_package_info[index]->has_data())
            return true;
    }
    return false;
}

bool SoftwareInstall::Active::has_operation() const
{
    for (std::size_t index=0; index<active_package_info.len(); index++)
    {
        if(active_package_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SoftwareInstall::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-package-info")
    {
        auto ent_ = std::make_shared<SoftwareInstall::Active::ActivePackageInfo>();
        ent_->parent = this;
        active_package_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : active_package_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SoftwareInstall::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SoftwareInstall::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SoftwareInstall::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-package-info")
        return true;
    return false;
}

SoftwareInstall::Active::ActivePackageInfo::ActivePackageInfo()
    :
    error_message{YType::str, "error-message"},
    location{YType::str, "location"},
    node_type{YType::str, "node-type"},
    boot_partition_name{YType::str, "boot-partition-name"},
    number_of_active_packages{YType::uint32, "number-of-active-packages"},
    active_packages{YType::str, "active-packages"}
{

    yang_name = "active-package-info"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::Active::ActivePackageInfo::~ActivePackageInfo()
{
}

bool SoftwareInstall::Active::ActivePackageInfo::has_data() const
{
    if (is_presence_container) return true;
    return error_message.is_set
	|| location.is_set
	|| node_type.is_set
	|| boot_partition_name.is_set
	|| number_of_active_packages.is_set
	|| active_packages.is_set;
}

bool SoftwareInstall::Active::ActivePackageInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(node_type.yfilter)
	|| ydk::is_set(boot_partition_name.yfilter)
	|| ydk::is_set(number_of_active_packages.yfilter)
	|| ydk::is_set(active_packages.yfilter);
}

std::string SoftwareInstall::Active::ActivePackageInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/active/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::Active::ActivePackageInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-package-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::Active::ActivePackageInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_type.is_set || is_set(node_type.yfilter)) leaf_name_data.push_back(node_type.get_name_leafdata());
    if (boot_partition_name.is_set || is_set(boot_partition_name.yfilter)) leaf_name_data.push_back(boot_partition_name.get_name_leafdata());
    if (number_of_active_packages.is_set || is_set(number_of_active_packages.yfilter)) leaf_name_data.push_back(number_of_active_packages.get_name_leafdata());
    if (active_packages.is_set || is_set(active_packages.yfilter)) leaf_name_data.push_back(active_packages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::Active::ActivePackageInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::Active::ActivePackageInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SoftwareInstall::Active::ActivePackageInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-type")
    {
        node_type = value;
        node_type.value_namespace = name_space;
        node_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-partition-name")
    {
        boot_partition_name = value;
        boot_partition_name.value_namespace = name_space;
        boot_partition_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-active-packages")
    {
        number_of_active_packages = value;
        number_of_active_packages.value_namespace = name_space;
        number_of_active_packages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-packages")
    {
        active_packages = value;
        active_packages.value_namespace = name_space;
        active_packages.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Active::ActivePackageInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "node-type")
    {
        node_type.yfilter = yfilter;
    }
    if(value_path == "boot-partition-name")
    {
        boot_partition_name.yfilter = yfilter;
    }
    if(value_path == "number-of-active-packages")
    {
        number_of_active_packages.yfilter = yfilter;
    }
    if(value_path == "active-packages")
    {
        active_packages.yfilter = yfilter;
    }
}

bool SoftwareInstall::Active::ActivePackageInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-message" || name == "location" || name == "node-type" || name == "boot-partition-name" || name == "number-of-active-packages" || name == "active-packages")
        return true;
    return false;
}

SoftwareInstall::Version::Version()
    :
    location{YType::str, "location"},
    label{YType::str, "label"},
    copyright_info{YType::str, "copyright-info"},
    hardware_info{YType::str, "hardware-info"},
    system_uptime{YType::str, "system-uptime"}
        ,
    package(this, {})
{

    yang_name = "version"; yang_parent_name = "software-install"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::Version::~Version()
{
}

bool SoftwareInstall::Version::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<package.len(); index++)
    {
        if(package[index]->has_data())
            return true;
    }
    return location.is_set
	|| label.is_set
	|| copyright_info.is_set
	|| hardware_info.is_set
	|| system_uptime.is_set;
}

bool SoftwareInstall::Version::has_operation() const
{
    for (std::size_t index=0; index<package.len(); index++)
    {
        if(package[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(copyright_info.yfilter)
	|| ydk::is_set(hardware_info.yfilter)
	|| ydk::is_set(system_uptime.yfilter);
}

std::string SoftwareInstall::Version::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::Version::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::Version::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (copyright_info.is_set || is_set(copyright_info.yfilter)) leaf_name_data.push_back(copyright_info.get_name_leafdata());
    if (hardware_info.is_set || is_set(hardware_info.yfilter)) leaf_name_data.push_back(hardware_info.get_name_leafdata());
    if (system_uptime.is_set || is_set(system_uptime.yfilter)) leaf_name_data.push_back(system_uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::Version::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        auto ent_ = std::make_shared<SoftwareInstall::Version::Package>();
        ent_->parent = this;
        package.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::Version::get_children() const
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

void SoftwareInstall::Version::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "copyright-info")
    {
        copyright_info = value;
        copyright_info.value_namespace = name_space;
        copyright_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-info")
    {
        hardware_info = value;
        hardware_info.value_namespace = name_space;
        hardware_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-uptime")
    {
        system_uptime = value;
        system_uptime.value_namespace = name_space;
        system_uptime.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Version::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "copyright-info")
    {
        copyright_info.yfilter = yfilter;
    }
    if(value_path == "hardware-info")
    {
        hardware_info.yfilter = yfilter;
    }
    if(value_path == "system-uptime")
    {
        system_uptime.yfilter = yfilter;
    }
}

bool SoftwareInstall::Version::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "location" || name == "label" || name == "copyright-info" || name == "hardware-info" || name == "system-uptime")
        return true;
    return false;
}

SoftwareInstall::Version::Package::Package()
    :
    name{YType::str, "name"},
    version{YType::str, "version"},
    built_by{YType::str, "built-by"},
    built_on{YType::str, "built-on"},
    build_host{YType::str, "build-host"},
    workspace{YType::str, "workspace"}
{

    yang_name = "package"; yang_parent_name = "version"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::Version::Package::~Package()
{
}

bool SoftwareInstall::Version::Package::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| version.is_set
	|| built_by.is_set
	|| built_on.is_set
	|| build_host.is_set
	|| workspace.is_set;
}

bool SoftwareInstall::Version::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(built_by.yfilter)
	|| ydk::is_set(built_on.yfilter)
	|| ydk::is_set(build_host.yfilter)
	|| ydk::is_set(workspace.yfilter);
}

std::string SoftwareInstall::Version::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/version/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::Version::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::Version::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (built_by.is_set || is_set(built_by.yfilter)) leaf_name_data.push_back(built_by.get_name_leafdata());
    if (built_on.is_set || is_set(built_on.yfilter)) leaf_name_data.push_back(built_on.get_name_leafdata());
    if (build_host.is_set || is_set(build_host.yfilter)) leaf_name_data.push_back(build_host.get_name_leafdata());
    if (workspace.is_set || is_set(workspace.yfilter)) leaf_name_data.push_back(workspace.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::Version::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::Version::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SoftwareInstall::Version::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "built-by")
    {
        built_by = value;
        built_by.value_namespace = name_space;
        built_by.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "built-on")
    {
        built_on = value;
        built_on.value_namespace = name_space;
        built_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "build-host")
    {
        build_host = value;
        build_host.value_namespace = name_space;
        build_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "workspace")
    {
        workspace = value;
        workspace.value_namespace = name_space;
        workspace.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Version::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "built-by")
    {
        built_by.yfilter = yfilter;
    }
    if(value_path == "built-on")
    {
        built_on.yfilter = yfilter;
    }
    if(value_path == "build-host")
    {
        build_host.yfilter = yfilter;
    }
    if(value_path == "workspace")
    {
        workspace.yfilter = yfilter;
    }
}

bool SoftwareInstall::Version::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "version" || name == "built-by" || name == "built-on" || name == "build-host" || name == "workspace")
        return true;
    return false;
}

SoftwareInstall::Inactive::Inactive()
    :
    log{YType::str, "log"}
{

    yang_name = "inactive"; yang_parent_name = "software-install"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::Inactive::~Inactive()
{
}

bool SoftwareInstall::Inactive::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool SoftwareInstall::Inactive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::Inactive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::Inactive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::Inactive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::Inactive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::Inactive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SoftwareInstall::Inactive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Inactive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::Inactive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::Request::Request()
    :
    curr_inst_oper{YType::str, "curr-inst-oper"}
{

    yang_name = "request"; yang_parent_name = "software-install"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::Request::~Request()
{
}

bool SoftwareInstall::Request::has_data() const
{
    if (is_presence_container) return true;
    return curr_inst_oper.is_set;
}

bool SoftwareInstall::Request::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(curr_inst_oper.yfilter);
}

std::string SoftwareInstall::Request::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::Request::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (curr_inst_oper.is_set || is_set(curr_inst_oper.yfilter)) leaf_name_data.push_back(curr_inst_oper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SoftwareInstall::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "curr-inst-oper")
    {
        curr_inst_oper = value;
        curr_inst_oper.value_namespace = name_space;
        curr_inst_oper.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "curr-inst-oper")
    {
        curr_inst_oper.yfilter = yfilter;
    }
}

bool SoftwareInstall::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "curr-inst-oper")
        return true;
    return false;
}

SoftwareInstall::SupersededSummary::SupersededSummary()
    :
    log{YType::str, "log"}
{

    yang_name = "superseded-summary"; yang_parent_name = "software-install"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::SupersededSummary::~SupersededSummary()
{
}

bool SoftwareInstall::SupersededSummary::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool SoftwareInstall::SupersededSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::SupersededSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::SupersededSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "superseded-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::SupersededSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::SupersededSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::SupersededSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SoftwareInstall::SupersededSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::SupersededSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::SupersededSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::Issu::Issu()
    :
    stage(std::make_shared<SoftwareInstall::Issu::Stage>())
    , inventory(std::make_shared<SoftwareInstall::Issu::Inventory>())
{
    stage->parent = this;
    inventory->parent = this;

    yang_name = "issu"; yang_parent_name = "software-install"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::Issu::~Issu()
{
}

bool SoftwareInstall::Issu::has_data() const
{
    if (is_presence_container) return true;
    return (stage !=  nullptr && stage->has_data())
	|| (inventory !=  nullptr && inventory->has_data());
}

bool SoftwareInstall::Issu::has_operation() const
{
    return is_set(yfilter)
	|| (stage !=  nullptr && stage->has_operation())
	|| (inventory !=  nullptr && inventory->has_operation());
}

std::string SoftwareInstall::Issu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::Issu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stage")
    {
        if(stage == nullptr)
        {
            stage = std::make_shared<SoftwareInstall::Issu::Stage>();
        }
        return stage;
    }

    if(child_yang_name == "inventory")
    {
        if(inventory == nullptr)
        {
            inventory = std::make_shared<SoftwareInstall::Issu::Inventory>();
        }
        return inventory;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::Issu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stage != nullptr)
    {
        _children["stage"] = stage;
    }

    if(inventory != nullptr)
    {
        _children["inventory"] = inventory;
    }

    return _children;
}

void SoftwareInstall::Issu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SoftwareInstall::Issu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SoftwareInstall::Issu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stage" || name == "inventory")
        return true;
    return false;
}

SoftwareInstall::Issu::Stage::Stage()
    :
    state{YType::enumeration, "state"},
    issu_node_cnt{YType::int32, "issu-node-cnt"},
    issu_ready_node_cnt{YType::int32, "issu-ready-node-cnt"},
    percentage{YType::int32, "percentage"},
    issu_status{YType::enumeration, "issu-status"},
    issu_error{YType::enumeration, "issu-error"}
{

    yang_name = "stage"; yang_parent_name = "issu"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::Issu::Stage::~Stage()
{
}

bool SoftwareInstall::Issu::Stage::has_data() const
{
    if (is_presence_container) return true;
    return state.is_set
	|| issu_node_cnt.is_set
	|| issu_ready_node_cnt.is_set
	|| percentage.is_set
	|| issu_status.is_set
	|| issu_error.is_set;
}

bool SoftwareInstall::Issu::Stage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(issu_node_cnt.yfilter)
	|| ydk::is_set(issu_ready_node_cnt.yfilter)
	|| ydk::is_set(percentage.yfilter)
	|| ydk::is_set(issu_status.yfilter)
	|| ydk::is_set(issu_error.yfilter);
}

std::string SoftwareInstall::Issu::Stage::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/issu/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::Issu::Stage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stage";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::Issu::Stage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (issu_node_cnt.is_set || is_set(issu_node_cnt.yfilter)) leaf_name_data.push_back(issu_node_cnt.get_name_leafdata());
    if (issu_ready_node_cnt.is_set || is_set(issu_ready_node_cnt.yfilter)) leaf_name_data.push_back(issu_ready_node_cnt.get_name_leafdata());
    if (percentage.is_set || is_set(percentage.yfilter)) leaf_name_data.push_back(percentage.get_name_leafdata());
    if (issu_status.is_set || is_set(issu_status.yfilter)) leaf_name_data.push_back(issu_status.get_name_leafdata());
    if (issu_error.is_set || is_set(issu_error.yfilter)) leaf_name_data.push_back(issu_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::Issu::Stage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::Issu::Stage::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SoftwareInstall::Issu::Stage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-node-cnt")
    {
        issu_node_cnt = value;
        issu_node_cnt.value_namespace = name_space;
        issu_node_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-ready-node-cnt")
    {
        issu_ready_node_cnt = value;
        issu_ready_node_cnt.value_namespace = name_space;
        issu_ready_node_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percentage")
    {
        percentage = value;
        percentage.value_namespace = name_space;
        percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-status")
    {
        issu_status = value;
        issu_status.value_namespace = name_space;
        issu_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-error")
    {
        issu_error = value;
        issu_error.value_namespace = name_space;
        issu_error.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Issu::Stage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "issu-node-cnt")
    {
        issu_node_cnt.yfilter = yfilter;
    }
    if(value_path == "issu-ready-node-cnt")
    {
        issu_ready_node_cnt.yfilter = yfilter;
    }
    if(value_path == "percentage")
    {
        percentage.yfilter = yfilter;
    }
    if(value_path == "issu-status")
    {
        issu_status.yfilter = yfilter;
    }
    if(value_path == "issu-error")
    {
        issu_error.yfilter = yfilter;
    }
}

bool SoftwareInstall::Issu::Stage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "issu-node-cnt" || name == "issu-ready-node-cnt" || name == "percentage" || name == "issu-status" || name == "issu-error")
        return true;
    return false;
}

SoftwareInstall::Issu::Inventory::Inventory()
    :
    invinfo(this, {})
{

    yang_name = "inventory"; yang_parent_name = "issu"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::Issu::Inventory::~Inventory()
{
}

bool SoftwareInstall::Issu::Inventory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<invinfo.len(); index++)
    {
        if(invinfo[index]->has_data())
            return true;
    }
    return false;
}

bool SoftwareInstall::Issu::Inventory::has_operation() const
{
    for (std::size_t index=0; index<invinfo.len(); index++)
    {
        if(invinfo[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SoftwareInstall::Issu::Inventory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/issu/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::Issu::Inventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::Issu::Inventory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::Issu::Inventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invinfo")
    {
        auto ent_ = std::make_shared<SoftwareInstall::Issu::Inventory::Invinfo>();
        ent_->parent = this;
        invinfo.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::Issu::Inventory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : invinfo.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SoftwareInstall::Issu::Inventory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SoftwareInstall::Issu::Inventory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SoftwareInstall::Issu::Inventory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invinfo")
        return true;
    return false;
}

SoftwareInstall::Issu::Inventory::Invinfo::Invinfo()
    :
    node_id{YType::int32, "node-id"},
    node_type{YType::enumeration, "node-type"},
    issu_node_role{YType::enumeration, "issu-node-role"},
    node_state{YType::enumeration, "node-state"},
    node_role{YType::enumeration, "node-role"}
{

    yang_name = "invinfo"; yang_parent_name = "inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::Issu::Inventory::Invinfo::~Invinfo()
{
}

bool SoftwareInstall::Issu::Inventory::Invinfo::has_data() const
{
    if (is_presence_container) return true;
    return node_id.is_set
	|| node_type.is_set
	|| issu_node_role.is_set
	|| node_state.is_set
	|| node_role.is_set;
}

bool SoftwareInstall::Issu::Inventory::Invinfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(node_type.yfilter)
	|| ydk::is_set(issu_node_role.yfilter)
	|| ydk::is_set(node_state.yfilter)
	|| ydk::is_set(node_role.yfilter);
}

std::string SoftwareInstall::Issu::Inventory::Invinfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/issu/inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::Issu::Inventory::Invinfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invinfo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::Issu::Inventory::Invinfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (node_type.is_set || is_set(node_type.yfilter)) leaf_name_data.push_back(node_type.get_name_leafdata());
    if (issu_node_role.is_set || is_set(issu_node_role.yfilter)) leaf_name_data.push_back(issu_node_role.get_name_leafdata());
    if (node_state.is_set || is_set(node_state.yfilter)) leaf_name_data.push_back(node_state.get_name_leafdata());
    if (node_role.is_set || is_set(node_role.yfilter)) leaf_name_data.push_back(node_role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::Issu::Inventory::Invinfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::Issu::Inventory::Invinfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SoftwareInstall::Issu::Inventory::Invinfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-type")
    {
        node_type = value;
        node_type.value_namespace = name_space;
        node_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-node-role")
    {
        issu_node_role = value;
        issu_node_role.value_namespace = name_space;
        issu_node_role.value_namespace_prefix = name_space_prefix;
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
}

void SoftwareInstall::Issu::Inventory::Invinfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "node-type")
    {
        node_type.yfilter = yfilter;
    }
    if(value_path == "issu-node-role")
    {
        issu_node_role.yfilter = yfilter;
    }
    if(value_path == "node-state")
    {
        node_state.yfilter = yfilter;
    }
    if(value_path == "node-role")
    {
        node_role.yfilter = yfilter;
    }
}

bool SoftwareInstall::Issu::Inventory::Invinfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "node-type" || name == "issu-node-role" || name == "node-state" || name == "node-role")
        return true;
    return false;
}

SoftwareInstall::Committed::Committed()
    :
    committed_package_info(this, {})
{

    yang_name = "committed"; yang_parent_name = "software-install"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::Committed::~Committed()
{
}

bool SoftwareInstall::Committed::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<committed_package_info.len(); index++)
    {
        if(committed_package_info[index]->has_data())
            return true;
    }
    return false;
}

bool SoftwareInstall::Committed::has_operation() const
{
    for (std::size_t index=0; index<committed_package_info.len(); index++)
    {
        if(committed_package_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SoftwareInstall::Committed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::Committed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "committed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::Committed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::Committed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "committed-package-info")
    {
        auto ent_ = std::make_shared<SoftwareInstall::Committed::CommittedPackageInfo>();
        ent_->parent = this;
        committed_package_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::Committed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : committed_package_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SoftwareInstall::Committed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SoftwareInstall::Committed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SoftwareInstall::Committed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "committed-package-info")
        return true;
    return false;
}

SoftwareInstall::Committed::CommittedPackageInfo::CommittedPackageInfo()
    :
    error_message{YType::str, "error-message"},
    location{YType::str, "location"},
    node_type{YType::str, "node-type"},
    boot_partition_name{YType::str, "boot-partition-name"},
    number_of_committed_packages{YType::uint32, "number-of-committed-packages"},
    committed_packages{YType::str, "committed-packages"}
{

    yang_name = "committed-package-info"; yang_parent_name = "committed"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::Committed::CommittedPackageInfo::~CommittedPackageInfo()
{
}

bool SoftwareInstall::Committed::CommittedPackageInfo::has_data() const
{
    if (is_presence_container) return true;
    return error_message.is_set
	|| location.is_set
	|| node_type.is_set
	|| boot_partition_name.is_set
	|| number_of_committed_packages.is_set
	|| committed_packages.is_set;
}

bool SoftwareInstall::Committed::CommittedPackageInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(node_type.yfilter)
	|| ydk::is_set(boot_partition_name.yfilter)
	|| ydk::is_set(number_of_committed_packages.yfilter)
	|| ydk::is_set(committed_packages.yfilter);
}

std::string SoftwareInstall::Committed::CommittedPackageInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/committed/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::Committed::CommittedPackageInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "committed-package-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::Committed::CommittedPackageInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_type.is_set || is_set(node_type.yfilter)) leaf_name_data.push_back(node_type.get_name_leafdata());
    if (boot_partition_name.is_set || is_set(boot_partition_name.yfilter)) leaf_name_data.push_back(boot_partition_name.get_name_leafdata());
    if (number_of_committed_packages.is_set || is_set(number_of_committed_packages.yfilter)) leaf_name_data.push_back(number_of_committed_packages.get_name_leafdata());
    if (committed_packages.is_set || is_set(committed_packages.yfilter)) leaf_name_data.push_back(committed_packages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::Committed::CommittedPackageInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::Committed::CommittedPackageInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SoftwareInstall::Committed::CommittedPackageInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-type")
    {
        node_type = value;
        node_type.value_namespace = name_space;
        node_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-partition-name")
    {
        boot_partition_name = value;
        boot_partition_name.value_namespace = name_space;
        boot_partition_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-committed-packages")
    {
        number_of_committed_packages = value;
        number_of_committed_packages.value_namespace = name_space;
        number_of_committed_packages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "committed-packages")
    {
        committed_packages = value;
        committed_packages.value_namespace = name_space;
        committed_packages.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Committed::CommittedPackageInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "node-type")
    {
        node_type.yfilter = yfilter;
    }
    if(value_path == "boot-partition-name")
    {
        boot_partition_name.yfilter = yfilter;
    }
    if(value_path == "number-of-committed-packages")
    {
        number_of_committed_packages.yfilter = yfilter;
    }
    if(value_path == "committed-packages")
    {
        committed_packages.yfilter = yfilter;
    }
}

bool SoftwareInstall::Committed::CommittedPackageInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-message" || name == "location" || name == "node-type" || name == "boot-partition-name" || name == "number-of-committed-packages" || name == "committed-packages")
        return true;
    return false;
}

SoftwareInstall::AllOperationsLog::AllOperationsLog()
    :
    reverse_detail(std::make_shared<SoftwareInstall::AllOperationsLog::ReverseDetail>())
    , reverse(std::make_shared<SoftwareInstall::AllOperationsLog::Reverse>())
    , summary(std::make_shared<SoftwareInstall::AllOperationsLog::Summary>())
    , detail(std::make_shared<SoftwareInstall::AllOperationsLog::Detail>())
{
    reverse_detail->parent = this;
    reverse->parent = this;
    summary->parent = this;
    detail->parent = this;

    yang_name = "all-operations-log"; yang_parent_name = "software-install"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::AllOperationsLog::~AllOperationsLog()
{
}

bool SoftwareInstall::AllOperationsLog::has_data() const
{
    if (is_presence_container) return true;
    return (reverse_detail !=  nullptr && reverse_detail->has_data())
	|| (reverse !=  nullptr && reverse->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool SoftwareInstall::AllOperationsLog::has_operation() const
{
    return is_set(yfilter)
	|| (reverse_detail !=  nullptr && reverse_detail->has_operation())
	|| (reverse !=  nullptr && reverse->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string SoftwareInstall::AllOperationsLog::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::AllOperationsLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-operations-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::AllOperationsLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::AllOperationsLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reverse-detail")
    {
        if(reverse_detail == nullptr)
        {
            reverse_detail = std::make_shared<SoftwareInstall::AllOperationsLog::ReverseDetail>();
        }
        return reverse_detail;
    }

    if(child_yang_name == "reverse")
    {
        if(reverse == nullptr)
        {
            reverse = std::make_shared<SoftwareInstall::AllOperationsLog::Reverse>();
        }
        return reverse;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<SoftwareInstall::AllOperationsLog::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<SoftwareInstall::AllOperationsLog::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::AllOperationsLog::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reverse_detail != nullptr)
    {
        _children["reverse-detail"] = reverse_detail;
    }

    if(reverse != nullptr)
    {
        _children["reverse"] = reverse;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(detail != nullptr)
    {
        _children["detail"] = detail;
    }

    return _children;
}

void SoftwareInstall::AllOperationsLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SoftwareInstall::AllOperationsLog::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SoftwareInstall::AllOperationsLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reverse-detail" || name == "reverse" || name == "summary" || name == "detail")
        return true;
    return false;
}

SoftwareInstall::AllOperationsLog::ReverseDetail::ReverseDetail()
    :
    log{YType::str, "log"}
{

    yang_name = "reverse-detail"; yang_parent_name = "all-operations-log"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::AllOperationsLog::ReverseDetail::~ReverseDetail()
{
}

bool SoftwareInstall::AllOperationsLog::ReverseDetail::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool SoftwareInstall::AllOperationsLog::ReverseDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::AllOperationsLog::ReverseDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/all-operations-log/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::AllOperationsLog::ReverseDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::AllOperationsLog::ReverseDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::AllOperationsLog::ReverseDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::AllOperationsLog::ReverseDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SoftwareInstall::AllOperationsLog::ReverseDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::AllOperationsLog::ReverseDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::AllOperationsLog::ReverseDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::AllOperationsLog::Reverse::Reverse()
    :
    log{YType::str, "log"}
{

    yang_name = "reverse"; yang_parent_name = "all-operations-log"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::AllOperationsLog::Reverse::~Reverse()
{
}

bool SoftwareInstall::AllOperationsLog::Reverse::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool SoftwareInstall::AllOperationsLog::Reverse::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::AllOperationsLog::Reverse::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/all-operations-log/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::AllOperationsLog::Reverse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::AllOperationsLog::Reverse::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::AllOperationsLog::Reverse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::AllOperationsLog::Reverse::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SoftwareInstall::AllOperationsLog::Reverse::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::AllOperationsLog::Reverse::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::AllOperationsLog::Reverse::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::AllOperationsLog::Summary::Summary()
    :
    log{YType::str, "log"}
{

    yang_name = "summary"; yang_parent_name = "all-operations-log"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::AllOperationsLog::Summary::~Summary()
{
}

bool SoftwareInstall::AllOperationsLog::Summary::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool SoftwareInstall::AllOperationsLog::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::AllOperationsLog::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/all-operations-log/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::AllOperationsLog::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::AllOperationsLog::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::AllOperationsLog::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::AllOperationsLog::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SoftwareInstall::AllOperationsLog::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::AllOperationsLog::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::AllOperationsLog::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::AllOperationsLog::Detail::Detail()
    :
    log{YType::str, "log"}
{

    yang_name = "detail"; yang_parent_name = "all-operations-log"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::AllOperationsLog::Detail::~Detail()
{
}

bool SoftwareInstall::AllOperationsLog::Detail::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool SoftwareInstall::AllOperationsLog::Detail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::AllOperationsLog::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/all-operations-log/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::AllOperationsLog::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::AllOperationsLog::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::AllOperationsLog::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::AllOperationsLog::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SoftwareInstall::AllOperationsLog::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::AllOperationsLog::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::AllOperationsLog::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::Packages::Packages()
    :
    package(this, {"package_name"})
{

    yang_name = "packages"; yang_parent_name = "software-install"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::Packages::~Packages()
{
}

bool SoftwareInstall::Packages::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<package.len(); index++)
    {
        if(package[index]->has_data())
            return true;
    }
    return false;
}

bool SoftwareInstall::Packages::has_operation() const
{
    for (std::size_t index=0; index<package.len(); index++)
    {
        if(package[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SoftwareInstall::Packages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::Packages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::Packages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::Packages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        auto ent_ = std::make_shared<SoftwareInstall::Packages::Package>();
        ent_->parent = this;
        package.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::Packages::get_children() const
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

void SoftwareInstall::Packages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SoftwareInstall::Packages::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SoftwareInstall::Packages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package")
        return true;
    return false;
}

SoftwareInstall::Packages::Package::Package()
    :
    package_name{YType::str, "package-name"}
        ,
    verbose(std::make_shared<SoftwareInstall::Packages::Package::Verbose>())
    , brief(std::make_shared<SoftwareInstall::Packages::Package::Brief>())
    , detail(std::make_shared<SoftwareInstall::Packages::Package::Detail>())
{
    verbose->parent = this;
    brief->parent = this;
    detail->parent = this;

    yang_name = "package"; yang_parent_name = "packages"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::Packages::Package::~Package()
{
}

bool SoftwareInstall::Packages::Package::has_data() const
{
    if (is_presence_container) return true;
    return package_name.is_set
	|| (verbose !=  nullptr && verbose->has_data())
	|| (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool SoftwareInstall::Packages::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(package_name.yfilter)
	|| (verbose !=  nullptr && verbose->has_operation())
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string SoftwareInstall::Packages::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/packages/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::Packages::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    ADD_KEY_TOKEN(package_name, "package-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::Packages::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (package_name.is_set || is_set(package_name.yfilter)) leaf_name_data.push_back(package_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::Packages::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "verbose")
    {
        if(verbose == nullptr)
        {
            verbose = std::make_shared<SoftwareInstall::Packages::Package::Verbose>();
        }
        return verbose;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<SoftwareInstall::Packages::Package::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<SoftwareInstall::Packages::Package::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::Packages::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(verbose != nullptr)
    {
        _children["verbose"] = verbose;
    }

    if(brief != nullptr)
    {
        _children["brief"] = brief;
    }

    if(detail != nullptr)
    {
        _children["detail"] = detail;
    }

    return _children;
}

void SoftwareInstall::Packages::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "package-name")
    {
        package_name = value;
        package_name.value_namespace = name_space;
        package_name.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Packages::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "package-name")
    {
        package_name.yfilter = yfilter;
    }
}

bool SoftwareInstall::Packages::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "verbose" || name == "brief" || name == "detail" || name == "package-name")
        return true;
    return false;
}

SoftwareInstall::Packages::Package::Verbose::Verbose()
    :
    log{YType::str, "log"}
{

    yang_name = "verbose"; yang_parent_name = "package"; is_top_level_class = false; has_list_ancestor = true; 
}

SoftwareInstall::Packages::Package::Verbose::~Verbose()
{
}

bool SoftwareInstall::Packages::Package::Verbose::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool SoftwareInstall::Packages::Package::Verbose::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::Packages::Package::Verbose::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verbose";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::Packages::Package::Verbose::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::Packages::Package::Verbose::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::Packages::Package::Verbose::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SoftwareInstall::Packages::Package::Verbose::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Packages::Package::Verbose::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::Packages::Package::Verbose::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::Packages::Package::Brief::Brief()
    :
    log{YType::str, "log"}
{

    yang_name = "brief"; yang_parent_name = "package"; is_top_level_class = false; has_list_ancestor = true; 
}

SoftwareInstall::Packages::Package::Brief::~Brief()
{
}

bool SoftwareInstall::Packages::Package::Brief::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool SoftwareInstall::Packages::Package::Brief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::Packages::Package::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::Packages::Package::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::Packages::Package::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::Packages::Package::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SoftwareInstall::Packages::Package::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Packages::Package::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::Packages::Package::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::Packages::Package::Detail::Detail()
    :
    log{YType::str, "log"}
{

    yang_name = "detail"; yang_parent_name = "package"; is_top_level_class = false; has_list_ancestor = true; 
}

SoftwareInstall::Packages::Package::Detail::~Detail()
{
}

bool SoftwareInstall::Packages::Package::Detail::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool SoftwareInstall::Packages::Package::Detail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::Packages::Package::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::Packages::Package::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::Packages::Package::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::Packages::Package::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SoftwareInstall::Packages::Package::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Packages::Package::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::Packages::Package::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::OperationLogs::OperationLogs()
    :
    operation_log(this, {"log_id"})
{

    yang_name = "operation-logs"; yang_parent_name = "software-install"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::OperationLogs::~OperationLogs()
{
}

bool SoftwareInstall::OperationLogs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<operation_log.len(); index++)
    {
        if(operation_log[index]->has_data())
            return true;
    }
    return false;
}

bool SoftwareInstall::OperationLogs::has_operation() const
{
    for (std::size_t index=0; index<operation_log.len(); index++)
    {
        if(operation_log[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SoftwareInstall::OperationLogs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::OperationLogs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operation-logs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::OperationLogs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::OperationLogs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operation-log")
    {
        auto ent_ = std::make_shared<SoftwareInstall::OperationLogs::OperationLog>();
        ent_->parent = this;
        operation_log.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::OperationLogs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : operation_log.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SoftwareInstall::OperationLogs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SoftwareInstall::OperationLogs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SoftwareInstall::OperationLogs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operation-log")
        return true;
    return false;
}

SoftwareInstall::OperationLogs::OperationLog::OperationLog()
    :
    log_id{YType::uint32, "log-id"}
        ,
    summary(std::make_shared<SoftwareInstall::OperationLogs::OperationLog::Summary>())
    , detail(std::make_shared<SoftwareInstall::OperationLogs::OperationLog::Detail>())
{
    summary->parent = this;
    detail->parent = this;

    yang_name = "operation-log"; yang_parent_name = "operation-logs"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::OperationLogs::OperationLog::~OperationLog()
{
}

bool SoftwareInstall::OperationLogs::OperationLog::has_data() const
{
    if (is_presence_container) return true;
    return log_id.is_set
	|| (summary !=  nullptr && summary->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool SoftwareInstall::OperationLogs::OperationLog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_id.yfilter)
	|| (summary !=  nullptr && summary->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string SoftwareInstall::OperationLogs::OperationLog::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/operation-logs/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::OperationLogs::OperationLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operation-log";
    ADD_KEY_TOKEN(log_id, "log-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::OperationLogs::OperationLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_id.is_set || is_set(log_id.yfilter)) leaf_name_data.push_back(log_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::OperationLogs::OperationLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<SoftwareInstall::OperationLogs::OperationLog::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<SoftwareInstall::OperationLogs::OperationLog::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::OperationLogs::OperationLog::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(detail != nullptr)
    {
        _children["detail"] = detail;
    }

    return _children;
}

void SoftwareInstall::OperationLogs::OperationLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-id")
    {
        log_id = value;
        log_id.value_namespace = name_space;
        log_id.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::OperationLogs::OperationLog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-id")
    {
        log_id.yfilter = yfilter;
    }
}

bool SoftwareInstall::OperationLogs::OperationLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "detail" || name == "log-id")
        return true;
    return false;
}

SoftwareInstall::OperationLogs::OperationLog::Summary::Summary()
    :
    log{YType::str, "log"}
{

    yang_name = "summary"; yang_parent_name = "operation-log"; is_top_level_class = false; has_list_ancestor = true; 
}

SoftwareInstall::OperationLogs::OperationLog::Summary::~Summary()
{
}

bool SoftwareInstall::OperationLogs::OperationLog::Summary::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool SoftwareInstall::OperationLogs::OperationLog::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::OperationLogs::OperationLog::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::OperationLogs::OperationLog::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::OperationLogs::OperationLog::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::OperationLogs::OperationLog::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SoftwareInstall::OperationLogs::OperationLog::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::OperationLogs::OperationLog::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::OperationLogs::OperationLog::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::OperationLogs::OperationLog::Detail::Detail()
    :
    log{YType::str, "log"}
{

    yang_name = "detail"; yang_parent_name = "operation-log"; is_top_level_class = false; has_list_ancestor = true; 
}

SoftwareInstall::OperationLogs::OperationLog::Detail::~Detail()
{
}

bool SoftwareInstall::OperationLogs::OperationLog::Detail::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool SoftwareInstall::OperationLogs::OperationLog::Detail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::OperationLogs::OperationLog::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::OperationLogs::OperationLog::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::OperationLogs::OperationLog::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::OperationLogs::OperationLog::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SoftwareInstall::OperationLogs::OperationLog::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::OperationLogs::OperationLog::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::OperationLogs::OperationLog::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::Repository::Repository()
    :
    xr(std::make_shared<SoftwareInstall::Repository::Xr>())
    , all(std::make_shared<SoftwareInstall::Repository::All>())
{
    xr->parent = this;
    all->parent = this;

    yang_name = "repository"; yang_parent_name = "software-install"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::Repository::~Repository()
{
}

bool SoftwareInstall::Repository::has_data() const
{
    if (is_presence_container) return true;
    return (xr !=  nullptr && xr->has_data())
	|| (all !=  nullptr && all->has_data());
}

bool SoftwareInstall::Repository::has_operation() const
{
    return is_set(yfilter)
	|| (xr !=  nullptr && xr->has_operation())
	|| (all !=  nullptr && all->has_operation());
}

std::string SoftwareInstall::Repository::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::Repository::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "repository";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::Repository::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::Repository::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xr")
    {
        if(xr == nullptr)
        {
            xr = std::make_shared<SoftwareInstall::Repository::Xr>();
        }
        return xr;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<SoftwareInstall::Repository::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::Repository::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(xr != nullptr)
    {
        _children["xr"] = xr;
    }

    if(all != nullptr)
    {
        _children["all"] = all;
    }

    return _children;
}

void SoftwareInstall::Repository::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SoftwareInstall::Repository::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SoftwareInstall::Repository::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xr" || name == "all")
        return true;
    return false;
}

SoftwareInstall::Repository::Xr::Xr()
    :
    log{YType::str, "log"}
{

    yang_name = "xr"; yang_parent_name = "repository"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::Repository::Xr::~Xr()
{
}

bool SoftwareInstall::Repository::Xr::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool SoftwareInstall::Repository::Xr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::Repository::Xr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/repository/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::Repository::Xr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::Repository::Xr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::Repository::Xr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::Repository::Xr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SoftwareInstall::Repository::Xr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Repository::Xr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::Repository::Xr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

SoftwareInstall::Repository::All::All()
    :
    log{YType::str, "log"}
{

    yang_name = "all"; yang_parent_name = "repository"; is_top_level_class = false; has_list_ancestor = false; 
}

SoftwareInstall::Repository::All::~All()
{
}

bool SoftwareInstall::Repository::All::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool SoftwareInstall::Repository::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string SoftwareInstall::Repository::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-spirit-install-instmgr-oper:software-install/repository/" << get_segment_path();
    return path_buffer.str();
}

std::string SoftwareInstall::Repository::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SoftwareInstall::Repository::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SoftwareInstall::Repository::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SoftwareInstall::Repository::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SoftwareInstall::Repository::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void SoftwareInstall::Repository::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool SoftwareInstall::Repository::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

const Enum::YLeaf IsdErrorEt::none {0, "none"};
const Enum::YLeaf IsdErrorEt::not_compatible {1, "not-compatible"};
const Enum::YLeaf IsdErrorEt::not_enough_resource {2, "not-enough-resource"};
const Enum::YLeaf IsdErrorEt::not_nsr_ready {3, "not-nsr-ready"};
const Enum::YLeaf IsdErrorEt::not_conn_sdrsm {4, "not-conn-sdrsm"};
const Enum::YLeaf IsdErrorEt::cmd_invalid {5, "cmd-invalid"};
const Enum::YLeaf IsdErrorEt::load_prep_fail {6, "load-prep-fail"};
const Enum::YLeaf IsdErrorEt::error_timeout {7, "error-timeout"};
const Enum::YLeaf IsdErrorEt::err_node_down {8, "err-node-down"};
const Enum::YLeaf IsdErrorEt::node_not_ready {9, "node-not-ready"};
const Enum::YLeaf IsdErrorEt::err_node_new {10, "err-node-new"};
const Enum::YLeaf IsdErrorEt::err_card_oir {11, "err-card-oir"};
const Enum::YLeaf IsdErrorEt::invalid_evt {12, "invalid-evt"};
const Enum::YLeaf IsdErrorEt::disconn_from_calv {13, "disconn-from-calv"};
const Enum::YLeaf IsdErrorEt::gsp_down {14, "gsp-down"};
const Enum::YLeaf IsdErrorEt::abort_by_ism {15, "abort-by-ism"};
const Enum::YLeaf IsdErrorEt::rpfo {16, "rpfo"};
const Enum::YLeaf IsdErrorEt::pkg_null {17, "pkg-null"};
const Enum::YLeaf IsdErrorEt::error_general {18, "error-general"};
const Enum::YLeaf IsdErrorEt::fsa_error {19, "fsa-error"};
const Enum::YLeaf IsdErrorEt::err_post_issu {20, "err-post-issu"};
const Enum::YLeaf IsdErrorEt::err_issu_dir_restart {21, "err-issu-dir-restart"};

const Enum::YLeaf NodeRoleEt::node_unknown {0, "node-unknown"};
const Enum::YLeaf NodeRoleEt::node_active {1, "node-active"};
const Enum::YLeaf NodeRoleEt::node_standby {2, "node-standby"};
const Enum::YLeaf NodeRoleEt::node_unusable {3, "node-unusable"};

const Enum::YLeaf IsdStateEt::none {0, "none"};
const Enum::YLeaf IsdStateEt::idle {1, "idle"};
const Enum::YLeaf IsdStateEt::init {2, "init"};
const Enum::YLeaf IsdStateEt::init_done {3, "init-done"};
const Enum::YLeaf IsdStateEt::load_prep {4, "load-prep"};
const Enum::YLeaf IsdStateEt::load_exec {5, "load-exec"};
const Enum::YLeaf IsdStateEt::load_issu_go {6, "load-issu-go"};
const Enum::YLeaf IsdStateEt::load_done {7, "load-done"};
const Enum::YLeaf IsdStateEt::run_prep_isd {8, "run-prep-isd"};
const Enum::YLeaf IsdStateEt::run_prep_ism {9, "run-prep-ism"};
const Enum::YLeaf IsdStateEt::big_bang {10, "big-bang"};
const Enum::YLeaf IsdStateEt::run_done {11, "run-done"};
const Enum::YLeaf IsdStateEt::cleanup {12, "cleanup"};
const Enum::YLeaf IsdStateEt::cleanup_done {13, "cleanup-done"};
const Enum::YLeaf IsdStateEt::abort {14, "abort"};
const Enum::YLeaf IsdStateEt::abort_done {15, "abort-done"};
const Enum::YLeaf IsdStateEt::abort_cleanup {16, "abort-cleanup"};
const Enum::YLeaf IsdStateEt::unknown_state {17, "unknown-state"};

const Enum::YLeaf IsdIssuStatusEt::ok {0, "ok"};
const Enum::YLeaf IsdIssuStatusEt::prep_done {1, "prep-done"};
const Enum::YLeaf IsdIssuStatusEt::big_bang {2, "big-bang"};
const Enum::YLeaf IsdIssuStatusEt::done {3, "done"};
const Enum::YLeaf IsdIssuStatusEt::abort {4, "abort"};
const Enum::YLeaf IsdIssuStatusEt::cmd_reject {5, "cmd-reject"};
const Enum::YLeaf IsdIssuStatusEt::unknown {6, "unknown"};
const Enum::YLeaf IsdIssuStatusEt::abort_cleanup {7, "abort-cleanup"};
const Enum::YLeaf IsdIssuStatusEt::abort_cmd_reject {8, "abort-cmd-reject"};

const Enum::YLeaf IssudirNodeStatusEt::not_issu_ready {0, "not-issu-ready"};
const Enum::YLeaf IssudirNodeStatusEt::issu_ready {1, "issu-ready"};
const Enum::YLeaf IssudirNodeStatusEt::isus_go {2, "isus-go"};
const Enum::YLeaf IssudirNodeStatusEt::node_fail {3, "node-fail"};

const Enum::YLeaf IssuNodeRoleEt::unknown_role {0, "unknown-role"};
const Enum::YLeaf IssuNodeRoleEt::primary_role {1, "primary-role"};
const Enum::YLeaf IssuNodeRoleEt::secondary_role {2, "secondary-role"};
const Enum::YLeaf IssuNodeRoleEt::tertiary_role {3, "tertiary-role"};

const Enum::YLeaf CardTypeEt::card_rp {0, "card-rp"};
const Enum::YLeaf CardTypeEt::card_drp {1, "card-drp"};
const Enum::YLeaf CardTypeEt::card_lc {2, "card-lc"};
const Enum::YLeaf CardTypeEt::card_sc {3, "card-sc"};
const Enum::YLeaf CardTypeEt::card_sp {4, "card-sp"};
const Enum::YLeaf CardTypeEt::card_other {5, "card-other"};


}
}

