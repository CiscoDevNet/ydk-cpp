
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_crypto_sam_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_crypto_sam_oper {

Sam::Sam()
    :
    system_information(std::make_shared<Sam::SystemInformation>())
	,log_contents(std::make_shared<Sam::LogContents>())
	,devices(std::make_shared<Sam::Devices>())
	,packages(std::make_shared<Sam::Packages>())
	,certificate_revocations(std::make_shared<Sam::CertificateRevocations>())
	,certificate_revocation_list_summary(std::make_shared<Sam::CertificateRevocationListSummary>())
{
    system_information->parent = this;
    log_contents->parent = this;
    devices->parent = this;
    packages->parent = this;
    certificate_revocations->parent = this;
    certificate_revocation_list_summary->parent = this;

    yang_name = "sam"; yang_parent_name = "Cisco-IOS-XR-crypto-sam-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Sam::~Sam()
{
}

bool Sam::has_data() const
{
    return (system_information !=  nullptr && system_information->has_data())
	|| (log_contents !=  nullptr && log_contents->has_data())
	|| (devices !=  nullptr && devices->has_data())
	|| (packages !=  nullptr && packages->has_data())
	|| (certificate_revocations !=  nullptr && certificate_revocations->has_data())
	|| (certificate_revocation_list_summary !=  nullptr && certificate_revocation_list_summary->has_data());
}

bool Sam::has_operation() const
{
    return is_set(yfilter)
	|| (system_information !=  nullptr && system_information->has_operation())
	|| (log_contents !=  nullptr && log_contents->has_operation())
	|| (devices !=  nullptr && devices->has_operation())
	|| (packages !=  nullptr && packages->has_operation())
	|| (certificate_revocations !=  nullptr && certificate_revocations->has_operation())
	|| (certificate_revocation_list_summary !=  nullptr && certificate_revocation_list_summary->has_operation());
}

std::string Sam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-oper:sam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Sam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-information")
    {
        if(system_information == nullptr)
        {
            system_information = std::make_shared<Sam::SystemInformation>();
        }
        return system_information;
    }

    if(child_yang_name == "log-contents")
    {
        if(log_contents == nullptr)
        {
            log_contents = std::make_shared<Sam::LogContents>();
        }
        return log_contents;
    }

    if(child_yang_name == "devices")
    {
        if(devices == nullptr)
        {
            devices = std::make_shared<Sam::Devices>();
        }
        return devices;
    }

    if(child_yang_name == "packages")
    {
        if(packages == nullptr)
        {
            packages = std::make_shared<Sam::Packages>();
        }
        return packages;
    }

    if(child_yang_name == "certificate-revocations")
    {
        if(certificate_revocations == nullptr)
        {
            certificate_revocations = std::make_shared<Sam::CertificateRevocations>();
        }
        return certificate_revocations;
    }

    if(child_yang_name == "certificate-revocation-list-summary")
    {
        if(certificate_revocation_list_summary == nullptr)
        {
            certificate_revocation_list_summary = std::make_shared<Sam::CertificateRevocationListSummary>();
        }
        return certificate_revocation_list_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_information != nullptr)
    {
        children["system-information"] = system_information;
    }

    if(log_contents != nullptr)
    {
        children["log-contents"] = log_contents;
    }

    if(devices != nullptr)
    {
        children["devices"] = devices;
    }

    if(packages != nullptr)
    {
        children["packages"] = packages;
    }

    if(certificate_revocations != nullptr)
    {
        children["certificate-revocations"] = certificate_revocations;
    }

    if(certificate_revocation_list_summary != nullptr)
    {
        children["certificate-revocation-list-summary"] = certificate_revocation_list_summary;
    }

    return children;
}

void Sam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Sam::clone_ptr() const
{
    return std::make_shared<Sam>();
}

std::string Sam::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Sam::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Sam::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Sam::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Sam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-information" || name == "log-contents" || name == "devices" || name == "packages" || name == "certificate-revocations" || name == "certificate-revocation-list-summary")
        return true;
    return false;
}

Sam::SystemInformation::SystemInformation()
    :
    is_running{YType::boolean, "is-running"},
    prompt_interval{YType::uint32, "prompt-interval"},
    is_default_response{YType::boolean, "is-default-response"}
{

    yang_name = "system-information"; yang_parent_name = "sam"; is_top_level_class = false; has_list_ancestor = false;
}

Sam::SystemInformation::~SystemInformation()
{
}

bool Sam::SystemInformation::has_data() const
{
    return is_running.is_set
	|| prompt_interval.is_set
	|| is_default_response.is_set;
}

bool Sam::SystemInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_running.yfilter)
	|| ydk::is_set(prompt_interval.yfilter)
	|| ydk::is_set(is_default_response.yfilter);
}

std::string Sam::SystemInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-oper:sam/" << get_segment_path();
    return path_buffer.str();
}

std::string Sam::SystemInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sam::SystemInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_running.is_set || is_set(is_running.yfilter)) leaf_name_data.push_back(is_running.get_name_leafdata());
    if (prompt_interval.is_set || is_set(prompt_interval.yfilter)) leaf_name_data.push_back(prompt_interval.get_name_leafdata());
    if (is_default_response.is_set || is_set(is_default_response.yfilter)) leaf_name_data.push_back(is_default_response.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sam::SystemInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sam::SystemInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sam::SystemInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-running")
    {
        is_running = value;
        is_running.value_namespace = name_space;
        is_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prompt-interval")
    {
        prompt_interval = value;
        prompt_interval.value_namespace = name_space;
        prompt_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default-response")
    {
        is_default_response = value;
        is_default_response.value_namespace = name_space;
        is_default_response.value_namespace_prefix = name_space_prefix;
    }
}

void Sam::SystemInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-running")
    {
        is_running.yfilter = yfilter;
    }
    if(value_path == "prompt-interval")
    {
        prompt_interval.yfilter = yfilter;
    }
    if(value_path == "is-default-response")
    {
        is_default_response.yfilter = yfilter;
    }
}

bool Sam::SystemInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-running" || name == "prompt-interval" || name == "is-default-response")
        return true;
    return false;
}

Sam::LogContents::LogContents()
{

    yang_name = "log-contents"; yang_parent_name = "sam"; is_top_level_class = false; has_list_ancestor = false;
}

Sam::LogContents::~LogContents()
{
}

bool Sam::LogContents::has_data() const
{
    for (std::size_t index=0; index<log_content.size(); index++)
    {
        if(log_content[index]->has_data())
            return true;
    }
    return false;
}

bool Sam::LogContents::has_operation() const
{
    for (std::size_t index=0; index<log_content.size(); index++)
    {
        if(log_content[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sam::LogContents::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-oper:sam/" << get_segment_path();
    return path_buffer.str();
}

std::string Sam::LogContents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-contents";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sam::LogContents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Sam::LogContents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-content")
    {
        for(auto const & c : log_content)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sam::LogContents::LogContent>();
        c->parent = this;
        log_content.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sam::LogContents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : log_content)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sam::LogContents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sam::LogContents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sam::LogContents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-content")
        return true;
    return false;
}

Sam::LogContents::LogContent::LogContent()
    :
    number_of_lines{YType::int32, "number-of-lines"},
    total_entries{YType::uint32, "total-entries"},
    entries_shown{YType::uint32, "entries-shown"}
{

    yang_name = "log-content"; yang_parent_name = "log-contents"; is_top_level_class = false; has_list_ancestor = false;
}

Sam::LogContents::LogContent::~LogContent()
{
}

bool Sam::LogContents::LogContent::has_data() const
{
    for (std::size_t index=0; index<logs.size(); index++)
    {
        if(logs[index]->has_data())
            return true;
    }
    return number_of_lines.is_set
	|| total_entries.is_set
	|| entries_shown.is_set;
}

bool Sam::LogContents::LogContent::has_operation() const
{
    for (std::size_t index=0; index<logs.size(); index++)
    {
        if(logs[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number_of_lines.yfilter)
	|| ydk::is_set(total_entries.yfilter)
	|| ydk::is_set(entries_shown.yfilter);
}

std::string Sam::LogContents::LogContent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-oper:sam/log-contents/" << get_segment_path();
    return path_buffer.str();
}

std::string Sam::LogContents::LogContent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-content" <<"[number-of-lines='" <<number_of_lines <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sam::LogContents::LogContent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_of_lines.is_set || is_set(number_of_lines.yfilter)) leaf_name_data.push_back(number_of_lines.get_name_leafdata());
    if (total_entries.is_set || is_set(total_entries.yfilter)) leaf_name_data.push_back(total_entries.get_name_leafdata());
    if (entries_shown.is_set || is_set(entries_shown.yfilter)) leaf_name_data.push_back(entries_shown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sam::LogContents::LogContent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logs")
    {
        for(auto const & c : logs)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sam::LogContents::LogContent::Logs>();
        c->parent = this;
        logs.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sam::LogContents::LogContent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : logs)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sam::LogContents::LogContent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-of-lines")
    {
        number_of_lines = value;
        number_of_lines.value_namespace = name_space;
        number_of_lines.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-entries")
    {
        total_entries = value;
        total_entries.value_namespace = name_space;
        total_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entries-shown")
    {
        entries_shown = value;
        entries_shown.value_namespace = name_space;
        entries_shown.value_namespace_prefix = name_space_prefix;
    }
}

void Sam::LogContents::LogContent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-of-lines")
    {
        number_of_lines.yfilter = yfilter;
    }
    if(value_path == "total-entries")
    {
        total_entries.yfilter = yfilter;
    }
    if(value_path == "entries-shown")
    {
        entries_shown.yfilter = yfilter;
    }
}

bool Sam::LogContents::LogContent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logs" || name == "number-of-lines" || name == "total-entries" || name == "entries-shown")
        return true;
    return false;
}

Sam::LogContents::LogContent::Logs::Logs()
    :
    time{YType::str, "time"},
    code{YType::enumeration, "code"},
    target_device{YType::str, "target-device"},
    index_{YType::uint32, "index"},
    error{YType::enumeration, "error"},
    issuer{YType::enumeration, "issuer"},
    serial_no{YType::str, "serial-no"},
    sam_table_index{YType::uint32, "sam-table-index"},
    update_time{YType::str, "update-time"},
    source_device{YType::str, "source-device"},
    table{YType::enumeration, "table"}
{

    yang_name = "logs"; yang_parent_name = "log-content"; is_top_level_class = false; has_list_ancestor = true;
}

Sam::LogContents::LogContent::Logs::~Logs()
{
}

bool Sam::LogContents::LogContent::Logs::has_data() const
{
    return time.is_set
	|| code.is_set
	|| target_device.is_set
	|| index_.is_set
	|| error.is_set
	|| issuer.is_set
	|| serial_no.is_set
	|| sam_table_index.is_set
	|| update_time.is_set
	|| source_device.is_set
	|| table.is_set;
}

bool Sam::LogContents::LogContent::Logs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(target_device.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(issuer.yfilter)
	|| ydk::is_set(serial_no.yfilter)
	|| ydk::is_set(sam_table_index.yfilter)
	|| ydk::is_set(update_time.yfilter)
	|| ydk::is_set(source_device.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Sam::LogContents::LogContent::Logs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sam::LogContents::LogContent::Logs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (target_device.is_set || is_set(target_device.yfilter)) leaf_name_data.push_back(target_device.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (issuer.is_set || is_set(issuer.yfilter)) leaf_name_data.push_back(issuer.get_name_leafdata());
    if (serial_no.is_set || is_set(serial_no.yfilter)) leaf_name_data.push_back(serial_no.get_name_leafdata());
    if (sam_table_index.is_set || is_set(sam_table_index.yfilter)) leaf_name_data.push_back(sam_table_index.get_name_leafdata());
    if (update_time.is_set || is_set(update_time.yfilter)) leaf_name_data.push_back(update_time.get_name_leafdata());
    if (source_device.is_set || is_set(source_device.yfilter)) leaf_name_data.push_back(source_device.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sam::LogContents::LogContent::Logs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sam::LogContents::LogContent::Logs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sam::LogContents::LogContent::Logs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-device")
    {
        target_device = value;
        target_device.value_namespace = name_space;
        target_device.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issuer")
    {
        issuer = value;
        issuer.value_namespace = name_space;
        issuer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-no")
    {
        serial_no = value;
        serial_no.value_namespace = name_space;
        serial_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sam-table-index")
    {
        sam_table_index = value;
        sam_table_index.value_namespace = name_space;
        sam_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-time")
    {
        update_time = value;
        update_time.value_namespace = name_space;
        update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-device")
    {
        source_device = value;
        source_device.value_namespace = name_space;
        source_device.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Sam::LogContents::LogContent::Logs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "target-device")
    {
        target_device.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "issuer")
    {
        issuer.yfilter = yfilter;
    }
    if(value_path == "serial-no")
    {
        serial_no.yfilter = yfilter;
    }
    if(value_path == "sam-table-index")
    {
        sam_table_index.yfilter = yfilter;
    }
    if(value_path == "update-time")
    {
        update_time.yfilter = yfilter;
    }
    if(value_path == "source-device")
    {
        source_device.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Sam::LogContents::LogContent::Logs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "code" || name == "target-device" || name == "index" || name == "error" || name == "issuer" || name == "serial-no" || name == "sam-table-index" || name == "update-time" || name == "source-device" || name == "table")
        return true;
    return false;
}

Sam::Devices::Devices()
{

    yang_name = "devices"; yang_parent_name = "sam"; is_top_level_class = false; has_list_ancestor = false;
}

Sam::Devices::~Devices()
{
}

bool Sam::Devices::has_data() const
{
    for (std::size_t index=0; index<device.size(); index++)
    {
        if(device[index]->has_data())
            return true;
    }
    return false;
}

bool Sam::Devices::has_operation() const
{
    for (std::size_t index=0; index<device.size(); index++)
    {
        if(device[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sam::Devices::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-oper:sam/" << get_segment_path();
    return path_buffer.str();
}

std::string Sam::Devices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "devices";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sam::Devices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Sam::Devices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "device")
    {
        for(auto const & c : device)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sam::Devices::Device>();
        c->parent = this;
        device.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sam::Devices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : device)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sam::Devices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sam::Devices::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sam::Devices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Sam::Devices::Device::Device()
    :
    device_name{YType::str, "device-name"}
    	,
    certificate(std::make_shared<Sam::Devices::Device::Certificate>())
{
    certificate->parent = this;

    yang_name = "device"; yang_parent_name = "devices"; is_top_level_class = false; has_list_ancestor = false;
}

Sam::Devices::Device::~Device()
{
}

bool Sam::Devices::Device::has_data() const
{
    return device_name.is_set
	|| (certificate !=  nullptr && certificate->has_data());
}

bool Sam::Devices::Device::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| (certificate !=  nullptr && certificate->has_operation());
}

std::string Sam::Devices::Device::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-oper:sam/devices/" << get_segment_path();
    return path_buffer.str();
}

std::string Sam::Devices::Device::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device" <<"[device-name='" <<device_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sam::Devices::Device::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sam::Devices::Device::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "certificate")
    {
        if(certificate == nullptr)
        {
            certificate = std::make_shared<Sam::Devices::Device::Certificate>();
        }
        return certificate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sam::Devices::Device::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(certificate != nullptr)
    {
        children["certificate"] = certificate;
    }

    return children;
}

void Sam::Devices::Device::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
}

void Sam::Devices::Device::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
}

bool Sam::Devices::Device::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "certificate" || name == "device-name")
        return true;
    return false;
}

Sam::Devices::Device::Certificate::Certificate()
    :
    brief(std::make_shared<Sam::Devices::Device::Certificate::Brief>())
	,certificate_indexes(std::make_shared<Sam::Devices::Device::Certificate::CertificateIndexes>())
{
    brief->parent = this;
    certificate_indexes->parent = this;

    yang_name = "certificate"; yang_parent_name = "device"; is_top_level_class = false; has_list_ancestor = true;
}

Sam::Devices::Device::Certificate::~Certificate()
{
}

bool Sam::Devices::Device::Certificate::has_data() const
{
    return (brief !=  nullptr && brief->has_data())
	|| (certificate_indexes !=  nullptr && certificate_indexes->has_data());
}

bool Sam::Devices::Device::Certificate::has_operation() const
{
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (certificate_indexes !=  nullptr && certificate_indexes->has_operation());
}

std::string Sam::Devices::Device::Certificate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sam::Devices::Device::Certificate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Sam::Devices::Device::Certificate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Sam::Devices::Device::Certificate::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "certificate-indexes")
    {
        if(certificate_indexes == nullptr)
        {
            certificate_indexes = std::make_shared<Sam::Devices::Device::Certificate::CertificateIndexes>();
        }
        return certificate_indexes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sam::Devices::Device::Certificate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    if(certificate_indexes != nullptr)
    {
        children["certificate-indexes"] = certificate_indexes;
    }

    return children;
}

void Sam::Devices::Device::Certificate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sam::Devices::Device::Certificate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sam::Devices::Device::Certificate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief" || name == "certificate-indexes")
        return true;
    return false;
}

Sam::Devices::Device::Certificate::Brief::Brief()
    :
    location{YType::str, "location"},
    certificate_index{YType::uint16, "certificate-index"}
    	,
    certificate_flags(std::make_shared<Sam::Devices::Device::Certificate::Brief::CertificateFlags>())
{
    certificate_flags->parent = this;

    yang_name = "brief"; yang_parent_name = "certificate"; is_top_level_class = false; has_list_ancestor = true;
}

Sam::Devices::Device::Certificate::Brief::~Brief()
{
}

bool Sam::Devices::Device::Certificate::Brief::has_data() const
{
    return location.is_set
	|| certificate_index.is_set
	|| (certificate_flags !=  nullptr && certificate_flags->has_data());
}

bool Sam::Devices::Device::Certificate::Brief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(certificate_index.yfilter)
	|| (certificate_flags !=  nullptr && certificate_flags->has_operation());
}

std::string Sam::Devices::Device::Certificate::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sam::Devices::Device::Certificate::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (certificate_index.is_set || is_set(certificate_index.yfilter)) leaf_name_data.push_back(certificate_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sam::Devices::Device::Certificate::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "certificate-flags")
    {
        if(certificate_flags == nullptr)
        {
            certificate_flags = std::make_shared<Sam::Devices::Device::Certificate::Brief::CertificateFlags>();
        }
        return certificate_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sam::Devices::Device::Certificate::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(certificate_flags != nullptr)
    {
        children["certificate-flags"] = certificate_flags;
    }

    return children;
}

void Sam::Devices::Device::Certificate::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "certificate-index")
    {
        certificate_index = value;
        certificate_index.value_namespace = name_space;
        certificate_index.value_namespace_prefix = name_space_prefix;
    }
}

void Sam::Devices::Device::Certificate::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "certificate-index")
    {
        certificate_index.yfilter = yfilter;
    }
}

bool Sam::Devices::Device::Certificate::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "certificate-flags" || name == "location" || name == "certificate-index")
        return true;
    return false;
}

Sam::Devices::Device::Certificate::Brief::CertificateFlags::CertificateFlags()
    :
    is_trusted{YType::boolean, "is-trusted"},
    is_revoked{YType::boolean, "is-revoked"},
    is_expired{YType::boolean, "is-expired"},
    is_validated{YType::boolean, "is-validated"}
{

    yang_name = "certificate-flags"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = true;
}

Sam::Devices::Device::Certificate::Brief::CertificateFlags::~CertificateFlags()
{
}

bool Sam::Devices::Device::Certificate::Brief::CertificateFlags::has_data() const
{
    return is_trusted.is_set
	|| is_revoked.is_set
	|| is_expired.is_set
	|| is_validated.is_set;
}

bool Sam::Devices::Device::Certificate::Brief::CertificateFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_trusted.yfilter)
	|| ydk::is_set(is_revoked.yfilter)
	|| ydk::is_set(is_expired.yfilter)
	|| ydk::is_set(is_validated.yfilter);
}

std::string Sam::Devices::Device::Certificate::Brief::CertificateFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sam::Devices::Device::Certificate::Brief::CertificateFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_trusted.is_set || is_set(is_trusted.yfilter)) leaf_name_data.push_back(is_trusted.get_name_leafdata());
    if (is_revoked.is_set || is_set(is_revoked.yfilter)) leaf_name_data.push_back(is_revoked.get_name_leafdata());
    if (is_expired.is_set || is_set(is_expired.yfilter)) leaf_name_data.push_back(is_expired.get_name_leafdata());
    if (is_validated.is_set || is_set(is_validated.yfilter)) leaf_name_data.push_back(is_validated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sam::Devices::Device::Certificate::Brief::CertificateFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sam::Devices::Device::Certificate::Brief::CertificateFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sam::Devices::Device::Certificate::Brief::CertificateFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-trusted")
    {
        is_trusted = value;
        is_trusted.value_namespace = name_space;
        is_trusted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-revoked")
    {
        is_revoked = value;
        is_revoked.value_namespace = name_space;
        is_revoked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-expired")
    {
        is_expired = value;
        is_expired.value_namespace = name_space;
        is_expired.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-validated")
    {
        is_validated = value;
        is_validated.value_namespace = name_space;
        is_validated.value_namespace_prefix = name_space_prefix;
    }
}

void Sam::Devices::Device::Certificate::Brief::CertificateFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-trusted")
    {
        is_trusted.yfilter = yfilter;
    }
    if(value_path == "is-revoked")
    {
        is_revoked.yfilter = yfilter;
    }
    if(value_path == "is-expired")
    {
        is_expired.yfilter = yfilter;
    }
    if(value_path == "is-validated")
    {
        is_validated.yfilter = yfilter;
    }
}

bool Sam::Devices::Device::Certificate::Brief::CertificateFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-trusted" || name == "is-revoked" || name == "is-expired" || name == "is-validated")
        return true;
    return false;
}

Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndexes()
{

    yang_name = "certificate-indexes"; yang_parent_name = "certificate"; is_top_level_class = false; has_list_ancestor = true;
}

Sam::Devices::Device::Certificate::CertificateIndexes::~CertificateIndexes()
{
}

bool Sam::Devices::Device::Certificate::CertificateIndexes::has_data() const
{
    for (std::size_t index=0; index<certificate_index.size(); index++)
    {
        if(certificate_index[index]->has_data())
            return true;
    }
    return false;
}

bool Sam::Devices::Device::Certificate::CertificateIndexes::has_operation() const
{
    for (std::size_t index=0; index<certificate_index.size(); index++)
    {
        if(certificate_index[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sam::Devices::Device::Certificate::CertificateIndexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate-indexes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sam::Devices::Device::Certificate::CertificateIndexes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Sam::Devices::Device::Certificate::CertificateIndexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "certificate-index")
    {
        for(auto const & c : certificate_index)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex>();
        c->parent = this;
        certificate_index.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sam::Devices::Device::Certificate::CertificateIndexes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : certificate_index)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sam::Devices::Device::Certificate::CertificateIndexes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sam::Devices::Device::Certificate::CertificateIndexes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sam::Devices::Device::Certificate::CertificateIndexes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "certificate-index")
        return true;
    return false;
}

Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::CertificateIndex()
    :
    index_{YType::int32, "index"}
    	,
    detail(std::make_shared<Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail>())
{
    detail->parent = this;

    yang_name = "certificate-index"; yang_parent_name = "certificate-indexes"; is_top_level_class = false; has_list_ancestor = true;
}

Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::~CertificateIndex()
{
}

bool Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::has_data() const
{
    return index_.is_set
	|| (detail !=  nullptr && detail->has_data());
}

bool Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate-index" <<"[index='" <<index_ <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "index")
        return true;
    return false;
}

Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::Detail()
    :
    location{YType::str, "location"},
    certificate_index{YType::uint16, "certificate-index"}
    	,
    certificate_flags(std::make_shared<Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags>())
{
    certificate_flags->parent = this;

    yang_name = "detail"; yang_parent_name = "certificate-index"; is_top_level_class = false; has_list_ancestor = true;
}

Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::~Detail()
{
}

bool Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::has_data() const
{
    return location.is_set
	|| certificate_index.is_set
	|| (certificate_flags !=  nullptr && certificate_flags->has_data());
}

bool Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(certificate_index.yfilter)
	|| (certificate_flags !=  nullptr && certificate_flags->has_operation());
}

std::string Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (certificate_index.is_set || is_set(certificate_index.yfilter)) leaf_name_data.push_back(certificate_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "certificate-flags")
    {
        if(certificate_flags == nullptr)
        {
            certificate_flags = std::make_shared<Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags>();
        }
        return certificate_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(certificate_flags != nullptr)
    {
        children["certificate-flags"] = certificate_flags;
    }

    return children;
}

void Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "certificate-index")
    {
        certificate_index = value;
        certificate_index.value_namespace = name_space;
        certificate_index.value_namespace_prefix = name_space_prefix;
    }
}

void Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "certificate-index")
    {
        certificate_index.yfilter = yfilter;
    }
}

bool Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "certificate-flags" || name == "location" || name == "certificate-index")
        return true;
    return false;
}

Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags::CertificateFlags()
    :
    is_trusted{YType::boolean, "is-trusted"},
    is_revoked{YType::boolean, "is-revoked"},
    is_expired{YType::boolean, "is-expired"},
    is_validated{YType::boolean, "is-validated"}
{

    yang_name = "certificate-flags"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags::~CertificateFlags()
{
}

bool Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags::has_data() const
{
    return is_trusted.is_set
	|| is_revoked.is_set
	|| is_expired.is_set
	|| is_validated.is_set;
}

bool Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_trusted.yfilter)
	|| ydk::is_set(is_revoked.yfilter)
	|| ydk::is_set(is_expired.yfilter)
	|| ydk::is_set(is_validated.yfilter);
}

std::string Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_trusted.is_set || is_set(is_trusted.yfilter)) leaf_name_data.push_back(is_trusted.get_name_leafdata());
    if (is_revoked.is_set || is_set(is_revoked.yfilter)) leaf_name_data.push_back(is_revoked.get_name_leafdata());
    if (is_expired.is_set || is_set(is_expired.yfilter)) leaf_name_data.push_back(is_expired.get_name_leafdata());
    if (is_validated.is_set || is_set(is_validated.yfilter)) leaf_name_data.push_back(is_validated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-trusted")
    {
        is_trusted = value;
        is_trusted.value_namespace = name_space;
        is_trusted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-revoked")
    {
        is_revoked = value;
        is_revoked.value_namespace = name_space;
        is_revoked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-expired")
    {
        is_expired = value;
        is_expired.value_namespace = name_space;
        is_expired.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-validated")
    {
        is_validated = value;
        is_validated.value_namespace = name_space;
        is_validated.value_namespace_prefix = name_space_prefix;
    }
}

void Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-trusted")
    {
        is_trusted.yfilter = yfilter;
    }
    if(value_path == "is-revoked")
    {
        is_revoked.yfilter = yfilter;
    }
    if(value_path == "is-expired")
    {
        is_expired.yfilter = yfilter;
    }
    if(value_path == "is-validated")
    {
        is_validated.yfilter = yfilter;
    }
}

bool Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-trusted" || name == "is-revoked" || name == "is-expired" || name == "is-validated")
        return true;
    return false;
}

Sam::Packages::Packages()
{

    yang_name = "packages"; yang_parent_name = "sam"; is_top_level_class = false; has_list_ancestor = false;
}

Sam::Packages::~Packages()
{
}

bool Sam::Packages::has_data() const
{
    for (std::size_t index=0; index<package.size(); index++)
    {
        if(package[index]->has_data())
            return true;
    }
    return false;
}

bool Sam::Packages::has_operation() const
{
    for (std::size_t index=0; index<package.size(); index++)
    {
        if(package[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sam::Packages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-oper:sam/" << get_segment_path();
    return path_buffer.str();
}

std::string Sam::Packages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sam::Packages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Sam::Packages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        for(auto const & c : package)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sam::Packages::Package>();
        c->parent = this;
        package.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sam::Packages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : package)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sam::Packages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sam::Packages::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sam::Packages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package")
        return true;
    return false;
}

Sam::Packages::Package::Package()
    :
    package_name{YType::str, "package-name"},
    location{YType::str, "location"},
    certificate_index{YType::uint16, "certificate-index"}
    	,
    certificate_flags(std::make_shared<Sam::Packages::Package::CertificateFlags>())
{
    certificate_flags->parent = this;

    yang_name = "package"; yang_parent_name = "packages"; is_top_level_class = false; has_list_ancestor = false;
}

Sam::Packages::Package::~Package()
{
}

bool Sam::Packages::Package::has_data() const
{
    return package_name.is_set
	|| location.is_set
	|| certificate_index.is_set
	|| (certificate_flags !=  nullptr && certificate_flags->has_data());
}

bool Sam::Packages::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(package_name.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(certificate_index.yfilter)
	|| (certificate_flags !=  nullptr && certificate_flags->has_operation());
}

std::string Sam::Packages::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-oper:sam/packages/" << get_segment_path();
    return path_buffer.str();
}

std::string Sam::Packages::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package" <<"[package-name='" <<package_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sam::Packages::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (package_name.is_set || is_set(package_name.yfilter)) leaf_name_data.push_back(package_name.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (certificate_index.is_set || is_set(certificate_index.yfilter)) leaf_name_data.push_back(certificate_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sam::Packages::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "certificate-flags")
    {
        if(certificate_flags == nullptr)
        {
            certificate_flags = std::make_shared<Sam::Packages::Package::CertificateFlags>();
        }
        return certificate_flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sam::Packages::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(certificate_flags != nullptr)
    {
        children["certificate-flags"] = certificate_flags;
    }

    return children;
}

void Sam::Packages::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "package-name")
    {
        package_name = value;
        package_name.value_namespace = name_space;
        package_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "certificate-index")
    {
        certificate_index = value;
        certificate_index.value_namespace = name_space;
        certificate_index.value_namespace_prefix = name_space_prefix;
    }
}

void Sam::Packages::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "package-name")
    {
        package_name.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "certificate-index")
    {
        certificate_index.yfilter = yfilter;
    }
}

bool Sam::Packages::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "certificate-flags" || name == "package-name" || name == "location" || name == "certificate-index")
        return true;
    return false;
}

Sam::Packages::Package::CertificateFlags::CertificateFlags()
    :
    is_trusted{YType::boolean, "is-trusted"},
    is_revoked{YType::boolean, "is-revoked"},
    is_expired{YType::boolean, "is-expired"},
    is_validated{YType::boolean, "is-validated"}
{

    yang_name = "certificate-flags"; yang_parent_name = "package"; is_top_level_class = false; has_list_ancestor = true;
}

Sam::Packages::Package::CertificateFlags::~CertificateFlags()
{
}

bool Sam::Packages::Package::CertificateFlags::has_data() const
{
    return is_trusted.is_set
	|| is_revoked.is_set
	|| is_expired.is_set
	|| is_validated.is_set;
}

bool Sam::Packages::Package::CertificateFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_trusted.yfilter)
	|| ydk::is_set(is_revoked.yfilter)
	|| ydk::is_set(is_expired.yfilter)
	|| ydk::is_set(is_validated.yfilter);
}

std::string Sam::Packages::Package::CertificateFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sam::Packages::Package::CertificateFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_trusted.is_set || is_set(is_trusted.yfilter)) leaf_name_data.push_back(is_trusted.get_name_leafdata());
    if (is_revoked.is_set || is_set(is_revoked.yfilter)) leaf_name_data.push_back(is_revoked.get_name_leafdata());
    if (is_expired.is_set || is_set(is_expired.yfilter)) leaf_name_data.push_back(is_expired.get_name_leafdata());
    if (is_validated.is_set || is_set(is_validated.yfilter)) leaf_name_data.push_back(is_validated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sam::Packages::Package::CertificateFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sam::Packages::Package::CertificateFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sam::Packages::Package::CertificateFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-trusted")
    {
        is_trusted = value;
        is_trusted.value_namespace = name_space;
        is_trusted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-revoked")
    {
        is_revoked = value;
        is_revoked.value_namespace = name_space;
        is_revoked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-expired")
    {
        is_expired = value;
        is_expired.value_namespace = name_space;
        is_expired.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-validated")
    {
        is_validated = value;
        is_validated.value_namespace = name_space;
        is_validated.value_namespace_prefix = name_space_prefix;
    }
}

void Sam::Packages::Package::CertificateFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-trusted")
    {
        is_trusted.yfilter = yfilter;
    }
    if(value_path == "is-revoked")
    {
        is_revoked.yfilter = yfilter;
    }
    if(value_path == "is-expired")
    {
        is_expired.yfilter = yfilter;
    }
    if(value_path == "is-validated")
    {
        is_validated.yfilter = yfilter;
    }
}

bool Sam::Packages::Package::CertificateFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-trusted" || name == "is-revoked" || name == "is-expired" || name == "is-validated")
        return true;
    return false;
}

Sam::CertificateRevocations::CertificateRevocations()
{

    yang_name = "certificate-revocations"; yang_parent_name = "sam"; is_top_level_class = false; has_list_ancestor = false;
}

Sam::CertificateRevocations::~CertificateRevocations()
{
}

bool Sam::CertificateRevocations::has_data() const
{
    for (std::size_t index=0; index<certificate_revocation.size(); index++)
    {
        if(certificate_revocation[index]->has_data())
            return true;
    }
    return false;
}

bool Sam::CertificateRevocations::has_operation() const
{
    for (std::size_t index=0; index<certificate_revocation.size(); index++)
    {
        if(certificate_revocation[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sam::CertificateRevocations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-oper:sam/" << get_segment_path();
    return path_buffer.str();
}

std::string Sam::CertificateRevocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate-revocations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sam::CertificateRevocations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Sam::CertificateRevocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "certificate-revocation")
    {
        for(auto const & c : certificate_revocation)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Sam::CertificateRevocations::CertificateRevocation>();
        c->parent = this;
        certificate_revocation.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sam::CertificateRevocations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : certificate_revocation)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Sam::CertificateRevocations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sam::CertificateRevocations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sam::CertificateRevocations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "certificate-revocation")
        return true;
    return false;
}

Sam::CertificateRevocations::CertificateRevocation::CertificateRevocation()
    :
    crl_index{YType::int32, "crl-index"}
    	,
    certificate_revocation_list_detail(std::make_shared<Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail>())
{
    certificate_revocation_list_detail->parent = this;

    yang_name = "certificate-revocation"; yang_parent_name = "certificate-revocations"; is_top_level_class = false; has_list_ancestor = false;
}

Sam::CertificateRevocations::CertificateRevocation::~CertificateRevocation()
{
}

bool Sam::CertificateRevocations::CertificateRevocation::has_data() const
{
    return crl_index.is_set
	|| (certificate_revocation_list_detail !=  nullptr && certificate_revocation_list_detail->has_data());
}

bool Sam::CertificateRevocations::CertificateRevocation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(crl_index.yfilter)
	|| (certificate_revocation_list_detail !=  nullptr && certificate_revocation_list_detail->has_operation());
}

std::string Sam::CertificateRevocations::CertificateRevocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-oper:sam/certificate-revocations/" << get_segment_path();
    return path_buffer.str();
}

std::string Sam::CertificateRevocations::CertificateRevocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate-revocation" <<"[crl-index='" <<crl_index <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sam::CertificateRevocations::CertificateRevocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crl_index.is_set || is_set(crl_index.yfilter)) leaf_name_data.push_back(crl_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sam::CertificateRevocations::CertificateRevocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "certificate-revocation-list-detail")
    {
        if(certificate_revocation_list_detail == nullptr)
        {
            certificate_revocation_list_detail = std::make_shared<Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail>();
        }
        return certificate_revocation_list_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sam::CertificateRevocations::CertificateRevocation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(certificate_revocation_list_detail != nullptr)
    {
        children["certificate-revocation-list-detail"] = certificate_revocation_list_detail;
    }

    return children;
}

void Sam::CertificateRevocations::CertificateRevocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "crl-index")
    {
        crl_index = value;
        crl_index.value_namespace = name_space;
        crl_index.value_namespace_prefix = name_space_prefix;
    }
}

void Sam::CertificateRevocations::CertificateRevocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "crl-index")
    {
        crl_index.yfilter = yfilter;
    }
}

bool Sam::CertificateRevocations::CertificateRevocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "certificate-revocation-list-detail" || name == "crl-index")
        return true;
    return false;
}

Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::CertificateRevocationListDetail()
    :
    crl_index{YType::uint16, "crl-index"},
    updates{YType::str, "updates"}
    	,
    issuer(std::make_shared<Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer>())
{
    issuer->parent = this;

    yang_name = "certificate-revocation-list-detail"; yang_parent_name = "certificate-revocation"; is_top_level_class = false; has_list_ancestor = true;
}

Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::~CertificateRevocationListDetail()
{
}

bool Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::has_data() const
{
    return crl_index.is_set
	|| updates.is_set
	|| (issuer !=  nullptr && issuer->has_data());
}

bool Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(crl_index.yfilter)
	|| ydk::is_set(updates.yfilter)
	|| (issuer !=  nullptr && issuer->has_operation());
}

std::string Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate-revocation-list-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crl_index.is_set || is_set(crl_index.yfilter)) leaf_name_data.push_back(crl_index.get_name_leafdata());
    if (updates.is_set || is_set(updates.yfilter)) leaf_name_data.push_back(updates.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "issuer")
    {
        if(issuer == nullptr)
        {
            issuer = std::make_shared<Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer>();
        }
        return issuer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(issuer != nullptr)
    {
        children["issuer"] = issuer;
    }

    return children;
}

void Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "crl-index")
    {
        crl_index = value;
        crl_index.value_namespace = name_space;
        crl_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updates")
    {
        updates = value;
        updates.value_namespace = name_space;
        updates.value_namespace_prefix = name_space_prefix;
    }
}

void Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "crl-index")
    {
        crl_index.yfilter = yfilter;
    }
    if(value_path == "updates")
    {
        updates.yfilter = yfilter;
    }
}

bool Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "issuer" || name == "crl-index" || name == "updates")
        return true;
    return false;
}

Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer::Issuer()
    :
    common_name{YType::str, "common-name"},
    organization{YType::str, "organization"},
    country{YType::str, "country"}
{

    yang_name = "issuer"; yang_parent_name = "certificate-revocation-list-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer::~Issuer()
{
}

bool Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer::has_data() const
{
    return common_name.is_set
	|| organization.is_set
	|| country.is_set;
}

bool Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common_name.yfilter)
	|| ydk::is_set(organization.yfilter)
	|| ydk::is_set(country.yfilter);
}

std::string Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issuer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_name.is_set || is_set(common_name.yfilter)) leaf_name_data.push_back(common_name.get_name_leafdata());
    if (organization.is_set || is_set(organization.yfilter)) leaf_name_data.push_back(organization.get_name_leafdata());
    if (country.is_set || is_set(country.yfilter)) leaf_name_data.push_back(country.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common-name")
    {
        common_name = value;
        common_name.value_namespace = name_space;
        common_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "organization")
    {
        organization = value;
        organization.value_namespace = name_space;
        organization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "country")
    {
        country = value;
        country.value_namespace = name_space;
        country.value_namespace_prefix = name_space_prefix;
    }
}

void Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common-name")
    {
        common_name.yfilter = yfilter;
    }
    if(value_path == "organization")
    {
        organization.yfilter = yfilter;
    }
    if(value_path == "country")
    {
        country.yfilter = yfilter;
    }
}

bool Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-name" || name == "organization" || name == "country")
        return true;
    return false;
}

Sam::CertificateRevocationListSummary::CertificateRevocationListSummary()
    :
    crl_index{YType::uint16, "crl-index"},
    updates{YType::str, "updates"}
    	,
    issuer(std::make_shared<Sam::CertificateRevocationListSummary::Issuer>())
{
    issuer->parent = this;

    yang_name = "certificate-revocation-list-summary"; yang_parent_name = "sam"; is_top_level_class = false; has_list_ancestor = false;
}

Sam::CertificateRevocationListSummary::~CertificateRevocationListSummary()
{
}

bool Sam::CertificateRevocationListSummary::has_data() const
{
    return crl_index.is_set
	|| updates.is_set
	|| (issuer !=  nullptr && issuer->has_data());
}

bool Sam::CertificateRevocationListSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(crl_index.yfilter)
	|| ydk::is_set(updates.yfilter)
	|| (issuer !=  nullptr && issuer->has_operation());
}

std::string Sam::CertificateRevocationListSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-oper:sam/" << get_segment_path();
    return path_buffer.str();
}

std::string Sam::CertificateRevocationListSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate-revocation-list-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sam::CertificateRevocationListSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crl_index.is_set || is_set(crl_index.yfilter)) leaf_name_data.push_back(crl_index.get_name_leafdata());
    if (updates.is_set || is_set(updates.yfilter)) leaf_name_data.push_back(updates.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sam::CertificateRevocationListSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "issuer")
    {
        if(issuer == nullptr)
        {
            issuer = std::make_shared<Sam::CertificateRevocationListSummary::Issuer>();
        }
        return issuer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sam::CertificateRevocationListSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(issuer != nullptr)
    {
        children["issuer"] = issuer;
    }

    return children;
}

void Sam::CertificateRevocationListSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "crl-index")
    {
        crl_index = value;
        crl_index.value_namespace = name_space;
        crl_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updates")
    {
        updates = value;
        updates.value_namespace = name_space;
        updates.value_namespace_prefix = name_space_prefix;
    }
}

void Sam::CertificateRevocationListSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "crl-index")
    {
        crl_index.yfilter = yfilter;
    }
    if(value_path == "updates")
    {
        updates.yfilter = yfilter;
    }
}

bool Sam::CertificateRevocationListSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "issuer" || name == "crl-index" || name == "updates")
        return true;
    return false;
}

Sam::CertificateRevocationListSummary::Issuer::Issuer()
    :
    common_name{YType::str, "common-name"},
    organization{YType::str, "organization"},
    country{YType::str, "country"}
{

    yang_name = "issuer"; yang_parent_name = "certificate-revocation-list-summary"; is_top_level_class = false; has_list_ancestor = false;
}

Sam::CertificateRevocationListSummary::Issuer::~Issuer()
{
}

bool Sam::CertificateRevocationListSummary::Issuer::has_data() const
{
    return common_name.is_set
	|| organization.is_set
	|| country.is_set;
}

bool Sam::CertificateRevocationListSummary::Issuer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common_name.yfilter)
	|| ydk::is_set(organization.yfilter)
	|| ydk::is_set(country.yfilter);
}

std::string Sam::CertificateRevocationListSummary::Issuer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-oper:sam/certificate-revocation-list-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Sam::CertificateRevocationListSummary::Issuer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issuer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sam::CertificateRevocationListSummary::Issuer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_name.is_set || is_set(common_name.yfilter)) leaf_name_data.push_back(common_name.get_name_leafdata());
    if (organization.is_set || is_set(organization.yfilter)) leaf_name_data.push_back(organization.get_name_leafdata());
    if (country.is_set || is_set(country.yfilter)) leaf_name_data.push_back(country.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sam::CertificateRevocationListSummary::Issuer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sam::CertificateRevocationListSummary::Issuer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Sam::CertificateRevocationListSummary::Issuer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common-name")
    {
        common_name = value;
        common_name.value_namespace = name_space;
        common_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "organization")
    {
        organization = value;
        organization.value_namespace = name_space;
        organization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "country")
    {
        country = value;
        country.value_namespace = name_space;
        country.value_namespace_prefix = name_space_prefix;
    }
}

void Sam::CertificateRevocationListSummary::Issuer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common-name")
    {
        common_name.yfilter = yfilter;
    }
    if(value_path == "organization")
    {
        organization.yfilter = yfilter;
    }
    if(value_path == "country")
    {
        country.yfilter = yfilter;
    }
}

bool Sam::CertificateRevocationListSummary::Issuer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-name" || name == "organization" || name == "country")
        return true;
    return false;
}

const Enum::YLeaf LogTables::unkown {0, "unkown"};
const Enum::YLeaf LogTables::memory_digest_table {1, "memory-digest-table"};
const Enum::YLeaf LogTables::system_database_digest {2, "system-database-digest"};
const Enum::YLeaf LogTables::sam_tables {3, "sam-tables"};

const Enum::YLeaf CertificateIssuer::unknown {0, "unknown"};
const Enum::YLeaf CertificateIssuer::code_signing_server_certificate_authority {1, "code-signing-server-certificate-authority"};

const Enum::YLeaf LogError::unknown {0, "unknown"};
const Enum::YLeaf LogError::log_message_error {1, "log-message-error"};
const Enum::YLeaf LogError::get_issuer_name_failed {2, "get-issuer-name-failed"};

const Enum::YLeaf LogCode::unknown {0, "unknown"};
const Enum::YLeaf LogCode::sam_server_restared_router_reboot {1, "sam-server-restared-router-reboot"};
const Enum::YLeaf LogCode::sam_server_restared {2, "sam-server-restared"};
const Enum::YLeaf LogCode::added_certificate_in_table {3, "added-certificate-in-table"};
const Enum::YLeaf LogCode::copied_certificate_in_table {4, "copied-certificate-in-table"};
const Enum::YLeaf LogCode::certificate_flag_changed {5, "certificate-flag-changed"};
const Enum::YLeaf LogCode::validated_certificate {6, "validated-certificate"};
const Enum::YLeaf LogCode::certificate_expired_detected {7, "certificate-expired-detected"};
const Enum::YLeaf LogCode::certificate_revoked_detected {8, "certificate-revoked-detected"};
const Enum::YLeaf LogCode::ca_certificate_expired_detected {9, "ca-certificate-expired-detected"};
const Enum::YLeaf LogCode::ca_certificate_revoked_detected {10, "ca-certificate-revoked-detected"};
const Enum::YLeaf LogCode::deleted_certificate_from_table {11, "deleted-certificate-from-table"};
const Enum::YLeaf LogCode::crl_added_updated_in_table {12, "crl-added-updated-in-table"};
const Enum::YLeaf LogCode::checked_memory_digest {13, "checked-memory-digest"};
const Enum::YLeaf LogCode::nvram_digest_mismatch_detected {14, "nvram-digest-mismatch-detected"};
const Enum::YLeaf LogCode::insecure_backup_file_detected {15, "insecure-backup-file-detected"};
const Enum::YLeaf LogCode::error_restore_operation {16, "error-restore-operation"};
const Enum::YLeaf LogCode::backup_file_on_nvram_deleted {17, "backup-file-on-nvram-deleted"};
const Enum::YLeaf LogCode::sam_log_file_recovered_from_system_database {18, "sam-log-file-recovered-from-system-database"};
const Enum::YLeaf LogCode::validated_elf {19, "validated-elf"};
const Enum::YLeaf LogCode::namespace_deleted_recovered_by_sam {20, "namespace-deleted-recovered-by-sam"};


}
}

